ARCH ?= $(shell uname -i)
PYTHON ?= /usr/bin/python3
COMMIT ?= $(shell git rev-parse HEAD)
VERSION ?= $(shell $(PYTHON) ./version.py $(shell git show -s --format="%ct" $(shell git rev-parse HEAD)) "release-23.01")
SOURCE_DATE_EPOCH ?= $(shell git show -s --format="%ct" $(shell git rev-parse HEAD))

export VERSION COMMIT SOURCE_DATE_EPOCH

_LDFLAGS := $(LDFLAGS) -lrt -lpcap -lsodium -g
_CFLAGS := $(CFLAGS) -g -Wall -O2 -DWFB_VERSION='"$(VERSION)-$(shell /bin/bash -c '_tmp=$(COMMIT); echo $${_tmp::8}')"'



all: all_bin gs.key test

env:
	virtualenv env --python=$(PYTHON)
	./env/bin/pip install --upgrade pip setuptools stdeb

all_bin: wfb_rx wfb_tx wfb_keygen

gs.key: wfb_keygen
	@if ! [ -f gs.key ]; then ./wfb_keygen; fi

src/%.o: src/%.c src/*.h
	$(CC) $(_CFLAGS) -std=gnu99 -g -c -o $@ $<

src/%.o: src/%.cpp src/*.hpp src/*.h
	$(CXX) $(_CFLAGS) -std=gnu++11 -g -c -o $@ $<

wfb_rx: src/rx.o src/radiotap.o src/fec.o src/wifibroadcast.o
	$(CXX) -g -o $@ $^ $(_LDFLAGS) 

wfb_tx: src/tx.o src/fec.o src/wifibroadcast.o
	$(CXX) -o $@ $^ $(_LDFLAGS)

wfb_keygen: src/keygen.o
	$(CC) -o $@ $^ $(_LDFLAGS)

test: all_bin
	PYTHONPATH=`pwd` trial3 wfb_ng.tests

rpm:  all_bin env
	rm -rf dist
	./env/bin/python ./setup.py bdist_rpm --force-arch $(ARCH)
	rm -rf wfb_ng.egg-info/

deb:  all_bin env
	rm -rf deb_dist
	./env/bin/python ./setup.py --command-packages=stdeb.command bdist_deb
	rm -rf wfb_ng.egg-info/ wfb-ng-$(VERSION).tar.gz

bdist: all_bin
	rm -rf dist
	$(PYTHON) ./setup.py bdist --plat-name linux-$(ARCH)
	rm -rf wfb_ng.egg-info/

clean:
	rm -rf env wfb_rx wfb_tx wfb_keygen dist deb_dist build wfb_ng.egg-info wfb-ng-*.tar.gz _trial_temp *~ src/*.o


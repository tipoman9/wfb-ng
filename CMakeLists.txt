cmake_minimum_required(VERSION 3.13)

project(wfb_rx C)

set(CMAKE_C_STANDARD 11)

find_package(MAVLink REQUIRED)

add_executable(wfb_rx src/rx.cpp)

target_link_libraries(wfb_rx PRIVATE MAVLink::mavlink)

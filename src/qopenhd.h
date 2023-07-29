#include "mavlink/common/mavlink.h"
#include "mavlink_stat_monitor_mode_wifi_card.h"
#include "mavlink_stat_video_ground.h"

void InjectInfo(int card_index, int rssi, int packets_ttl, int packets_lost){
    printf("OpenHD injector started /r/n");
}
 
int channel=0;

static bool EnableMavlinkRSSI=false;

void send_stats_monitor_mode_wifi_card(int socket_fd, int card_index, int rssi, int pckt_ttl)
{
    if (!EnableMavlinkRSSI)
        return;

     mavlink_message_t message;
 
      mavlink_msg_openhd_stats_monitor_mode_wifi_card_pack_chan(
        100,
        MAV_COMP_ID_SYSTEM_CONTROL,
        MAVLINK_COMM_1,
        &message,
        card_index,rssi*-1,pckt_ttl,909,0,0);
        

    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    const int len = mavlink_msg_to_send_buffer(buffer, &message);

    int ret = //sendto(socket_fd, buffer, len, 0, (const struct sockaddr*)out_addr, out_addr_len);
        ret=send(socket_fd,buffer, len,MSG_DONTWAIT);
    if (ret != len) {
        printf("sendto error: %s\n", strerror(errno));
    } else {
        //printf("Sent %d:%d-%d \n",card_index,rssi,pckt_ttl);
    }

 

}




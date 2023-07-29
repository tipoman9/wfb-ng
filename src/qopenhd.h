#include "mavlink/common/mavlink.h"
#include "mavlink_stat_monitor_mode_wifi_card.h"
#include "mavlink_stat_video_ground.h"
#include "mavlink_msg_openhd_stats_monitor_mode_wifi_link.h"



void InjectInfo(int card_index, int rssi, int packets_ttl, int packets_lost){
    printf("OpenHD injector started /r/n");
}
 
int channel=0;

int socket_mav=0;

bool EnableMavlinkRSSI=false;
int MavlinkPort=0;

int open_udp_socket_for_tx(const std::string &client_addr, int client_port)
    {
        struct sockaddr_in saddr;
        int fd = socket(AF_INET, SOCK_DGRAM, 0);
        if (fd < 0) throw std::runtime_error(string_format("Error opening socket: %s", strerror(errno)));

        bzero((char *) &saddr, sizeof(saddr));
        saddr.sin_family = AF_INET;
        saddr.sin_addr.s_addr = inet_addr(client_addr.c_str());
        saddr.sin_port = htons((unsigned short)client_port);

        if (connect(fd, (struct sockaddr *) &saddr, sizeof(saddr)) < 0)
        {
            throw std::runtime_error(string_format("Connect error: %s", strerror(errno)));
        }
        return fd;
    }


int ret;
void send_stats_monitor_mode_wifi_card(int socket_fd, int card_index, int rssi, int pckt_ttl)
{
    if (!EnableMavlinkRSSI)
        return;

    if (socket_mav!=0)
        socket_fd=socket_mav;

     mavlink_message_t message;
 
      mavlink_msg_openhd_stats_monitor_mode_wifi_card_pack_chan(
        100,
        MAV_COMP_ID_SYSTEM_CONTROL,
        MAVLINK_COMM_1,
        &message,
        card_index,rssi*-1,pckt_ttl,909,0,0);
        

    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    const int len = mavlink_msg_to_send_buffer(buffer, &message);

    
    //if (socket)
     ret = send(socket_fd,buffer, len,MSG_DONTWAIT);

    if (ret != len) {
        printf("sendto error: %s\n", strerror(errno));
    } else {
        //printf("Sent %d:%d-%d \n",card_index,rssi,pckt_ttl);
    } 

}


void send_stat_video_ground(int socket_fd, int32_t bitrate, int32_t count_blocks_lost, 
int32_t count_blocks_recovered, int32_t count_fragments_recovered ){
    mavlink_message_t message;
    if (!EnableMavlinkRSSI)
        return;
    if (socket_mav!=0)
        socket_fd=socket_mav;

      mavlink_msg_openhd_stats_wb_video_ground_pack_chan(
        100,//we seperate by sys ID's - there are up to 3 Systems - The OpenHD air unit, the OpenHD ground unit and the FC connected to the OHD
        MAV_COMP_ID_SYSTEM_CONTROL,
        MAVLINK_COMM_1,
        &message, channel,
        bitrate,//MBit/s in separate control
        500,
        count_blocks_lost,count_blocks_recovered,count_fragments_recovered,//Shown in extra info window for link quality
        0,0,0,0,0);
    

    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    const int len = mavlink_msg_to_send_buffer(buffer, &message);
    
    int    ret=send(socket_fd,buffer, len,MSG_DONTWAIT);
    if (ret != len) {
        //printf("sendto error: %s\n", strerror(errno));
    } else {
        //printf("Sent attitude\n");
    } 
}



void send_stats_monitor_mode_wifi_link(int socket_fd, int16_t loss_percent, 
        int32_t rx_pps, int32_t rx_bps, int32_t dropped)
{
    mavlink_message_t message;
    if (!EnableMavlinkRSSI)
        return;
    if (socket_mav!=0)
        socket_fd=socket_mav;
/*
  static constexpr auto OHD_SYS_ID_GROUND = 100;
static constexpr auto OHD_SYS_ID_AIR = 101;
   // Other than ping, we seperate by sys ID's - there are up to 3 Systems - The OpenHD air unit, the OpenHD ground unit and the FC connected to the OHD air unit.
    // The systems then (optionally) can seperate by components, but r.n this is not needed.
*/

      mavlink_msg_openhd_stats_monitor_mode_wifi_link_pack_chan(
        100,
        MAV_COMP_ID_SYSTEM_CONTROL,
        MAVLINK_COMM_1,
        &message,0,rx_pps,0,rx_bps,
        loss_percent, //Loss percentage
        0,dropped,0,0,0,0);
        

    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    const int len = mavlink_msg_to_send_buffer(buffer, &message);
    int    ret=send(socket_fd,buffer, len,MSG_DONTWAIT);
    
    if (ret != len) {
        //printf("sendto error: %s\n", strerror(errno));
    } else {
       // printf("Sent attitude\n");
    }
}

 
 //static struct sockaddr_in sin_out = {
//	.sin_family = AF_INET,
//};


void send_heartbeat(int socket_fd)
{
    mavlink_message_t message;

    if (!EnableMavlinkRSSI)
        return;
    if (socket_mav!=0)
        socket_fd=socket_mav;

    //const uint8_t system_id = 42;
    const uint8_t base_mode = 0;
    const uint8_t custom_mode = 0;
    mavlink_msg_heartbeat_pack_chan(
        100,
        MAV_COMP_ID_SYSTEM_CONTROL,
        MAVLINK_COMM_1,
        &message,
        MAV_TYPE_GENERIC,
        MAV_AUTOPILOT_GENERIC,
        base_mode,
        custom_mode,
        MAV_STATE_STANDBY);

    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    const int len = mavlink_msg_to_send_buffer(buffer, &message);

    int    ret=send(socket_fd,buffer, len,MSG_DONTWAIT);
    if (ret != len) {
        //printf("sendto error: %s\n", strerror(errno));
    } else {
        //printf("Sent heartbeat\n");
    }
}

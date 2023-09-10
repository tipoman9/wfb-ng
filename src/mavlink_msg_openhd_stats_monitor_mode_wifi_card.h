#pragma once
// MESSAGE OPENHD_STATS_MONITOR_MODE_WIFI_CARD PACKING

#define MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD 1212


typedef struct __mavlink_openhd_stats_monitor_mode_wifi_card_t {
 uint32_t count_p_received; /*<  All received (incoming) packets*/
 uint32_t count_p_injected; /*<  All injected (outgoing) packets*/
 int32_t dummy2; /*<  for future use*/
 int16_t tx_power; /*<  either in override index units or mW*/
 int16_t dummy1; /*<  for future use*/
 uint8_t card_index; /*<  A system / component might have more than one card for diversity*/
 uint8_t card_type; /*<  r.n only 0 for rtl8812au*/
 int8_t rx_rssi_1; /*<  rx rssi in dBm for antenna 1*/
 int8_t rx_rssi_2; /*<  rx rssi in dBm for antenna 2*/
 int8_t rx_signal_quality; /*<  depends on the wifi driver*/
 int8_t curr_rx_packet_loss_perc; /*<  rx packet loss (for this card)*/
 uint8_t curr_status; /*<  set to 1 if something's wrong with the card*/
 int8_t dummy0; /*<  for future use*/
} mavlink_openhd_stats_monitor_mode_wifi_card_t;

#define MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN 24
#define MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_MIN_LEN 24
#define MAVLINK_MSG_ID_1212_LEN 24
#define MAVLINK_MSG_ID_1212_MIN_LEN 24

#define MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_CRC 153
#define MAVLINK_MSG_ID_1212_CRC 153



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_OPENHD_STATS_MONITOR_MODE_WIFI_CARD { \
    1212, \
    "OPENHD_STATS_MONITOR_MODE_WIFI_CARD", \
    13, \
    {  { "card_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, card_index) }, \
         { "card_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, card_type) }, \
         { "rx_rssi_1", NULL, MAVLINK_TYPE_INT8_T, 0, 18, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, rx_rssi_1) }, \
         { "rx_rssi_2", NULL, MAVLINK_TYPE_INT8_T, 0, 19, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, rx_rssi_2) }, \
         { "rx_signal_quality", NULL, MAVLINK_TYPE_INT8_T, 0, 20, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, rx_signal_quality) }, \
         { "tx_power", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, tx_power) }, \
         { "count_p_received", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, count_p_received) }, \
         { "count_p_injected", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, count_p_injected) }, \
         { "curr_rx_packet_loss_perc", NULL, MAVLINK_TYPE_INT8_T, 0, 21, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, curr_rx_packet_loss_perc) }, \
         { "curr_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 22, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, curr_status) }, \
         { "dummy0", NULL, MAVLINK_TYPE_INT8_T, 0, 23, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, dummy0) }, \
         { "dummy1", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, dummy1) }, \
         { "dummy2", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, dummy2) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_OPENHD_STATS_MONITOR_MODE_WIFI_CARD { \
    "OPENHD_STATS_MONITOR_MODE_WIFI_CARD", \
    13, \
    {  { "card_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, card_index) }, \
         { "card_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, card_type) }, \
         { "rx_rssi_1", NULL, MAVLINK_TYPE_INT8_T, 0, 18, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, rx_rssi_1) }, \
         { "rx_rssi_2", NULL, MAVLINK_TYPE_INT8_T, 0, 19, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, rx_rssi_2) }, \
         { "rx_signal_quality", NULL, MAVLINK_TYPE_INT8_T, 0, 20, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, rx_signal_quality) }, \
         { "tx_power", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, tx_power) }, \
         { "count_p_received", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, count_p_received) }, \
         { "count_p_injected", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, count_p_injected) }, \
         { "curr_rx_packet_loss_perc", NULL, MAVLINK_TYPE_INT8_T, 0, 21, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, curr_rx_packet_loss_perc) }, \
         { "curr_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 22, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, curr_status) }, \
         { "dummy0", NULL, MAVLINK_TYPE_INT8_T, 0, 23, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, dummy0) }, \
         { "dummy1", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, dummy1) }, \
         { "dummy2", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, dummy2) }, \
         } \
}
#endif

/**
 * @brief Pack a openhd_stats_monitor_mode_wifi_card message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param card_index  A system / component might have more than one card for diversity
 * @param card_type  r.n only 0 for rtl8812au
 * @param rx_rssi_1  rx rssi in dBm for antenna 1
 * @param rx_rssi_2  rx rssi in dBm for antenna 2
 * @param rx_signal_quality  depends on the wifi driver
 * @param tx_power  either in override index units or mW
 * @param count_p_received  All received (incoming) packets
 * @param count_p_injected  All injected (outgoing) packets
 * @param curr_rx_packet_loss_perc  rx packet loss (for this card)
 * @param curr_status  set to 1 if something's wrong with the card
 * @param dummy0  for future use
 * @param dummy1  for future use
 * @param dummy2  for future use
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t card_index, uint8_t card_type, int8_t rx_rssi_1, int8_t rx_rssi_2, int8_t rx_signal_quality, int16_t tx_power, uint32_t count_p_received, uint32_t count_p_injected, int8_t curr_rx_packet_loss_perc, uint8_t curr_status, int8_t dummy0, int16_t dummy1, int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN];
    _mav_put_uint32_t(buf, 0, count_p_received);
    _mav_put_uint32_t(buf, 4, count_p_injected);
    _mav_put_int32_t(buf, 8, dummy2);
    _mav_put_int16_t(buf, 12, tx_power);
    _mav_put_int16_t(buf, 14, dummy1);
    _mav_put_uint8_t(buf, 16, card_index);
    _mav_put_uint8_t(buf, 17, card_type);
    _mav_put_int8_t(buf, 18, rx_rssi_1);
    _mav_put_int8_t(buf, 19, rx_rssi_2);
    _mav_put_int8_t(buf, 20, rx_signal_quality);
    _mav_put_int8_t(buf, 21, curr_rx_packet_loss_perc);
    _mav_put_uint8_t(buf, 22, curr_status);
    _mav_put_int8_t(buf, 23, dummy0);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN);
#else
    mavlink_openhd_stats_monitor_mode_wifi_card_t packet;
    packet.count_p_received = count_p_received;
    packet.count_p_injected = count_p_injected;
    packet.dummy2 = dummy2;
    packet.tx_power = tx_power;
    packet.dummy1 = dummy1;
    packet.card_index = card_index;
    packet.card_type = card_type;
    packet.rx_rssi_1 = rx_rssi_1;
    packet.rx_rssi_2 = rx_rssi_2;
    packet.rx_signal_quality = rx_signal_quality;
    packet.curr_rx_packet_loss_perc = curr_rx_packet_loss_perc;
    packet.curr_status = curr_status;
    packet.dummy0 = dummy0;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_CRC);
}

/**
 * @brief Pack a openhd_stats_monitor_mode_wifi_card message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param card_index  A system / component might have more than one card for diversity
 * @param card_type  r.n only 0 for rtl8812au
 * @param rx_rssi_1  rx rssi in dBm for antenna 1
 * @param rx_rssi_2  rx rssi in dBm for antenna 2
 * @param rx_signal_quality  depends on the wifi driver
 * @param tx_power  either in override index units or mW
 * @param count_p_received  All received (incoming) packets
 * @param count_p_injected  All injected (outgoing) packets
 * @param curr_rx_packet_loss_perc  rx packet loss (for this card)
 * @param curr_status  set to 1 if something's wrong with the card
 * @param dummy0  for future use
 * @param dummy1  for future use
 * @param dummy2  for future use
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t card_index,uint8_t card_type,int8_t rx_rssi_1,int8_t rx_rssi_2,int8_t rx_signal_quality,int16_t tx_power,uint32_t count_p_received,uint32_t count_p_injected,int8_t curr_rx_packet_loss_perc,uint8_t curr_status,int8_t dummy0,int16_t dummy1,int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN];
    _mav_put_uint32_t(buf, 0, count_p_received);
    _mav_put_uint32_t(buf, 4, count_p_injected);
    _mav_put_int32_t(buf, 8, dummy2);
    _mav_put_int16_t(buf, 12, tx_power);
    _mav_put_int16_t(buf, 14, dummy1);
    _mav_put_uint8_t(buf, 16, card_index);
    _mav_put_uint8_t(buf, 17, card_type);
    _mav_put_int8_t(buf, 18, rx_rssi_1);
    _mav_put_int8_t(buf, 19, rx_rssi_2);
    _mav_put_int8_t(buf, 20, rx_signal_quality);
    _mav_put_int8_t(buf, 21, curr_rx_packet_loss_perc);
    _mav_put_uint8_t(buf, 22, curr_status);
    _mav_put_int8_t(buf, 23, dummy0);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN);
#else
    mavlink_openhd_stats_monitor_mode_wifi_card_t packet;
    packet.count_p_received = count_p_received;
    packet.count_p_injected = count_p_injected;
    packet.dummy2 = dummy2;
    packet.tx_power = tx_power;
    packet.dummy1 = dummy1;
    packet.card_index = card_index;
    packet.card_type = card_type;
    packet.rx_rssi_1 = rx_rssi_1;
    packet.rx_rssi_2 = rx_rssi_2;
    packet.rx_signal_quality = rx_signal_quality;
    packet.curr_rx_packet_loss_perc = curr_rx_packet_loss_perc;
    packet.curr_status = curr_status;
    packet.dummy0 = dummy0;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_CRC);
}

/**
 * @brief Encode a openhd_stats_monitor_mode_wifi_card struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param openhd_stats_monitor_mode_wifi_card C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_openhd_stats_monitor_mode_wifi_card_t* openhd_stats_monitor_mode_wifi_card)
{
    return mavlink_msg_openhd_stats_monitor_mode_wifi_card_pack(system_id, component_id, msg, openhd_stats_monitor_mode_wifi_card->card_index, openhd_stats_monitor_mode_wifi_card->card_type, openhd_stats_monitor_mode_wifi_card->rx_rssi_1, openhd_stats_monitor_mode_wifi_card->rx_rssi_2, openhd_stats_monitor_mode_wifi_card->rx_signal_quality, openhd_stats_monitor_mode_wifi_card->tx_power, openhd_stats_monitor_mode_wifi_card->count_p_received, openhd_stats_monitor_mode_wifi_card->count_p_injected, openhd_stats_monitor_mode_wifi_card->curr_rx_packet_loss_perc, openhd_stats_monitor_mode_wifi_card->curr_status, openhd_stats_monitor_mode_wifi_card->dummy0, openhd_stats_monitor_mode_wifi_card->dummy1, openhd_stats_monitor_mode_wifi_card->dummy2);
}

/**
 * @brief Encode a openhd_stats_monitor_mode_wifi_card struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param openhd_stats_monitor_mode_wifi_card C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_openhd_stats_monitor_mode_wifi_card_t* openhd_stats_monitor_mode_wifi_card)
{
    return mavlink_msg_openhd_stats_monitor_mode_wifi_card_pack_chan(system_id, component_id, chan, msg, openhd_stats_monitor_mode_wifi_card->card_index, openhd_stats_monitor_mode_wifi_card->card_type, openhd_stats_monitor_mode_wifi_card->rx_rssi_1, openhd_stats_monitor_mode_wifi_card->rx_rssi_2, openhd_stats_monitor_mode_wifi_card->rx_signal_quality, openhd_stats_monitor_mode_wifi_card->tx_power, openhd_stats_monitor_mode_wifi_card->count_p_received, openhd_stats_monitor_mode_wifi_card->count_p_injected, openhd_stats_monitor_mode_wifi_card->curr_rx_packet_loss_perc, openhd_stats_monitor_mode_wifi_card->curr_status, openhd_stats_monitor_mode_wifi_card->dummy0, openhd_stats_monitor_mode_wifi_card->dummy1, openhd_stats_monitor_mode_wifi_card->dummy2);
}

/**
 * @brief Send a openhd_stats_monitor_mode_wifi_card message
 * @param chan MAVLink channel to send the message
 *
 * @param card_index  A system / component might have more than one card for diversity
 * @param card_type  r.n only 0 for rtl8812au
 * @param rx_rssi_1  rx rssi in dBm for antenna 1
 * @param rx_rssi_2  rx rssi in dBm for antenna 2
 * @param rx_signal_quality  depends on the wifi driver
 * @param tx_power  either in override index units or mW
 * @param count_p_received  All received (incoming) packets
 * @param count_p_injected  All injected (outgoing) packets
 * @param curr_rx_packet_loss_perc  rx packet loss (for this card)
 * @param curr_status  set to 1 if something's wrong with the card
 * @param dummy0  for future use
 * @param dummy1  for future use
 * @param dummy2  for future use
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_openhd_stats_monitor_mode_wifi_card_send(mavlink_channel_t chan, uint8_t card_index, uint8_t card_type, int8_t rx_rssi_1, int8_t rx_rssi_2, int8_t rx_signal_quality, int16_t tx_power, uint32_t count_p_received, uint32_t count_p_injected, int8_t curr_rx_packet_loss_perc, uint8_t curr_status, int8_t dummy0, int16_t dummy1, int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN];
    _mav_put_uint32_t(buf, 0, count_p_received);
    _mav_put_uint32_t(buf, 4, count_p_injected);
    _mav_put_int32_t(buf, 8, dummy2);
    _mav_put_int16_t(buf, 12, tx_power);
    _mav_put_int16_t(buf, 14, dummy1);
    _mav_put_uint8_t(buf, 16, card_index);
    _mav_put_uint8_t(buf, 17, card_type);
    _mav_put_int8_t(buf, 18, rx_rssi_1);
    _mav_put_int8_t(buf, 19, rx_rssi_2);
    _mav_put_int8_t(buf, 20, rx_signal_quality);
    _mav_put_int8_t(buf, 21, curr_rx_packet_loss_perc);
    _mav_put_uint8_t(buf, 22, curr_status);
    _mav_put_int8_t(buf, 23, dummy0);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD, buf, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_CRC);
#else
    mavlink_openhd_stats_monitor_mode_wifi_card_t packet;
    packet.count_p_received = count_p_received;
    packet.count_p_injected = count_p_injected;
    packet.dummy2 = dummy2;
    packet.tx_power = tx_power;
    packet.dummy1 = dummy1;
    packet.card_index = card_index;
    packet.card_type = card_type;
    packet.rx_rssi_1 = rx_rssi_1;
    packet.rx_rssi_2 = rx_rssi_2;
    packet.rx_signal_quality = rx_signal_quality;
    packet.curr_rx_packet_loss_perc = curr_rx_packet_loss_perc;
    packet.curr_status = curr_status;
    packet.dummy0 = dummy0;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD, (const char *)&packet, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_CRC);
#endif
}

/**
 * @brief Send a openhd_stats_monitor_mode_wifi_card message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_openhd_stats_monitor_mode_wifi_card_send_struct(mavlink_channel_t chan, const mavlink_openhd_stats_monitor_mode_wifi_card_t* openhd_stats_monitor_mode_wifi_card)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_openhd_stats_monitor_mode_wifi_card_send(chan, openhd_stats_monitor_mode_wifi_card->card_index, openhd_stats_monitor_mode_wifi_card->card_type, openhd_stats_monitor_mode_wifi_card->rx_rssi_1, openhd_stats_monitor_mode_wifi_card->rx_rssi_2, openhd_stats_monitor_mode_wifi_card->rx_signal_quality, openhd_stats_monitor_mode_wifi_card->tx_power, openhd_stats_monitor_mode_wifi_card->count_p_received, openhd_stats_monitor_mode_wifi_card->count_p_injected, openhd_stats_monitor_mode_wifi_card->curr_rx_packet_loss_perc, openhd_stats_monitor_mode_wifi_card->curr_status, openhd_stats_monitor_mode_wifi_card->dummy0, openhd_stats_monitor_mode_wifi_card->dummy1, openhd_stats_monitor_mode_wifi_card->dummy2);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD, (const char *)openhd_stats_monitor_mode_wifi_card, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_CRC);
#endif
}

#if MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_openhd_stats_monitor_mode_wifi_card_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t card_index, uint8_t card_type, int8_t rx_rssi_1, int8_t rx_rssi_2, int8_t rx_signal_quality, int16_t tx_power, uint32_t count_p_received, uint32_t count_p_injected, int8_t curr_rx_packet_loss_perc, uint8_t curr_status, int8_t dummy0, int16_t dummy1, int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, count_p_received);
    _mav_put_uint32_t(buf, 4, count_p_injected);
    _mav_put_int32_t(buf, 8, dummy2);
    _mav_put_int16_t(buf, 12, tx_power);
    _mav_put_int16_t(buf, 14, dummy1);
    _mav_put_uint8_t(buf, 16, card_index);
    _mav_put_uint8_t(buf, 17, card_type);
    _mav_put_int8_t(buf, 18, rx_rssi_1);
    _mav_put_int8_t(buf, 19, rx_rssi_2);
    _mav_put_int8_t(buf, 20, rx_signal_quality);
    _mav_put_int8_t(buf, 21, curr_rx_packet_loss_perc);
    _mav_put_uint8_t(buf, 22, curr_status);
    _mav_put_int8_t(buf, 23, dummy0);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD, buf, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_CRC);
#else
    mavlink_openhd_stats_monitor_mode_wifi_card_t *packet = (mavlink_openhd_stats_monitor_mode_wifi_card_t *)msgbuf;
    packet->count_p_received = count_p_received;
    packet->count_p_injected = count_p_injected;
    packet->dummy2 = dummy2;
    packet->tx_power = tx_power;
    packet->dummy1 = dummy1;
    packet->card_index = card_index;
    packet->card_type = card_type;
    packet->rx_rssi_1 = rx_rssi_1;
    packet->rx_rssi_2 = rx_rssi_2;
    packet->rx_signal_quality = rx_signal_quality;
    packet->curr_rx_packet_loss_perc = curr_rx_packet_loss_perc;
    packet->curr_status = curr_status;
    packet->dummy0 = dummy0;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD, (const char *)packet, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_CRC);
#endif
}
#endif

#endif

// MESSAGE OPENHD_STATS_MONITOR_MODE_WIFI_CARD UNPACKING


/**
 * @brief Get field card_index from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  A system / component might have more than one card for diversity
 */
static inline uint8_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_card_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field card_type from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  r.n only 0 for rtl8812au
 */
static inline uint8_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_card_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  17);
}

/**
 * @brief Get field rx_rssi_1 from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  rx rssi in dBm for antenna 1
 */
static inline int8_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_rx_rssi_1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  18);
}

/**
 * @brief Get field rx_rssi_2 from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  rx rssi in dBm for antenna 2
 */
static inline int8_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_rx_rssi_2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  19);
}

/**
 * @brief Get field rx_signal_quality from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  depends on the wifi driver
 */
static inline int8_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_rx_signal_quality(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  20);
}

/**
 * @brief Get field tx_power from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  either in override index units or mW
 */
static inline int16_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_tx_power(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  12);
}

/**
 * @brief Get field count_p_received from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  All received (incoming) packets
 */
static inline uint32_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_count_p_received(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field count_p_injected from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  All injected (outgoing) packets
 */
static inline uint32_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_count_p_injected(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field curr_rx_packet_loss_perc from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  rx packet loss (for this card)
 */
static inline int8_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_curr_rx_packet_loss_perc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  21);
}

/**
 * @brief Get field curr_status from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  set to 1 if something's wrong with the card
 */
static inline uint8_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_curr_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  22);
}

/**
 * @brief Get field dummy0 from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  for future use
 */
static inline int8_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_dummy0(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  23);
}

/**
 * @brief Get field dummy1 from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  for future use
 */
static inline int16_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_dummy1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  14);
}

/**
 * @brief Get field dummy2 from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  for future use
 */
static inline int32_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_dummy2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Decode a openhd_stats_monitor_mode_wifi_card message into a struct
 *
 * @param msg The message to decode
 * @param openhd_stats_monitor_mode_wifi_card C-struct to decode the message contents into
 */
static inline void mavlink_msg_openhd_stats_monitor_mode_wifi_card_decode(const mavlink_message_t* msg, mavlink_openhd_stats_monitor_mode_wifi_card_t* openhd_stats_monitor_mode_wifi_card)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    openhd_stats_monitor_mode_wifi_card->count_p_received = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_count_p_received(msg);
    openhd_stats_monitor_mode_wifi_card->count_p_injected = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_count_p_injected(msg);
    openhd_stats_monitor_mode_wifi_card->dummy2 = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_dummy2(msg);
    openhd_stats_monitor_mode_wifi_card->tx_power = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_tx_power(msg);
    openhd_stats_monitor_mode_wifi_card->dummy1 = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_dummy1(msg);
    openhd_stats_monitor_mode_wifi_card->card_index = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_card_index(msg);
    openhd_stats_monitor_mode_wifi_card->card_type = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_card_type(msg);
    openhd_stats_monitor_mode_wifi_card->rx_rssi_1 = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_rx_rssi_1(msg);
    openhd_stats_monitor_mode_wifi_card->rx_rssi_2 = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_rx_rssi_2(msg);
    openhd_stats_monitor_mode_wifi_card->rx_signal_quality = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_rx_signal_quality(msg);
    openhd_stats_monitor_mode_wifi_card->curr_rx_packet_loss_perc = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_curr_rx_packet_loss_perc(msg);
    openhd_stats_monitor_mode_wifi_card->curr_status = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_curr_status(msg);
    openhd_stats_monitor_mode_wifi_card->dummy0 = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_dummy0(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN? msg->len : MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN;
        memset(openhd_stats_monitor_mode_wifi_card, 0, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN);
    memcpy(openhd_stats_monitor_mode_wifi_card, _MAV_PAYLOAD(msg), len);
#endif
}

#ifndef RFID_CONST_H
#define RFID_CONST_H
#define RX_PIN 18
#define TX_PIN 17

#define START_BYTE 0x02 //1. byte
#define DATA_LENGTH_BYTE 0x09 //2. byte
#define CARD_TYPE_BYTE 0x02 //3.byte
#define CARD_ID_1_BYTE 0x04 //4.-7. bytes
#define CARD_ID_2_BYTE 0x2E
#define CARD_ID_3_BYTE 0x53
#define CARD_ID_4_BYTE 0x82
#define CHECKSUM_BYTE 0xF0 //8. byte
#define END_BYTE 0x03 //9. byte

#define CARD_TYPE_EM4100 0x02 //125kHz
#define CARD_TYPE_MF1K 0x01 //13.56MHz
#define CARD_TYPE_MF4K 0x03 //13.56MHz
#define CARD_TYPE_14443B 0x20 //13.56MHz
#define CARD_TYPE_SUPERSIM 0x61 //13.56MHz

#endif
#include "Rfid.h"

void Rfid::init()
{
    pinMode(RX_PIN, INPUT);
    pinMode(TX_PIN, OUTPUT);
}
void Rfid::checkStartByte()
{
}
void Rfid::checkDataLength()
{
}
void Rfid::checkCardType()
{
}
void Rfid::checksum()
{
}
void Rfid::readCardID()
{
}
void Rfid::deinit()
{
}
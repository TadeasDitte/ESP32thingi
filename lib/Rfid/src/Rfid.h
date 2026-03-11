#ifndef RFID_H
#define RFID_H

#include <Arduino.h>
#include "const.h"

class Rfid
{
private:
    void checkStartByte();
    void checkDataLength();
    void checksum();
public:
    void init();
    void checkCardType();
    void readCardID();
    void deinit();
};
#endif
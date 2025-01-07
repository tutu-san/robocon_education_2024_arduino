#pragma once
#ifndef PS4_RECEIVE_H
#define PS4_RECEIVE_H

//includes
#include <PS4BT.h>
#include <usbhub.h>
#include <SPI.h>

//変数(ライブラリ内クラス)
extern USB Usb;
extern PS4BT PS4;
enum order_num{
    ROTATE = 1,
    STOP,
    REVERSE_ROTATE
};

typedef enum order_num orders_t;
//関数
void ps4_receive();

#endif
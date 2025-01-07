#pragma once
#ifndef UART_NUCLEO_H
#define UART_NUCLEO_H

//includes
#include "ps4_receive.h"
#include "main.h"
//変数
//from receive
extern orders_t order;


//関数
void send_serial2(orders_t);
#endif
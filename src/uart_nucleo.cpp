//ここでは、STM32にUARTで通信することを行う
#include <Arduino.h>

#include "uart_nucleo.h"

void send_serial2(orders_t order){
    // const static uint8_t start2 = '!'; //header
    // Serial2.write(start2);

    Serial2.write(order);
    Serial.println("sended_data!");
}
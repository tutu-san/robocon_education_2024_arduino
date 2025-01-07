//ここでは、PS4コントローラーからデータを受け取る。
#include <Arduino.h>
#include <PS4BT.h>
#include <usbhub.h>

#ifdef doboguinclude
#include <spi4teensy3.h>
#endif
#include <SPI.h> 

#include "ps4_init.h"
#include "ps4_receive.h"
#include "uart_nucleo.h"

void ps4_receive(){
    Usb.Task();

    if(PS4.connected()){
        if(PS4.getButtonClick(PS)){
            Serial.print(F("\r\nPS"));
            PS4.disconnect();
        }

        if(PS4.getButtonClick(CIRCLE)){
            Serial.print(F("\r\nCIRCLE"));
            send_serial2(ROTATE);
        }

        if(PS4.getButtonClick(CROSS)){
            Serial.print(F("\r\nCROSS"));
            send_serial2(STOP);
        }

        if(PS4.getButtonClick(SQUARE)){
            Serial.print(F("\r\nSQARE"));
            send_serial2(REVERSE_ROTATE);
        }
    }
}
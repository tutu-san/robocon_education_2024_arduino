#include <Arduino.h>

#include "main.h"
#include "ps4_init.h"
#include "ps4_receive.h"
#include "uart_nucleo.h"

void setup(){
	//UART(シリアル)通信関係
	Serial.begin(115200); //PCで状況を見るためにポートを開けている
	Serial2.begin(115200);//モーター用

  ps4_init();
}

void loop(){
	ps4_receive();
}
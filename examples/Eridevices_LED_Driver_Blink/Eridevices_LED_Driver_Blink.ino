/**
	*@file Eridevices_LED_Driver_Blink.ino
	*
	*Example of use the library Eridevices_LED_Driver
	*
	*@author Eriz Montoya (email:<info@eridevices.com>)
	*@data 2023/08/13
	*
	*@copyright
	*copyright (c)2023 eridevices \n
*/

#include <Eridevices_LED_Driver.h>

#define SDI					3
#define CLK 					4
#define LE					5
#define OE					6
#define MAX_OUTPUTS_DRIVER 			16

Eridevices_LED_Driver<uint8_t,MAX_OUTPUTS_DRIVER> Mybreakout_Board(SDI,CLK,LE,OE);

void setup() 
{
	
}

void loop() 
{
	Mybreakout_Board.set_channel(1);
	delay(1000);
	Mybreakout_Board.clear_buffer();
	delay(1000);
}

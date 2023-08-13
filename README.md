# Eridevices_LED_Driver
LED Driver Constant Current 16 Channels Breakout Board MBI5124
# Overview
The MBI5124 is a LED Driver for 16 constant current outputs, for set the current is necessary only one resistor, the maximum current for output is 25mA @ 5VDC. The Breakout board is controlled by shift register bus, (SI, SCLK, LE, OE). The breakout board has sixteen constant current outputs ready for use and is possible to connect multiple break boards.
# Hardware Breakout Board PCBA
![texto](https://github.com/Erizm/Eridevices_LED_Driver/blob/main/MBI5124.png?raw=true)
# Configuration Pin
![configuration](https://github.com/Erizm/Eridevices_LED_Driver/blob/main/pin_configuration.png?raw=true)
# Tools necessary for use the breakout Board
Solder iron. 
Pin header male (8 Positions). 
Pin header male (16 Positions). 
It is recommended use a breadboard for solder the pin header connector to the breakout board, solder the pin consistency, use this method for all pines. 
The hardware is ready, now we need configure the software. 
# Connection & Setup
Adjusting the output current of the sixteen outputs, before to continue we need to set the output current, connect a resistor between the pin R on the board. The magnitude of current (as a function of Rext) is around 20mA at 930Ω and 10mA at 1860Ω (please see reference datasheet for MBI5124 IC).

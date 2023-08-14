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
# Connection with Arduino
![image2](https://github.com/Erizm/Eridevices_LED_Driver/blob/main/Connection_Breakout_Arduino.png?raw=true)
Connect the power pin and ground pin, install the constant current resistor at the pin with the name R on the breakout board MBI5124. 
Connecting the Outputs: 
Connect sixteen LED to the output of the breakout board, (OUT0 – OUT15).
#Settings Current Outputs
![image](https://github.com/Erizm/Eridevices_LED_Driver/blob/main/output_current.png?raw=true)
# Library
Using the library is very easy, let's review an simple sample
<pre>
```arduino
#include &lt;Eridevices_LED_Driver.h&gt;
// Setting the pins of Arduino
#define SDI 2
#define CLK 3
#define LE 4
#define OE 5

// Constructor, include the datatype, the number of outputs, and the pins
Eridevices_LED_Driver&lt;uint8_t, 16&gt; Mybreakout_Board(SDI, CLK, LE, OE);
void setup()  
{
}
void loop()
{
  //Turning the output 0 of the breakout
  Mybreakout_Board.set_channel(1);
  delay(1000);
  //Clear all outputs
  Mybreakout_Board.clear_buffer();
  delay(1000);
}
  
```
</pre>
  

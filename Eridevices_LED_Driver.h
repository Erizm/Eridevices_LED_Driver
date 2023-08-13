/**
	*@file Eridevices_LED_Driver.h
	*
	*the definition of class Eridevices_LED_Driver
	*
	*@author Eriz Montoya (email:<info@eridevices.com>)
	*@data 2023/08/13
	*
	*@copyright
	*copyright (c)2023 eridevices \n
*/


#ifndef Eridevices_LED_Driver_h
#define Eridevices_LED_Driver_h

template <typename T, size_t N>
class Eridevices_LED_Driver
{
	public:	
		Eridevices_LED_Driver(const uint8_t sdi,const uint8_t clk,const uint8_t le,const uint8_t oe)
		:SDI(sdi),CLK(clk),LE(le),OE(oe)
		{
			pinMode(SDI,OUTPUT);
			pinMode(CLK,OUTPUT);
			pinMode(LE,OUTPUT);
			pinMode(OE,OUTPUT);
			digitalWrite(LE,LOW);
			digitalWrite(OE,LOW); 
		};
		const T get_number_outputs()
		{
			return MAX_OUTPUTS;
		};
		void set_initial_bit(const bool bit_state) const
		{
			(bit_state) ? digitalWrite(SDI,HIGH) : digitalWrite(SDI,LOW);
		};
		void set_shift_driver(const bool pin_state, const T cycles, const bool release)
		{
			set_initial_bit(pin_state);
			T cycles_mul = (cycles * 2);
			do
			{
				digitalWrite(CLK,!digitalRead(CLK));
			} while(--cycles_mul);
			if (release)
			{
				release_shift();
			}
		};
		void release_shift()
		{
			digitalWrite(LE,HIGH);
			digitalWrite(LE,LOW);
		};
		void set_channel(T channel)
		{
			clear_buffer();
			if (channel > 1)
			{
				set_shift_driver(1,1,0);
				set_shift_driver(0,channel-1,1);
			}
			else
			{
				set_shift_driver(1,1,1);
			}
		};
		void clear_buffer()
		{
			set_shift_driver(0,MAX_OUTPUTS,1);
		};
	private:
		const uint8_t SDI = 0;
		const uint8_t CLK = 0;
		const uint8_t LE = 0;
		const uint8_t OE = 0;
		T MAX_OUTPUTS = 0;
};
#endif
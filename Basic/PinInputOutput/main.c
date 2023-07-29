/*Author: Hermantoni
**Learn Together
*/

#define F_CPU 12000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void){
	DDRA = 0xFF;
	DDRB = 0x00;
	while(1){
		PORTA = PINB;
		_delay_ms(500);
	}
}

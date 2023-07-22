/*Author: Hermantoni
**Learn Together
*/

#define F_CPU 12000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void){
	DDRA = 0xFF;
	while(1){
		PORTA = 0xFF;
		_delay_ms(500);
		PORTA = 0x00;
		_delay_ms(500);
	}
}

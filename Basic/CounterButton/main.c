/*Author: Hermantoni
**Learn Together
*/

#define F_CPU 12000000UL

#include <avr/io.h>
#include <util/delay.h>

int countA = 0;
int countB = 0;
int main(void){
	DDRA = 0xFF;
	DDRB = 0x00;
	DDRC = 0xFF;
	while(1){
		while(PINB == 254){
			countA = countA + 1;
			if (countA > 255){
				countA = 0;
				countB = countB + 1;
				if (countB > 255){
					countB = 0;
				}
			}
			PORTA = countA;
			PORTC = countB;
			_delay_ms(100);
		}
	}
}

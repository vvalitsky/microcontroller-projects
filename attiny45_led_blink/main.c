#include <avr/io.h>
#include <util/delay.h>
 
int main (void) {
  //Analog pin 3
  DDRB = 0b00001000;
  while (1) {
    //Turn on (set high)
    PORTB = 0b00001000; 
    //Simple delay
    _delay_ms(200);
    //Turn off (set low)
    PORTB = 0b00000000;
    //Simple delay
    _delay_ms(200);
  }
  return 1;
}
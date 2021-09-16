#include"../inc/ACT1.h"

#include <avr/io.h>

void pinconf()
{
    DDRB |=(1<<PB0);
    DDRD &=~(1<<PD2);
    PORTD |=(1<<PD2);
    DDRD &=~(1<<PD3);
    PORTD |=(1<<PD3);
}

void ledon()
{
    PORTB |=(1<<PB0);
}

void ledoff()
{
    PORTB &=~(1<<PB0);
}

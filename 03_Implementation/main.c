/*
 */

#include <avr/io.h>
#include <util/delay.h>
#include<avr/interrupt.h>



int main(void)
{
     uint16_t temp;
    pinconf();
    while(1){
            if(!(PIND&(1<<PORTD2)) && !(PIND&(1<<PORTD3)))
            {
                ledon();
                activity2();
                activity3PWM(temp);
            }
            else
            {
                ledoff();
            }

    }
    return 0;
}



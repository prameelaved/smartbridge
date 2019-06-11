/*
 * GccApplication10.c
 *
 * Created: 11-06-2019 10:33:29
 * Author : Sri Harika
 */ 

#include <avr/io.h>
#define F_CPU 1000000UL
#include<util/delay.h>
#include<stdlib.h>

int main(void)
{
 DDRD=0X00;
    while (1) 
    {
		PORTD=0X01;
		_delay_ms(500);
		PORTD=0X02;
		_delay_ms(500);
	}
}
	
    



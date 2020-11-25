/*
 * GccApplication1.c
 *
 * Created: 12/6/2019 6:47:58 PM
 * Author : yosef
 */ 

#include <avr/io.h>
#include "BIT_MATH.h"
#include <avr/interrupt.h>
#include "UART.h"
#include "ADC.h"
#include "SWITCH.h"
#define F_CPU 16000000UL
#include <util/delay.h>
#include "LCD.h"

int main(void)
{
	CLR_BIT(DDRA , 0);
	ADC_INIT();
	UART_INIT_TRAMNSMIT();
	UART_SET_BaudRate(103);
	LCD_8_INIT();
	ADC_START();
	while(1)
	{
		switch(ADC_READ())
		{
			case SWITCH_1:
				UART_SEND('S');
				UART_SEND('1');
				LCD_8_GOTOXY(1,1);
				LCD_8_PRINT("S1");
				break;
			case SWITCH_2:
				UART_SEND('S');
				UART_SEND('2');
				LCD_8_GOTOXY(1,1);
				LCD_8_PRINT("S2");
				break;
			case SWITCH_3:
				UART_SEND('S');
				UART_SEND('3');
				LCD_8_GOTOXY(1,1);
				LCD_8_PRINT("S3");
				break;
			case SWITCH_4:
				UART_SEND('S');
				UART_SEND('4');
				LCD_8_GOTOXY(1,1);
				LCD_8_PRINT("S4");
				break;
			case SWITCH_5:
				UART_SEND('S');
				UART_SEND('5');
				LCD_8_GOTOXY(1,1);
				LCD_8_PRINT("S5");
				break;
			case SWITCH_6:
				UART_SEND('S');
				UART_SEND('6');
				LCD_8_GOTOXY(1,1);
				LCD_8_PRINT("S6");
				break;
			case SWITCH_1_SWITCH_2:
				UART_SEND('S');
				UART_SEND('1');
				UART_SEND('A');
				UART_SEND('2');
				LCD_8_GOTOXY(1,1);
				LCD_8_PRINT("S1 AND S2");
				break;
			case SWITCH_1_SWITCH_3:
				UART_SEND('S');
				UART_SEND('1');
				UART_SEND('A');
				UART_SEND('3');
				LCD_8_GOTOXY(1,1);
				LCD_8_PRINT("S1 AND S3");
				break;
			case SWITCH_1_SWITCH_4:
				UART_SEND('S');
				UART_SEND('1');
				UART_SEND('A');
				UART_SEND('4');
				LCD_8_GOTOXY(1,1);
				LCD_8_PRINT("S1 AND S4");
				break;
			case SWITCH_1_SWITCH_5:
				UART_SEND('S');
				UART_SEND('1');
				UART_SEND('A');
				UART_SEND('5');
				LCD_8_GOTOXY(1,1);
				LCD_8_PRINT("S1 AND S5");
				break;
			case SWITCH_1_SWITCH_6:
				UART_SEND('S');
				UART_SEND('1');
				UART_SEND('A');
				UART_SEND('6');
				LCD_8_GOTOXY(1,1);
				LCD_8_PRINT("S1 AND S6");
				break;
			case SWITCH_2_SWITCH_3:
				UART_SEND('S');
				UART_SEND('2');
				UART_SEND('A');
				UART_SEND('3');
				LCD_8_GOTOXY(1,1);
				LCD_8_PRINT("S2 AND S3");
				break;
			case SWITCH_2_SWITCH_4:
				UART_SEND('S');
				UART_SEND('2');
				UART_SEND('A');
				UART_SEND('4');
				LCD_8_GOTOXY(1,1);
				LCD_8_PRINT("S2 AND S4");
				break;
			case SWITCH_2_SWITCH_6:
				UART_SEND('S');
				UART_SEND('2');
				UART_SEND('A');
				UART_SEND('6');
				LCD_8_GOTOXY(1,1);
				LCD_8_PRINT("S2 AND S6");
				break;
			case SWITCH_3_SWITCH_4:
				UART_SEND('S');
				UART_SEND('3');
				UART_SEND('A');
				UART_SEND('4');
				LCD_8_GOTOXY(1,1);
				LCD_8_PRINT("S3 AND S4");
				break;
			case SWITCH_3_SWITCH_5:
				UART_SEND('S');
				UART_SEND('3');
				UART_SEND('A');
				UART_SEND('5');
				LCD_8_GOTOXY(1,1);
				LCD_8_PRINT("S3 AND S5");
				break;
			case SWITCH_3_SWITCH_6:
				UART_SEND('S');
				UART_SEND('3');
				UART_SEND('A');
				UART_SEND('6');
				LCD_8_GOTOXY(1,1);
				LCD_8_PRINT("S3 AND S6");
				break;
			case SWITCH_4_SWITCH_5:
				UART_SEND('S');
				UART_SEND('4');
				UART_SEND('A');
				UART_SEND('5');
				LCD_8_GOTOXY(1,1);
				LCD_8_PRINT("S4 AND S5");
				break;
			case SWITCH_4_SWITCH_6:
				UART_SEND('S');
				UART_SEND('4');
				UART_SEND('A');
				UART_SEND('6');
				LCD_8_GOTOXY(1,1);
				LCD_8_PRINT("S4 AND S6");
				break;
			case SWITCH_5_SWITCH_6:
				UART_SEND('S');
				UART_SEND('5');
				UART_SEND('A');
				UART_SEND('6');
				LCD_8_GOTOXY(1,1);
				LCD_8_PRINT("S5 AND S6");
				break;
		}
	}
	return 0 ;
}
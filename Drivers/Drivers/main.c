/*
 * Drivers.c
 *
 * Created: 9/1/2021 9:00:12 PM
 * Author : Karim Essam
 */ 
#include "MCAL/DIO/DIO_interface.h"
#include "LIB/STD_TYPES.h"
#include "HAL/LED/LED_interface.h"
#include "MCAL/TIMER0/TIMER0_interface.h"
int main(void)
{ 
	DIO_voidSetPinDirection(3,PORTB ,OUTPUT);
	LED_voidInit();
	TIMER0_voidInit(CTC_MODE , TIMER0_CTC_DISCONNECT , PRESCALAR_1024 , 0);
	// 	OCR0_REG = cpuFrequency/(2*frequency*prescalarArray[storedPrescalar-1]) -1 =;
	//  OCR0_REG = 1M /(2 * 3.333 * 1024) - 1 = 145 (Legal)
	TIMER0_voidSetFrequency(3.3333);
	//TIMER0_voidEnableInterrupt(TIMER0_INTERRUPT_COMPARE);
	//TIMER0_voidSetCallBack(TIMER0_INTERRUPT_COMPARE , LED_voidToggle);
    while (1) 
    {
		if (TIMER0_u8CheckFlag(TIMER0_INTERRUPT_COMPARE))
		{
			LED_voidToggle();
			TIMER0_voidClearFlag(TIMER0_INTERRUPT_COMPARE);
		}
    }
}


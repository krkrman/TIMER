/*
 * BUTTON_program.c
 *
 * Created: 9/1/2021 9:43:34 PM
 *  Author: Karim Essam
 */ 

#include "../../LIB/STD_TYPES.h"
#include "../../MCAL/DIO/DIO_interface.h"
#include "BUTTON_private.h"
#include "BUTTON_config.h"
#include "BUTTON_interface.h"


void BUTTON_voidInit(){
	if (BUTTON_CONNECTION == INTERNAL_PULL_UP)
	{
		DIO_voidSetPinDirection(BUTTON_PIN , BUTTON_PORT , INPUT_PULL_UP);
	}else {
		DIO_voidSetPinDirection(BUTTON_PIN , BUTTON_PORT , INPUT);
	}
}
u8 BUTTON_u8isPressed(void){
	if (BUTTON_CONNECTION == PULL_DOWN)
	{
		return DIO_u8GetPinValue(BUTTON_PIN , BUTTON_PORT);
	} else {
		return !DIO_u8GetPinValue(BUTTON_PIN , BUTTON_PORT);
	}
}

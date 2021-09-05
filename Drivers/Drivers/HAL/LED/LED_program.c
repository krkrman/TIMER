/*
 * LED_program.c
 *
 * Created: 9/1/2021 9:30:28 PM
 *  Author: Karim Essam
 */ 
#include "../../MCAL/DIO/DIO_interface.h"
#include "LED_interface.h"
#include "LED_config.h"

void LED_voidInit(void){
	DIO_voidSetPinDirection(LED_PIN , LED_PORT , OUTPUT);
}
void LED_voidTurnOn(void){
	DIO_voidSetPinValue(LED_PIN , LED_PORT , HIGH);	
}
void LED_voidTurnOff(void){
	DIO_voidSetPinValue(LED_PIN , LED_PORT , LOW);
}

void LED_voidToggle(void){
	DIO_voidTogglePinValue(LED_PIN , LED_PORT);
}
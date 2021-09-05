/*
 * DIO_interface.h
 *
 * Created: 9/1/2021 9:11:49 PM
 *  Author: Karim Essam
 */ 


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

#include "../../LIB/STD_TYPES.h"

#define PORTA 0
#define PORTB 1
#define PORTC 2
#define PORTD 3

#define INPUT 0
#define OUTPUT 1
#define INPUT_PULL_UP 2

#define HIGH 1
#define LOW 0

void DIO_voidSetPinDirection (u8 Copy_u8PinNumber, u8 Copy_u8PortNumber, u8 Copy_u8Direction);
void DIO_voidSetPortDirection (u8 Copy_u8PortNumber, u8 Copy_u8PortDirection);

void DIO_voidSetPinValue (u8 Copy_u8PinNumber, u8 Copy_u8PortNumber, u8 Copy_u8Value);
void DIO_voidSetPortValue (u8 Copy_u8PortNumber, u8 Copy_u8Value);

u8 DIO_u8GetPinValue(u8 Copy_u8PinNumber, u8 Copy_u8PortNumber);
u8 DIO_u8GetPortValue(u8 Copy_u8PortNumber);

void DIO_voidTogglePinValue (u8 Copy_u8PinNumber, u8 Copy_u8PortNumber);

#endif /* DIO_INTERFACE_H_ */
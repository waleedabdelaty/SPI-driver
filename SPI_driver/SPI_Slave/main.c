/*
 * main.c
 *
 *  Created on: Sep 27, 2021
 *      Author: TOSHIBA PC
 */


#include "spi.h"
#include "dio.h"

int main(void)
{
	SPI_initSlave();
	uint16_t data;
	DIO_initPort(A,OUTPUT);

	while(1)
	{
		data = SPI_receiveByte();
		PORTA = data;

	}
}


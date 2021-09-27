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
	ST_SPI_config_t configuration = {F_CPU_16};
	SPI_initMaster(&configuration);
	while(1)
	{
		SPI_sendByte('a');
		_delay_ms(1000);
		SPI_sendByte('b');
		_delay_ms(1000);
		SPI_sendByte('c');
		_delay_ms(1000);
	}
}


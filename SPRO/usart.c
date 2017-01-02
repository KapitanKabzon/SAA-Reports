if (usart.flag)	{
	/* usart_buff is volatile so input needs to be buffered again */
	cli();
	strcpy((char *) input_buff, (char *) usart.buff);
	sei();

	switch (input_buff[0]) {
		/* id */
	case '1':
		printf("0\n");
		break;
		/* more commands */
	}
}

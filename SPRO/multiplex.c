void multiplex(uint8_t id)
{
	PORTB &= ~(0xFF);
 	PORTB |= id;
}

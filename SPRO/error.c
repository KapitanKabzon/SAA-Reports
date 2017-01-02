void error(char x)
{
	uart_putchar('e', &uart_output);
	uart_putchar('1', &uart_output);
	uart_putchar(x, &uart_output);
}
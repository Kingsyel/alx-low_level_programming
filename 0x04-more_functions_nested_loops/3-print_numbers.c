#include "main.h"
/**
 * print_numbers - prints the numbers,followed by new line
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int a;

	while (a < 10)
	{
	       _puthcar (a + '0');
	       a++;
	}
	_putchar ('\n');
}

#include "main.h"

/**
 * swap_int - swap the values of two integers a and b
 * @a: a pointer to an integer
 * @b: a pointer to an integer
 * Return: Always 0
 */

void swap_int(int *a, int *b)

{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}

#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number that is going to be checked
 * Return: 1 if @n > zero, 0 if @n = zero and -1 if @n < zero
 */

int print_sign(int n)
{
	int ret;

	if (n > 0)
	{
		_putchar('+');
		ret = 1;
	}

	else if (n == 0)
	{
		_putchar('0');
		ret = 0;
	}

	else if (n < 0)
	{
		_putchar('-');
		ret = -1;
	}

	return (ret);
}

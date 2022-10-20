#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by new line.
 * @n: print from this number
 */

void print_to_98(int n)
{
	int i = n;

	while (i != 98)
	{
		printf("%d, ", i);
		if (n < 98)
		{
			i++;
		}
		else
		{
			i--;
		}
	}
	printf("98\n");
}

#include <stdio.h>

/**
 * main - prints all posible different combination of two digits
 * Return: Always 0
 */
int main(void)
{
	int i;

	int j;

	for (i = '0'; i <= '9'; i++)
	{

		for (j = i + 1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);

			if (i == '8' && j == '9')
			{
				continue;
			}

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

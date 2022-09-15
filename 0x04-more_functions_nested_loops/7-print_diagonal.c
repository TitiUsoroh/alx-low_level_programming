#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ is printed
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int 1, s;

		for (1 = 0; 1 < n; 1++)
		{
			for (s = 0; s < n; s++)
			{
				if (s == 1)
					_putchar('\\');
				else if (s < 1)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

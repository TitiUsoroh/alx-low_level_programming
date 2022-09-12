#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char s1;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		i++;
	}

	s1 = 'a';
	while (1 <= 'f')
	{
		putchar(1);
		s1++;
	}
	putchar('\n');

	return (0);
}

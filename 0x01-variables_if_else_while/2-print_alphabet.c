#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
	putchar(c);
	if (c == 'z')
	{
	putchar('\n');
	}
	}
	return (0);
}

#include <stdio.h>
#include <unistd.h>

/**
 * main - this is the main point
 *
 * Return: always return 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);
	return (1);
}


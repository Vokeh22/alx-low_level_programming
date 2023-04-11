#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: the size of array
 * @c: the char to fill in the array
 *
 * Return: The array filled
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(size * sizeof(char));
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}

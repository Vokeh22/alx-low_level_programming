#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n number of elements of arrays
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int k;
	int j;

	for (k = 0; k < n / 2; k++)
	{
		j = a[k];
		a[k] = a[n - 1 - k];
		a[n - 1 - k] = j;
	}
}

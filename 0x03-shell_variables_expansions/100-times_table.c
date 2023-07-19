#include <stdio.h>

/**
 * print_times_table - Prints the n times starting from 0
 * @n: The number of rows adn columns in the times table
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return; /* Do not print anything if n is not within 1 and 15 */

	int i, j, product;
	
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;

			if ( j ==0)
				printf("%d", product);
			else
				printf(", %3d", product);
		}
		printf("\n");
	}
}

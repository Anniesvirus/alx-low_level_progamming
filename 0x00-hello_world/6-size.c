#include<stdio.h>
/**
 * main - Entry point
 *
 * This program should print the size of various data types
 *
 * The various sizes are dependenton the architecture
 *
 * of the systems it is being ran oo
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("Size of a char: %1d byte(s)\n", sizeof(char));
	printf("Size of an int: %1d bytes(s)\n", sizeof(int));
	printf("Size of a long int: %1dbyte(s)\n", sizeof(long int));
	printf("Size of a long long int: %1d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %1dbyte(s)\n", sizeof(float));

	return (0);
}

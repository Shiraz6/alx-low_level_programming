#include<stdio.h>

/**
 * main - main function
 *
 * Description: using sizeof
 * Return: o on success
 */

int main(void)
{
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("size of int: %u byte(s)\n", sizeof(int));
	printf("size of a long int: %u byte(s)\n", sizeof(long int));
	printf("size of a long int: %u byte(s)\n", sizeof(long long int));
	printf("size of a long int: %u byte(s)\n", sizeof(float));
	return (0);
}

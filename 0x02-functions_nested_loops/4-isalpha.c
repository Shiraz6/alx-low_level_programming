#include "main.h"

/**
 * _isalpha - checks if character is a letter
 *            both lowercase or uppercase
 * @C: takes input from other functions.
 *
 * Return: 1 is C if true else 0
 */

int _isalpha(int C)
{
	if (C >= 97 && C <= 122)
		return (1);
	if (C >= 65 && C <= 90)
		return (1);
	return (0);
}

#include "main.h"
/**
 * _isupper -prog checks for lowercase character
 * @c: The character to br checked
 * Return: 1 for uppercase character or 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

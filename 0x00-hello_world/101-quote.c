#include <stdio.h>
#include <unistd.h>

/*
 * main - Entry point
 *
 * Description: print a qute using writing function
 *    ssize_t write(int fd. const void *buf,size_t count);
 *
 * Return: 1 (error).
*/

int main(void)
{	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	wirite(1, quo, 68);
	return (1);
}

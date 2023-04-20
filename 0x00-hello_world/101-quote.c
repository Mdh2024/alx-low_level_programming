#include <stdio.h>
#include <unistd.h>
/**
 * main - prints "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 * followed by a newline, to standard error.
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful
			\" - Dora korapar, 2015-10-19\n", 59);
	return (1);
}

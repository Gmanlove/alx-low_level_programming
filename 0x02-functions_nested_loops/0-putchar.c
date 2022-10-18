#include "0-putchar.c"
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char *sh = "0-putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}


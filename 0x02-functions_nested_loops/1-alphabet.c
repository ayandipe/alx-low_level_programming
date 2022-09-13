#include "main.h"
/**
 * print_alphabet - A function that prints alphabet, lowercase.
 * Return: void (success)
 */

void print_alphabet(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alp[i]);
	}
	_putchar('\n');
}

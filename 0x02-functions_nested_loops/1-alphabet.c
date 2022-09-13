#include "main.h"
/**
 * Print-alphabet - Entry point
 * Description: A function to print alphabet.
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

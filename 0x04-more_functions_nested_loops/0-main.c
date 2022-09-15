#include "main.h"
#include <stdio.h>
/**
 * main - Check the code.
 * Description: A code that checks for uppercase character.
 * Return: 0 Always
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}

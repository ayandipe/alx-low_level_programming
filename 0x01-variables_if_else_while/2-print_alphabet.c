#include <stdio.h>
/**
 * main - Prints alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		printf("%c", ch);
		ch++;
	}
	printf("\n");
	return (0);
}

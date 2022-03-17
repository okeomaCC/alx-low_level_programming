#include<stdio.h>

/**
 * main - prints the alphabet.
 *
 * Return: Alwas 0 (success)
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwsyz";
	int i;
	for (i = 0; i < 26; i++)
	{
		putchar(alp[1]);
	}
	putchar('\n');
	return(0);
}

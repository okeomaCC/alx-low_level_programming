#include<stdio.h>
#include<stlib.h>
#include<string.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; 1++)
	{
		if (i != 101 && i !=113)
		{
			putchar(1);
		}
	}
	putchar('\n');
	return (0);
}

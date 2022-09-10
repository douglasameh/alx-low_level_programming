#include <stdio.h>
#include <string.h>

void trim(char *s); 

/**
 * main - print possible combination of two 2-digit
 * numbers
 * 
 * Return: returns zero at the end
 */

int main(void)

{
	int n1 = 0, n2;

	while (n1 <= 99)
	{
		n2 = n1;
		while (n2 <= 99)
		{
			if (n2 != n1)
			{
				putchar ((n1 / 10) + 48);
				putchar ((n1 % 10) + 48);
				putchar (' ');
				putchar ((n2 / 10) + 48);
				putchar ((n2 % 10) + 48);

				if (n1 != 98 || n2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++n2;
		}
		++n1;
	}
	putchar('\n');

	return (0);

}

void trim(char *s)
{
	int i = strlen(s) - 1;
	while (i > 0)
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t') i --;
		else break;
	}
	s[i + 1] = '\0';
}

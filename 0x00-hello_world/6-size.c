#include <stdio.h>

/**
 * This program produce the exact same output as in the example
 * warnings are allwoed
 * the program return's 0
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float c;

	printf("Size of a char: %d byte(s)\n",sizeof(a));
	printf("Size of an int: %byte(s)\n",sizeon(b))
	printf("Size of a long int: %d byte(s)\n" sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	printf("Size of a float: %d byte(s)\n", sizeof(c));
	return(0);
}

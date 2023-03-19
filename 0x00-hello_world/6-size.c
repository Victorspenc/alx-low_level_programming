#include <stdio.h>

/**
 *main - main function
 *
 * Return: (0) on succes
 */

int main(void)
{
	printf("Size of a char: %zd byte(s).\n", sizeof(char));
	printf("Size of an int: %zd bytes(s).\n", sizeof(int));
	printf("Size of a long int: %zd bytes(s).\n". sizeof(long int));
	printf("Size of a long long int: %zd bytes(s).\n". sizeof(long long int));
	printf("Size of a float: %zd bytes(s).\n".sizeof(float));
	return (0);
}

#include<stdio.h>
/**
 * main - A program thats prints the size of various computer types
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	printf("Size of char: %d bytes\n", sizeof(char));
    	printf("Size of int: %d bytes\n", sizeof(int));
    	printf("Size of float: %d bytes\n", sizeof(float));
   	printf("Size of double: %d bytes\n", sizeof(double));
    	printf("Size of long: %d bytes\n", sizeof(long));
    	printf("Size of long long: %d bytes\n", sizeof(long long));
	return (0);
}

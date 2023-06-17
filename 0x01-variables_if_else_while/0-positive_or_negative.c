#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints if number is positive, zero or negative
 * Return: Always (Success)
 *
 */

int main(void)
{
    srand(time(0)); // Seed the random number generator

    int n = rand() % 201 - 100; // Generate a random number between -100 and 100
 printf("The number is: %d\n", n);

    if (n > 0)
    {
        printf("is positive\n");
    }
    else if (n == 0)
    {
        printf("is zero\n");
    }
    else
    {
        printf("is negative\n");
    }

    return 0;
}

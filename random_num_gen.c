#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number;
    srand(time(0)); // Give time in seconds
    number = rand() % 100 + 1; // Generates a random number between 1 and 100
    printf("The number is %d\n", number);
    // Keep running the loop until the number is guessed







    return 0;
}
#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int n;
    do

    // Asks for a height for the pyramid and prints it
    {
        printf("Height: ");
        n = get_int();
    }
    // Asks for input between 0 and 23
    while (n < 0 || n > 23);


    for (int i = 0; i < n; i++)
    {
        // s is for the spaces
        for (int s = n - i - 1; s > 0; s--)
        {
            printf(" ");
        }

        //h is for the hashes
        for (int h = -2; h < i; h++)
        {
            printf("#");
        }

        // New line
        printf("\n");
    }
}
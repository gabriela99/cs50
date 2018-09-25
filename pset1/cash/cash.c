#include <stdio.h>
#include <cs50.h>
#include <math.h>

float change;
int coins;

int main(void)

{
    // Do while loop to ask for change owed until positive dollar amount is given
    do
    {
        printf("Change owed: $");
        change = get_float();
    }

    // Must be a positive amount
    while (change < 0);

    int amount = round(change * 100);

// Quarters
    while (amount >= 25) // Runs if the amount is more than a quarter amount
    {
        coins++; // Adds one to the amount of coins if condition is vaid
        amount -= 25; // Subtracts a quarter if condition is valid, then starts over if more quarters can be used
    }

// Dimes
    while (amount >= 10) // Runs if the amount is more than a dime amount
    {
        coins++; // Adds one to the amount of coins if condition is vaid
        amount -= 10; // Subtracts a dime if condition is valid, then starts over if more dimes can be used
    }

// Nickles
    while (amount >= 5) // Runs if the amount is more than a nickle amount
    {
        coins++; // Adds one to the amount of coins if condition is vaid
        amount -= 5; // Subtracts a nickle if condition is valid, then starts over if more nickles can be used
    }

// Pennies
    while (amount >= 1) // Runs if the amount is more than a penny amount
    {
        coins++; // Adds one to the amount of coins if condition is vaid
        amount -= 1; // Subtracts a penny if condition is valid, then starts over if more pennies can be used
    }


    printf("%i\n", coins);
}


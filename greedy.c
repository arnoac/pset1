#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    //Coin value's

    int const QUARTER = 25;
    int const DIME = 10;
    int const NICKEL = 5;
    int const PENNY = 1;

    int balance = 0;
    float userInput = -1.0;
    int coinCount = 0;

    do 
    {
        printf("Amount of change: ");
        userInput = GetFloat();
    } 
    while (userInput < 0);

    balance = (int)round(userInput * 100.0);

    // number of quarters:
    coinCount += balance / QUARTER;
    balance %= QUARTER;

    // number of dimes:
    coinCount += balance / DIME;
    balance %= DIME;

    // number of nickels:
    coinCount += balance / NICKEL;
    balance %= NICKEL;

    // number of pennies:
    coinCount += balance / PENNY;
    balance %= PENNY;
    

    printf("%i\n", coinCount);
}

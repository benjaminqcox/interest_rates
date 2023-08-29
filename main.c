#include <stdio.h>
#include "userInput.h"
#include "account.h"

// Get user input of 3 parts, deposit amount, term length, interest amount

int main()
{
    int switchAcc;
    short int numAccs = 2;
    struct bankValues accs[numAccs];

    for (int i = 0; i < numAccs; i++)
    {
        switchAcc = 0;
        setAll(&accs[i]);
        while (switchAcc == 0)
        {
            printAccount(&accs[i]);
            switchAcc = updateValues(&accs[i]);
        }
    }

    for (int i = 0; i < numAccs; i++)
    {
        printf("Account %d:\n\t", i);
        printAccount(&accs[i]);
    }

    return 0;
}
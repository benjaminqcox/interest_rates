#include "userInput.h"

double getDoubleInput(char valueName[])
{
    char chosenVal[16];
    double finalVal;
    do
    {
        printf("Enter %s: \n", valueName);
        scanf(" %s", chosenVal);
        finalVal = strtod(chosenVal, NULL);
    } while (finalVal < 1 && strcmp(chosenVal, "0"));

    return finalVal;
}

long int getInputInRange(long int low, long int high)
{
    long int chosenVal;
    char tempVal[16];
    do
    {
        printf("Enter a number between %ld and %ld:\n", low, high);
        scanf(" %s", tempVal);
        chosenVal = strtol(tempVal, NULL, 10);
    } while (chosenVal < low || chosenVal > high);

    return chosenVal;
}

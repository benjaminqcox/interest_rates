#include "account.h"
#include "userInput.h"


void setDeposit(struct bankValues * bv, double val)
{
    bv->deposit = val;
}

double getDeposit(struct bankValues * bv)
{
    return bv->deposit;
}

void setTerm(struct bankValues *  bv, double val)
{
    bv->term = val;
}

double getTerm(struct bankValues *  bv)
{
    return bv->term;
}

void setInterest(struct bankValues *  bv, double val)
{
    bv->interest = val;
}

double getInterest(struct bankValues *  bv)
{
    return bv->interest;
}


int updateValues(struct bankValues *  bv)
{
    char* enterMe[] = {"the initial deposit", "the term length", "the account interest"};
    printf("Which value wouf you like to update?\n(1) %s\n(2) %s\n(3) %s\n(4) All\n(5) Exit\n", enterMe[0], enterMe[1], enterMe[2]);
    long int chosenOption = getInputInRange(1, 5);
    printf("chosen option = %ld\n", chosenOption);

    switch (chosenOption)
    {
    case 1:
        setDeposit(bv, getDoubleInput("new deposit value"));
        break;
    case 2:
        setTerm(bv, getDoubleInput("new term length"));
        break;
    case 3:
        setInterest(bv, getDoubleInput("new interest rate"));
        break;
    case 4:
        setAll(bv);
        break;
    case 5:
        printf("Goodbye.\n");
        return -1;
    default:
        printf("Invalid input somehow.");
        break;
    }
    return 0;
    
}


void setAll(struct bankValues *  bv)
{
    char* enterMe[] = {"the initial deposit", "the term length", "the account interest"};
    setDeposit(bv, getDoubleInput(enterMe[0]));
    setTerm(bv, getDoubleInput(enterMe[1]));
    setInterest(bv, getDoubleInput(enterMe[2]));
}

double calcDepositGrowth(struct bankValues * bv)
{
    return getDeposit(bv) * getTerm(bv) * getInterest(bv);
}


void printAccount(struct bankValues * bv)
{
    double dep = calcDepositGrowth(bv);
    printf("Account info:\n");
    printf("\tDeposit: %.2f\n\tTerm length: %.2f\n\tAccount interest: %.2f\n", getDeposit(bv), getTerm(bv), getInterest(bv));
    printf("New deposit: %.2f\nIncrease of: %.2f\n", dep, dep-bv->deposit);
}


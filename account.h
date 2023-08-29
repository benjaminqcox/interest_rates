#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct bankValues
{
    double deposit;
    double term;
    double interest;
};

void setDeposit(struct bankValues * bv, double val);

double getDeposit(struct bankValues * bv);

void setTerm(struct bankValues * bv, double val);

double getTerm(struct bankValues * bv);

void setInterest(struct bankValues * bv, double val);

double getInterest(struct bankValues * bv);

int updateValues(struct bankValues * bv);

void setAll(struct bankValues * bv);

double calcDepositGrowth(struct bankValues * bv);

void printAccount(struct bankValues * bv);



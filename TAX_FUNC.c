#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include"TAX_STRUCT.c"
int count=1;
void GST()
{
    int tax=0;
    strcpy(B.tax,"GST");
    B;
    if(B.income <=1000 && B.income >= 0)
    {
        tax = B.income * 0.01; 
    }
    else if(B.income >= 10000 && B.income < 1000)
    {
        tax = B.income * 0.15;
    }
    else if(B.income >= 100000 && B.income <= 10000)
    {
        tax = B.income * 0.25;
    }
    else
    {
        tax = B.income * 0.40;
    }
    printf("****TAX****\n\n");
    printf("Name : %s\n", s);
    printf("your GST TAX is: %d\n", tax);
    printf("Final balance: %d\n", B.income)-tax;
    FILE *p;
    p=fopen("receipt.txt","a");
    fprintf(p,"%d.)%s || %s || %d || %d || %s || %d || %s || %s .\n",count,B.tax,B.date,tax,B.income,s,B.age,B.address,ph);
    count++;
    fclose(p);
}

void VAT()
{
    int tax=0;
    strcpy(B.tax,"VAT");
    B;
    if(B.income <=10000 && B.income >= 0)
    {
        tax = B.income * 0.25; 
    }
    else if(B.income > 10000 && B.income <= 100000)
    {
        tax = B.income * 0.04;
    }
    else if(B.income >= 100000 && B.income <= 500000)
    {
        tax = B.income * .055;
    }
    else
    {
        tax = B.income * 0.06;
    }

    printf("****TAX****\n\n");
    printf("Name : %s\n", s);
    printf("your VAT TAX is: %d\n", tax);
    printf("Final balance: %d\n", B.income-tax);
    FILE *p;
    p=fopen("receipt.txt","a");
    fprintf(p,"%d.)%s || %s || %d || %d || %s || %d || %s || %s .\n",count,B.tax,B.date,tax,B.income,s,B.age,B.address,ph);
    count++;
    fclose(p);
}

void Income()
{
    int tax=0;
    B;
    strcpy(B.tax,"Income");
    if(B.income <=300000 && B.income >= 0)
    {
        tax = B.income * 0.02; 
    }
    else if(B.income > 300000 && B.income <= 600000)
    {
        tax = B.income * 0.04;
    }
    else if(B.income >= 600000 && B.income <= 1000000)
    {
        tax = B.income * .08;
    }
    else
    {
        tax = B.income * 0.16;
    }

    printf("****TAX****\n\n");
    printf("Name : %s\n", s);
    printf("your Income TAX is: %d\n", tax);
    printf("Final balance: %d\n", B.income-tax);
    FILE *p;
    p=fopen("receipt.txt","a");
    fprintf(p,"%d.)%s || %s || %d || %d || %s || %d || %s || %s .\n",count,B.tax,B.date,tax,B.income,s,B.age,B.address,ph);
    count++;
    fclose(p);
}

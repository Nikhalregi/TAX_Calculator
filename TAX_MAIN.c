//Program to calculate tax using the concept of struct and file handling.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include"TAX_FUNC.c"
//Idea is this that we will use a struct to temporary store the detail and after completion/calulation we will transfer that into a file


/*the rate for different tax is different
for convience
tax         income         rate(per rupee)
Income      >3lac               2.0
         <3lac & >6lac          4.0
         <6lac & >10lac         8.0
            <10lac              16.0
GST         >1000               1.0
        <1000 & >10000          1.5
        <10000 & >1lac          2.5
            <1lac               4.0
VAT         <10000              2.5
        <10000 & >1lac          4.0
        <1lac &  >5lac          5.5
             >5lac              6.0

*/
void GST();
void VAT();
void Income();

int main(){ 
    
	printf("Enter your  name:\n");
	scanf("%[^\n]s", &B.name);
    strcpy(s,B.name);
    printf("When are you paying the tax(dd/mm/yyyy):\n");
	scanf("%s", B.date);
	printf("Enter your age:\n");
	scanf("%d", &B.age);
    printf("Enter income:\n");
	scanf("%d", &B.income);
    printf("Enter the permanent address :\n");
    scanf("%s", B.address);
    printf("Enter the phone number : \n");
    scanf("%s", &B.phonenumber);
    strcpy(ph,B.phonenumber);
	int c;
	do{
		printf("****TAX****\n");
		printf("Please enter your choice from below (1-4):\n");
		printf("1. Income\n");
		printf("2. GST\n");
        printf("2. VAT\n");
		printf("4. EXIT\n");
		printf("Enter your choice :\n");
		scanf("%d", &c);
		switch (c){
		case 1:
			Income();
			break;
		case 2:
			GST();
			break;
        case 3:
			VAT();
			break;
		default:
			printf("SORRY INVALID CHOICE!,PLEASE CHOOSE FROM 1 or 2 or 3\n");
            break;
		}
	} while (c != 4);
}
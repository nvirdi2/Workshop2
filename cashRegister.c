#include <stdio.h>

int main(void)
{
    double Input;   //takes the user input
    printf("Please enter the amount to be paid: $");
    scanf("%lf", &Input);   // takes the input and stores it as a variable

    printf("GST: 1.13\n");   //prints the tax amount
    //GST calculations
    double GST = 0.13;
    GST = (Input * GST)+0.005;
    double total = (Input + GST);
    int coins = (int)(total * 100);    //calculates the total amount of cents

    //calculating change
    int changereturnloonie = coins % 100;
    int changereturnquarter = changereturnloonie % 25;
    int changereturndime = changereturnquarter % 10;
    int changereturnnickles = changereturndime % 5;
    double changereturnpennies = 0.00;

    //calculates the total amount of coins 
    int loonie = coins / 100;
    int quarter = (coins - (100 * loonie))/25;
    int dime = (coins - (100 * loonie) - (25 * quarter))/10;
    int nickles = (coins - (100 * loonie) - (25 * quarter) - (10 * dime))/5;
    int pennies = (coins - (100 * loonie) - (25 * quarter) - (10 * dime) - (5 * nickles));

    //prints the result of what the user owes 
    printf("Balance owing: $%.2lf\n", ((double)(coins)/100));
    printf("Loonies required: %d, balance owing: $%.2lf\n",loonie, (double)(changereturnloonie)/100);
    printf("Quarters required: %d, balance owing $%.2lf\n",quarter, (double)(changereturnquarter)/100);
    printf("Dimes required: %d, balance owing $%.2lf\n",dime, (double)(changereturndime)/100);
    printf("Nickles required: %d, balance owing $%.2lf\n",nickles, (double)(changereturnnickles)/100);
    printf("Pennies required: %d, balance owing $%.2lf\n",pennies, changereturnpennies);

    return 0;
   }
 

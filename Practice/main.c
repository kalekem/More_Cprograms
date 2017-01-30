#include <stdio.h>
#include <stdlib.h>
#include "MyInfo.h"


int main()
{
    printf("Cleo Is a GREAT GUY!\n");
    printf("Pip! Pip!!\a");
    printf("Comment it here!\n");

    //string conversion
   // char name = 'Brandeis';
    printf("I go to %s University\n", "Brandeis");

    //variables
    //int age = 2016-1993;
    int currentYear = 2016;
    int birthYear = 1902;
    int age = currentYear - birthYear;

    printf("My age is %i\n", age);

    //string variables
    //Strings are array of characters
    char* listNames[] = {"Cleophas Kalekem", "Brandeis University", "Olin College"};
    printf("College name is %s \n", listNames[2]);

    printf("My name is %s \n", MYNAME);

    int girlsAge = (MYAGE/2)+ 7;
    printf("%s can date girls with age %d\n", MYNAME, girlsAge);

    //allowing users to enter inputs
    char firstName[20];
    char crush[20];
    int numOfBabies;

    printf("What's your name? \n");
    scanf("%s",firstName);

    printf("Who is your crush? \n");
    scanf("%s", crush);

    printf("How many kids would you have? \n");
    scanf("%d", &numOfBabies);
    printf("%s and %s are in love and will have %d kids\n", firstName, crush, numOfBabies);

    //Math Operators
    int a = 20;
    int b = 3 ;
    int c = a/b;
    printf("The result is %d\n", c);

    //assigning same value to different variables
    int x;
    int y;
    int z;

    x=y=z = 400;
    printf("%d %d %d \n", x, y, z);

    float age1, age2, age3, avg;
    age1=age2=4.0;
    printf("Enter your age: \n");
    scanf("%f", &age3);

    avg = (age1+age2+age3)/3;
    printf("The average age of the group is %f\n", avg);

    int pageViews =0;
    pageViews = pageViews +1;
    printf("Page Views: %d \n", pageViews);

    pageViews = pageViews +1;
    printf("Page Views: %d \n", pageViews);

    pageViews = pageViews +1;
    printf("Page Views: %d \n", pageViews);

    //interest calculator
    float balance = 1000.00;
    //first year
    balance *= 1.1;
    printf("Balance is %f\n", balance);

    //2nd year
    balance *= 1.1;
    printf("Balance is %f\n", balance);

    //3rd year
    balance *= 1.1;
    printf("Balance is %f\n", balance);


    //TYPE CASTING
    float avgProfit;
    int pricePerPumpkin = 10;
    int sales = 59;
    int daysWorked = 7;

    avgProfit = (float)(pricePerPumpkin * (float)sales) / (float)daysWorked;
    printf("Average daily profit: $%.2f\n", avgProfit);

    int tuna = 19;
    printf("Address \t Name \t Value \n")
    printf("Address \t Name \t Value \n")
    printf("%p \t %s \t %d \n", &tuna, "tuna", tuna);




    return 0;
}

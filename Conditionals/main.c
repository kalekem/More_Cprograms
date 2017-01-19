#include <stdio.h>
#include <stdlib.h>

int main()
{
    //if statements
    if(3>10){
        printf("Since when???\n");
    }
    else {
        printf("SHut up and get out!\n");
    }

    int age ;
    char gender;

    printf("How old are you? \n");
    scanf("%d", &age);

    if(age >=18){
        printf("What is your gender? (m/f)\n");
        scanf(" %c", &gender);

        if(gender == 'm') {
            printf("Dude");
        }

        if(gender == 'f') {
            printf("M'Lady");
        }
         printf(" you may enter this website!!\n");
    }
    else{
        printf(" You cannot enter this website!!\n");
    }

    //if-else if statements
    float grade1;
    float grade2;
    float grade3;
    printf("Enter your 3 test grades: \n");
    scanf(" %f", &grade1);
    scanf(" %f", &grade2);
    scanf(" %f", &grade3);

    float avg = (grade1 + grade2 + grade3)/3;
    printf("Average: %.2f\n", avg);

    if(avg >=90){
        printf("Grade: A\n");
    }
    else if(avg >=80){
        printf("Grade: B");
    }
    else if(avg >=70){
        printf("Grade: C");
    }
    else if(avg >=60){
        printf("Grade: D");
    }
    else {
        printf("Dude! Wake up!!");
    }


    return 0;
}

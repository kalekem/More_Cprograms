#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int main()
{
    int tuna = 19;
    printf("Address \t Name \t Value \n");

    int *pTuna = &tuna;
    printf("%p \t %s \t %d \n", &tuna, "tuna", tuna);
    printf("%p \t %s \t %d \n", &pTuna, "tuna", tuna);

    *pTuna = 100;
    printf("\n*pTuna: %d \n", *pTuna); //dereferencing a pointer

    //Arrays and pointers
    int i;
    int meatBalls[5] = {34, 78, 2, 3, 18};

    printf("Element \tAddress \tValue \n");
    for( i = 0; i <5; i++){
        printf("meatBalls[%d] \t %p \t %d\n", i, &meatBalls[i], meatBalls[i]);
    }

    //Strings and pointers
  //  char movieOne[] = "The Return of clikMan"; //a constant
    char *movieTwo = "The Cool With Pointers"; //not a constant, a variable

    puts (movieTwo);

    movieTwo = "The Return of Movie Two";
    puts (movieTwo);




    return 0;
}

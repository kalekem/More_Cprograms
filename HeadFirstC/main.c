#include <stdio.h>
#include <stdlib.h>

int main()
{
    int card_count = 11;

    if(card_count > 10){
        puts("The deck is hot! Increase the bet!");
    }

    int count_down = 10;
    while(count_down > 0){
        puts("I must not write a code in class!!");
        count_down -=1;
    }

    char ex[20];
    puts("Enter girlfriend's name: ");
    scanf("%19s", ex);
    printf("Dear %s. \n\n\tYou're history!\n", ex);

    char suit = 'H';
    switch (suit) {
    case 'C':
        puts("Clubs");
        break;
    case 'D':
        puts("Diamonds");
        break;
    case 'H':
        puts("Hearts");
        break;
    default:
        puts("Spades");
    }

    //calculates the number of cards in a shoe
    int decks;
    puts("Enter the number of decks: ");
    scanf("%i", &decks);
    if(decks < 1){
        puts("That's not a valid number of decks");
        return 1;
    }
    printf("There are %i cards\n", (decks *52));

    char name[8];
    puts("Enter your name: ");
    scanf("%9s", name);
    printf("Your entered: %s\n", name);

    //while loop
    int counter = 1;
    while(counter < 11){
        printf("%i green bottles, hanging on a wall\n", counter);
        counter++;
    }
    return 0;
















}

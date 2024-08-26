#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>

// Project 1: Guess the Number Game

int main() {
    printf("(Press Enter to start the game) ");
    getch();

    int number, i = 0;
    srand(time(0));
    int random_number = (rand() % 100) + 1;
    
    printf("\nGuess the number between 1 to 100 (Enter a number): ");
    scanf("%d", &number);

    do {
        if (number < 1 || number > 100) {
            printf("\nOhh god, I said enter the number between 1 to 100.\n");
            break;
        }
        else if (number > random_number) {
            printf("Lower number please: ");
        }
        else if (number < random_number) {
            printf("Higher number please: ");
        }

        if (number != random_number) {
            scanf("%d", &number);
        }

        i++;  // Increment the guess counter

    } while (number != random_number);

    if (number == random_number) {
        printf("\nFinally, you guessed it! The correct number is %d.\n", random_number);
        printf("The number of guesses you took: %d\n", i);
    }

    return 0;
}

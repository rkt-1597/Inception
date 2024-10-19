#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));  
    int secretNumber = rand() % 10 + 1;  
    int userGuess;

    do {
        printf("Guess the secret number: ");
        scanf("%d", &userGuess);

        if (userGuess != secretNumber) {
            printf("Wrong! Try again.\n");
        }
    } while (userGuess != secretNumber);

    printf("Congratulations! You guessed it!\n");

    return 0;
}

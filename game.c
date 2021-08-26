#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess, num_of_guesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; // Its generating  a number between 1 and 100.
    do{
        printf("Guess a number between 1 to 100\n");
        scanf("%d", &guess);

        if (guess > number){
            printf("Guess a lower number\n");
        }
        else if (guess < number){
            printf("Guess a higher number\n");
        }
        else{
            printf("You guessed it in %d attempts\n", num_of_guesses);
            int a ;scanf("%d", a); // This is to stop the console from closing itself without displaing the message.
        }
        num_of_guesses = num_of_guesses + 1; // or you can say 'num_of_guesses++'.
    } while (guess != number);

    return 0;
}
  
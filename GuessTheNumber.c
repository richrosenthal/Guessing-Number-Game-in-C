// Author Richard Rosenthal
// Date 7-6-19
// A simple number guessing game which implements a random number generator



#include <stdio.h>
#include <stdlib.h> // This library will allow the use of a random number generator
#include <time.h> //This library will allow a seed for the random number generator

int main(){
time_t t;
srand((unsigned) time(&t));
int secretNumber = rand() % 21; //random number
int enteredNumber;  // The end user's guess

printf("Guess the secret number\n");
printf("You will get 5 tries\n");

// The four loop will allow the user 5 guess at guessing the secret number.
for (int i = 1; i < 6; i++){

    int triesLeft = 5 - i; //The amount of tries left will update each iteration of the "for loop"
    printf("Enter the secret number\n");
    scanf("%d", &enteredNumber);

    if (enteredNumber < 0 || enteredNumber > 20){
        printf("Must be a number from 0-20\n");
        printf("You have %d tries left.\n", triesLeft);

    }

    else if( enteredNumber == secretNumber){
        printf("You win!!\n");
        printf("You had %d tries left.\n", triesLeft);
        break;
    }
    else if (enteredNumber < secretNumber && enteredNumber >= 0){
        printf("Sorry but the number you entered is lower than secret number.\n");
        printf("You have %d tries left.\n", triesLeft);
    }
    else if (enteredNumber > secretNumber && enteredNumber <= 20){
        printf("Sorry but the number you entered is higher than secret number.\n");
        printf("You have %d tries left.\n", triesLeft);
    }
    
    else {
        printf("\nPlease try again\n");
        printf("You have %d tries left.\n", triesLeft);
        
    }
}


return 0;

    
}
/* Hangman Game
 Author: Mahim Hossain
 Date : 14/01/2020
*/

#include <stdio.h>

int main() {
    
    char answer;
    char guess;
    
    int lives;
    int i;
    
    answer = 'A';
    lives = 5;
    
    printf("Welcome to the Hangman Game \n \n");
    
    for(i = 0; i < 5; i = i+1) {
        
    printf("Please enter a character, you get 5 guesses \n \n");
    
    scanf("%1s", &guess); // Inputting the guess 
    flushall();
        
        if (guess != answer) {
            
            printf("Keep Guessing \n \n");
            lives = lives - 1;
            printf("You have %d lives remaining \n \n", lives);
            
        }
        
        if (guess == answer) {
            
            printf("You have guessed correctly \n \n");
            printf("Press enter to end the Program \n \n");
            
        }
        
    }
    
    if (lives == 0) {
        
        printf("You have run out of lives :( \n \n");
        printf("Better luck next time :) \n \n");
        printf("Press Enter to end the Program");
        
    }
        
    getchar();
    return 0; 
    
} // end of MAIN
    
    
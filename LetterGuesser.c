/* Letter Guessing Game
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
    
    printf("Welcome to the Letter Guessing Game \n \n");
    
    for(i = 0; i < 5; i = i+1) { // start of FOR loop
        
    printf("Please enter a character, you get 5 guesses \n \n");
    
    scanf("%1s", &guess); // Inputting the guess 
    flushall();
        
        if (guess != answer) { // start of IF statement
            
            printf("Keep Guessing \n \n");
            lives = lives - 1;
            printf("You have %d lives remaining \n \n", lives);
            
        } // end of IF statement
        
        if (guess == answer) { // start of IF statement
            
            printf("You have guessed correctly \n \n");
            printf("Press enter to end the Program \n \n");
            
        } // end of IF statement
        
    } // end of FOR loop
    
    if (lives == 0) { // start of IF statement
        
        printf("You have run out of lives :( \n \n");
        printf("Better luck next time :) \n \n");
        printf("Press Enter to end the Program");
        
    } // end of IF statement
        
    getchar();
    return 0; 
    
} // end of MAIN
    
    
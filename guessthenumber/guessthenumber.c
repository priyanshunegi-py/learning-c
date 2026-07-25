#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    //Using current time to set the generator so the same number isn't generated every time
    srand(time(NULL));

    //Shifted range by one so generated number is between 1-100
    int secretNum=(rand()%100)+1;
    
    printf("Welcome to the number guessing game!! Get ready to play.\n\n");
    int guess;

    printf("How to play:\n A random number is generated between 1-100, your job is to guess it.\n");
    printf(" The computer will say HOT/COLD depending on how close/far your guess is, GOOD LUCK!!\n\n");

    int gameOver=0;
    int attempt=0;
    int temp;
    int tempnew=0;
    while (gameOver==0){
        attempt++; //Storing the number of attempts as every time the code passes through this loop adds 1
        printf("Guess the number:\n\n");
        scanf("%d", &guess);

        if (guess==secretNum){
            printf("Congrats!! You guessed the number!!\n\n");
            gameOver=1;
        }
        else if(tempnew==0){
            if (guess>secretNum){
                temp=guess-secretNum;
                if (temp>20){
                    printf("COLD\n");
                    tempnew=temp;
                } 
                else{
                    printf("HOT\n");
                    tempnew=temp;
                }
            }
            else if (guess<secretNum){
                temp=secretNum-guess;
                if (temp>20){
                    printf("COLD\n");
                    tempnew=temp;
                }
                else{
                    printf("HOT\n");
                    tempnew=temp;
                }

            }
        }
        else if (tempnew!=0){
            if (guess>secretNum){
                temp=guess-secretNum;
                if (tempnew>=temp){
                    printf("HOT\n");
                    tempnew=temp;
                }
                else if (tempnew<temp){
                    printf("COLD\n");
                    tempnew=temp;
                }
            }
            else if (guess<secretNum){
                temp=secretNum-guess;
                if (tempnew>=temp){
                    printf("HOT\n");
                    tempnew=temp;
                }
                else if(tempnew<temp){
                    printf("COLD\n");
                    tempnew=temp;
                }
            }
        }      
    }
    
    printf("Number of attempts you took:%d", attempt);
    return 0;
}
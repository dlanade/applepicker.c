/*                                                                                                                     
  Name: David Lanade
  Uindy E-mail: lanaded@uindy.edu
  Class: CSCI 155
  Assignment Name: Lab Assignment 7
  Date: 03/07/2019
  Desc: Multiple Loop and Array Statement
  Filename: array.c
  To compile , type this, gcc filename.c 
  To compile , type this, ./a.out
*/

#include <stdio.h>

   int main() 
   {
        int userNum[20];
        int answer;
        int num[20];
        int number;
        int i;
        double valueSum;
        int index;
        int count;
        int numTimes;
        int indexValue;
        
        while(answer != 9){ // Repeating menu if user does not input 9 for exit
        
        printf("1. All 0s\n2. Increasing\n3. Random\n4. Average\n5. Change value\n6. Flip\n7. Negate\n8. Search\n9. Exit\n"); // printing menu
        printf("What do you want to do? Answer should be from 1 to 9\n");  // allowing user to choose option from menu
        scanf("%d", &answer);
        
        if(answer == 1){   // displaying and carrying out task for option 1
            for(i = 0; i < 20; ++i ){
                userNum[i] = 0;
                printf("%d ", userNum[i]);
            }
        }
        if(answer == 2){   // displaying and carrying out task for option 2
            printf("What number do you want?\n");
            scanf("%d", &number);
            for(i = 0; i < 20; ++i ){
                num[i] = number;
                number = number + 1;
                printf("%d ", num[i]);
            }
        }
        if(answer == 3){   // displaying and carrying out task for option 3
            for(i = 0; i < 20; ++i ){
                userNum[i] = (rand() % 100);
                printf("%d ", userNum[i]);
            }
        }
        if(answer == 4){   // displaying and carrying out task for option 4
            for(i = 0; i < 20; ++i){
                userNum[i] = (rand() % 100);
                printf("%d ", userNum[i]);
                valueSum = userNum[i] + valueSum;
            }
                printf("Average: %.1lf\n", valueSum/20);
        }
        if(answer == 5){   // displaying and carrying out task for option 5
            printf("What index do you want to change?\n");
            scanf("%d", &index);
            printf("What value do you want to put in index\n");
                scanf("%d", &indexValue);
                if((index <= 20) && (index >= 0)){
                    for(i = 0; i < 20; ++i){
                    userNum[i] = (rand() % 100);
                    userNum[index] = indexValue;
                    printf("%d ", userNum[i]);
                    }
                
                }
        }
        if(answer == 6){ // displaying and carrying out task for option 6
            for(i = 0; i < 20; ++i){
                userNum[i] = (rand() % 100);
            }
                for(i = 19; i >= 0; i = i - 1){
                    printf("%d ", userNum[i]);
                }
                    printf("\n");
        }
        if(answer == 7){  // displaying and carrying out task for option 7
           for(i = 0; i < 20; ++i){
                userNum[i] = (rand() % 100);
                userNum[i] = userNum[i] * -1;
                printf("%d ", userNum[i]);
            }
        }   
        if(answer == 8){   // displaying and carrying out task for option 8
           printf("Choose a number you want to search for the number of times\n");
           scanf("%d", &numTimes);
           for(i = 0; i < 20; ++i){
                userNum[i] = (rand() % 100);
                if(userNum[i] == numTimes){
                    count = count + 1;
                }
            }
                    printf("the number is repeated %d times. \n", count);
        }
        if(answer == 9){ // exiting the menu
           printf("Hey Thank you, Have a great day\n");
        }
        }
        return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main()
{
    int number,guess,nguesses=1;
    srand(time(0));
    number= rand()%100 +1;

    // printf(" The number is %d \n ,",number );


    do{
        printf(" the number to be guessed is ");
        scanf("%d",&guess);

        if( guess > number ){

            printf("the number to be guessed is smaller \n");
        }
        else if (guess < number ){


            printf("the number to be guessed is bigger \n ");}

        else {

            printf("the number guessed is correct in %d attempts \n ",nguesses);
        }
         nguesses++;

    }while(guess != number );
    
    return 0;
}

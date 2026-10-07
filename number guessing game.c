# include <stdio.h>
# include<stdlib.h>
#include<time.h>
int main()
{
	int random, guess;
	int no_of_guess=0;
	srand(time(NULL));
	printf("Welcome to the world of guessing number\n");
	random=rand()%100+1;// genrating between 0 to 100
	do{
	        printf(" \nplease enter your guess between(1 to 100) :");
	       
	        scanf("%d",  &guess);
	        no_of_guess++;
	        
	        if (guess< random){
	            printf("Guess larger number.\n");
	            
	        } else if(guess> random){
	            printf("Guess smaller number.\n");
	            
	} else{
	    printf("\nCongratulations 🎉 !!!You have sucessfully guess the number in%d attempts\n", no_of_guess);
	}
	} while (guess != random);
	printf("Bye Bye ,Thanks for playing guessing no. game\n");
	printf("\n Devloped by: Shalini Bist\n");
	printf("email:shalini098765bisht@gmail.com\n");
	return 0 ;
}
//printf("\nCongratulations 🎉 !!! You have successfully guessed the number in %d attempts.\n", no_of_guess);

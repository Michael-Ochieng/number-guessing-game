#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Playname( ){
	char name[10];
printf("Please enter your name (not more than 5 characters):");
 fgets(name, sizeof(name), stdin);
printf("Hello\t%s", name );
};
int main()
{
  Playname();
  srand(time(NULL));
  
  // generate a random number between 1-100
  int number = (rand() % 100) + 1;
  int guess = 0;
    printf("\nGuess a number between 1 & 100:\n");
  do
  {
    // asks the user's input'
    printf(" Enter a guess : ");
    scanf("%d", &guess);
    
    // if they get the answer right let them know, otherwise guide them in the 
    // right direction lower or higher
    if (guess == number) printf("You got it!\n");
    else if (guess < number) printf("Guess higher!\n");
    else if (guess>100)printf("You're out of range\n");
    else printf("Guess lower!\n");
    
    // allows the user to guess until they get it right
  } while (guess != number);
  
  return 0;
}

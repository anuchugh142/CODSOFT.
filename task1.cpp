#include <iostream>

#include<cstdlib>

#include<ctime>

using namespace std;

int main() {

  // Seed the random number generator
  srand(time(NULL));


  // Generate a random number between 0 and 100
  int randomNumber = rand() % 100 + 1;


  // Prompt the user to guess the number
  cout<<"Guess a number between 1 and 100: ";


  // Enter the value of guess
  int guess;
  cin>>guess;


  // Checking whether the guess is right or wrong
  while(1){


    // Guess is Right
    if(randomNumber==guess){
      cout<<endl<<"Well Done! You've guessed the number right."<<endl;
      break;
    }


    // Guess is smaller 
    else if(randomNumber>guess)
    {
      cout<<endl<<"Oops! Looks like you've entered a smaller number"<<endl<<endl;
      cout<<"Guess a number between 1 and 100: ";
      cin>>guess;
    }


    // Guess is larger
    else 
    {
      cout<<endl<<"Oops! Looks like you've entered a larger number"<<endl<<endl;
      cout<<"Guess a number between 1 and 100: ";
      cin>>guess;
    }

  }

  return 0;
}

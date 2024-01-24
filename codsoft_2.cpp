#include<iostream>

using namespace std;

int main()
{

  // Initiating the program by asking the user's choice

  cout<<"Choose the operation you want to perform"<<endl<<endl;
  cout<<"To perform Addition press -> +"<<endl;
  cout<<"To perform subtraction press -> -"<<endl;
  cout<<"To perform multiplicaion press -> *"<<endl;
  cout<<"To perform division press -> /"<<endl<<endl;


  // Taking the user's choice

  char choice;
  cout<<"Enter your choice : ";
  cin>>choice;


  //Taking inputs

  float a,b;

  cout<<endl<<"enter first number : ";
  cin>>a;

  cout<<endl<<"enter second number : ";
  cin>>b;

  cout<<endl<<"Your answer is : ";


  // performing the operations

  switch(choice){


    case '+':
      {
        cout<<(a+b);
            break;
    }


    case '-':
      {
        cout<<(a-b);
            break;
    }


    case '*':
      {
        cout<<(a*b);
        break;
    }


    case '/':
      {
        cout<<(a/b);
        break;
    }


    default:
    cout<<"Invalid Index";


  }


  return 0;
}

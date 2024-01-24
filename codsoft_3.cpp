#include <iostream>

using namespace std;

int main(){

  // Taking number of students

  int n;
  
  cout<<"Enter the number of students ";
  cin>>n;

  //initializing variables
  
  int sum=0;

  int mx=-1;

  int mn=101;

  // Taking name of students and their grades

  for(int i=1;i<=n;i++)
    {

      cout<<endl<<"Enter the name of student "<<i<<" : ";
      
      string StudentName;
      cin>>StudentName;

      
      cout<<endl<<"Enter the grade of student "<<i<<" : ";
      
      int grade;
      cin>>grade;

      sum+=grade;

      mx=max(grade,mx);
      
      mn=min(grade,mn);
    }

  //calculating average
  
  int AvgGrade;
  AvgGrade=sum/n;

  //displaying outputs
  
  cout<<endl<<"Average grade of the class is : "<<AvgGrade<<endl;

  cout<<endl<<"Highest grade of the class is : "<<mx<<endl;

  cout<<endl<<"Lowest grade of the class is : "<<mn<<endl;


  return 0;
}

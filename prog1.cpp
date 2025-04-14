#include<iostream>
using namespace std;

int main()
{
    double mark;
    char grade;

    cout<<"Enter your Score: ";
    cin>>mark;

    grade =  (mark >= 90) 
    ? 'A' 
    :(mark >= 70) 
    ? 'B' 
    :(mark >= 50) 
    ? 'C'
    :(mark >= 33) 
    ? 'D' 
    : 'F';
    (marks <= 100 && marks > 0)
    ? cout << "Your grade is: " << grade << ". "
    : cout << "Invalid marks" << endl;


    switch(grade){
      case 'A':cout<<"Your Grade is A. Excellent Work!";
      break;

    
      case 'B':cout<<"Your Grade is B. Good Work !";
      break;

      case 'C':cout<<"Your Grade is C. Avrege Work !";
      break;

      case 'D':cout<<"Your Grade is D. Work Hard !";
      break;

      case 'F':cout<<"Your Grade is F !";
      break;
      
      default:"invalid grade.";
    }

    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
    {
        cout << " You are eligible for the next level of your study. " << endl;
    }
    else
    {
        cout << "Please try again next time." << endl;
    }

    return 0;   
  }



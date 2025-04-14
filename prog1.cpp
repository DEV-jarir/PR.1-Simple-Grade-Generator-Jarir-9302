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

    switch(grade){
    case 'A':cout<<"Your Grade is A. Excellent Work! You are Eligible for next levl.";
    break;
    case 'B':cout<<"Your Grade is B. Good Work ! You are Eligible for next levl.";
    break;
    case 'C':cout<<"Your Grade is C. Avrege Work ! You are Eligible for next levl.";
    break;
    case 'D':cout<<"Your Grade is D. Work Hard ! You are Eligible for next levl.";
    break;
    case 'F':cout<<"Your Grade is F ! Please try again next time.";
    break;
    default:"invalid grade.";

    return 0;   
  }

}
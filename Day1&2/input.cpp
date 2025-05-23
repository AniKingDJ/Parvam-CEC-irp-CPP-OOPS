#include<iostream>
using namespace std;
int main(){
    string FirstName,college,branch;
    char sem;
    int age;

    cout<<"Enter your college: ";
    cin>> college;
    cout<<"Enter your Name: ";
    cin>> FirstName;
    cout<<"Enter your branch: ";
    cin>> branch;
    cout<<"Enter your sem: ";
    cin>> sem;
    cout<<"Enter your age: ";
    cin>> age;
    
    cout<<"Your name is : "<<FirstName<<",You're : "<<age<<"years old.You're Studying in : "<<college<<"college in : "<<branch<<"branch : "<<sem<<"semister";
}
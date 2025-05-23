#include<iostream>
using namespace std;

class student{
    public:
    string name, college, branch;
    int sem;
    void show()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"college: "<<college<<endl;
        cout<<"branch: "<<branch<<endl;
        cout<<"sem: "<<sem<<endl;

    }
};

 int main(){
    student student1;
    student1.name = "akshay";
    student1.college = "CEC";
    student1.branch = "AIML";
    student1.sem = 8;

    student1.show();
 }
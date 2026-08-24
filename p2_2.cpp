#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int sem;
    string enroll,branch,year,ins,name;

    float ver;
    int mob;
    cout<<"***********************************************"<<"\nSTUDENT RECORD MANAGEMENT SYSTEM\n"<<"***********************************************\n";
    cout<<"SOFTWARE VERSION:";
    cin>>ver;
    cout<<"INSTITUTE:";
    cin>>ins;
    cout<<"ACADEMIC YEAR:";
    cin>>year;
    cout<<"------------------------------------------------"<<"\nSTUDENT REGISTRATION\n"<<"------------------------------------------------\n";
    cout<<"ENTER ENROLLMENT NUMBER:";
    cin>>enroll;
    cout<<"ENTER STUDENT NAME:";
    cin>>name;
    cout<<"BRANCH:";
    cin>>branch;
    cout<<"ENTER SEMESTER:";
    cin>>sem;
    cout<<"ENTER MOBILE NUMBER:";
    cin>>mob;

    cout<<"------------------------------------------------"<<"\nSTUDENT INFORMATION\n"<<"------------------------------------------------\n";
    cout<<"ENTER ENROLLMENT NUMBER:"<<enroll<<endl;
    cout<<"ENTER STUDENT NAME:"<<name<<endl;
    cout<<"BRANCH:"<<branch<<endl;
    cout<<"ENTER SEMESTER:"<<sem<<endl;
    cout<<"ENTER MOBILE NUMBER:"<<mob<<endl;
    cout<<"------------------------------------------------";
}


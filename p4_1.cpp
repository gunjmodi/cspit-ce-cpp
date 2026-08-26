#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int sem,m1,m2,m3,tm;
    float avg,per;
    string enroll,branch,name,date,gender,group;
    long long int mob;
    cout<<"***********************************************"<<"\nSTUDENT RECORD MANAGEMENT SYSTEM\n"<<"***********************************************\n";
    cout<<"SOFTWARE VERSION:1.2";
    cout<<endl;
    cout<<"INSTITUTE:CHARUSAT";
    cout<<endl;
    cout<<"ACADEMIC YEAR:2026-27";
    cout<<endl;
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
    cout<<"ENTER DATE OF BIRTH:";
    cin>>date;
    cout<<"ENTER GENDER:";
    cin>>gender;
    cout<<"ENTER BLOOD GROUP:";
    cin>>group;
    cout<<"------------------------------------------------"<<"\nACADEMIC INFORMATION\n"<<"------------------------------------------------\n";
    cout<<"ENTER THE MARKS OF MATHS:";
    cin>>m1;
    cout<<"ENTER THE MARKS OF PHYSICS:";
    cin>>m2;
    cout<<"ENTER THE MARKS OF CPF:";
    cin>>m3;
    cout<<"------------------------------------------------"<<"\nACADEMIC SUMMARY\n"<<"------------------------------------------------\n";
    tm=m1+m2+m3;
    avg=tm/3.0;
    per=avg;
    cout<<"TOTAL MARKS:"<<tm;
    cout<<endl;
    cout<<"AVERAGE:"<<avg;
    cout<<endl;
    cout<<"PERCENTAGE:"<<per;
    cout<<endl;
    if(per>=45)
    {
        cout<<"RESULT:PASS";
        cout<<endl;
        cout<<"CONGRATULATIONS YOU HAVE SUCCESSFULLY PASSED.";
        cout<<endl;

    }
    else
    {
        cout<<"RESULT:FAIL";
        cout<<endl;
    }
    cout<<"------------------------------------------------"<<"\nSTUDENT INFORMATION\n"<<"------------------------------------------------\n";
    cout<<"ENROLLMENT NUMBER:"<<enroll<<endl;
    cout<<"STUDENT NAME:"<<name<<endl;
    cout<<"BRANCH:"<<branch<<endl;
    cout<<"SEMESTER:"<<sem<<endl;
    cout<<"MOBILE NUMBER:"<<mob<<endl;
    cout<<"DATE OF BIRTH:"<<date<<endl;
    cout<<"GENDER:"<<gender<<endl;
    cout<<"BLOOD GROUP:"<<group<<endl;
    cout<<"------------------------------------------------";
}




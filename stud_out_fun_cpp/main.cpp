#include <iostream>

using namespace std;

class student
{
private:
    int RNo,P,C,M,tot=0;
    char Nm[100];
    float per;
public:
    void accept();
    void put();
};
void student::accept()
{
    cout << "Enter Roll No:"<< endl;
    cin >> RNo;
    cout << "Enter Student Name:" << endl;
    cin >> Nm;
    cout << "Enter Physics Marks:" << endl;
    cin >> P;
    cout << "Enter Chemistry Marks:" <<endl;
    cin >> C;
    cout << "Enter Maths Marks:" << endl;
    cin >> M;

    tot=P + C + M ;
    per=(tot)/3;

}
void student :: put()
{
    cout<< "Roll No = "<< RNo <<endl;
    cout << "Name = " << Nm << endl;
    cout << "Physics Marks = " << P <<endl;
    cout << "Chemistry Marks = " << C <<endl;
    cout << "Maths Marks = " << M <<endl;
    cout << "Total Marks = " << tot <<endl;
    cout << "Percentage = " << per <<endl;
}
int main()
{
    student s;
    s.accept();
    s.put();
    return 0;
}

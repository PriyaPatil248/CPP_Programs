#include <iostream>
#include<conio.h>

using namespace std;

class Student
{
private:
    int RNo;
    char Nm[20];
public:
    void get()
    {
        cout << "Enter Roll No" << endl;
        cin >> RNo;
        cout << "Enter Student Name" << endl;
        cin >> Nm;
    }
    void put()
    {
        cout << "Roll No = " << RNo << endl;
        cout << "Student Name = " << Nm << endl;
    }
};
int main()
{
    Student s;
    s.get();
    s.put();
    return 0;
}

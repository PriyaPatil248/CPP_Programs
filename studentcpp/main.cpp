#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class stud
{
    public:
            int No, Phy, Chem, Maths, Tot;
            float Per;
            char Name[20];
            stud();
            stud(int No, int P, int C, int M, char Nm[]);
            void Accept_Student_Details();
            void Display_Student_Details();
            ~stud();
    private:
            void Calculate_Result();

};

stud :: stud()                                       //default constructor
{
    cout << endl <<"\n Inside Default Constructor \n" <<endl;
    No = Phy = Chem = Maths = 0 , Tot = 0;
    Per = 0.0;
}

stud :: stud ( int No, int P, int C, int M, char Nm[] )           //parametrized constructor
{
    cout << endl <<"\n Inside Parametrized Constructor \n" << endl;
    No = No;
    Phy = P;
    Chem = C;
    Maths = M;

    strcpy(Name,Nm);
    Calculate_Result();
}

void stud ::Accept_Student_Details()
{
    cout << "\n\n Enter Student Details :";
    cout << "\n\t Enter Roll No :";
    cin >> No;
    cout << "\n\n Enter Name :";
    cin >> Name;
    cout << "\n\t Enter Physics Marks :";
    cin >> Phy;
    cout << "\n\t Enter Chemistry Marks :";
    cin >> Chem;
    cout << "\n\t Enter Maths Marks :";
    cin >> Maths;

    Calculate_Result();

}

void stud ::Display_Student_Details()
{
    cout <<"\n\n ================**********================ \n\n" ;
    cout << " \n\nDetails of Students are => \n\n";
    cout << "\n\n\t Roll Number = " << No ;
    cout << " \n\n\t Student Name = " << Name;
    cout << " \n\n\t Physics Marks = "<< Phy;
    cout << " \n\n\t Chemistry  Marks = "<< Chem;
    cout << " \n\n\t Maths Marks = "<< Maths;
    cout << " \n\n\t Total Marks = "<< Tot;
    cout << " \n\n\t Percentage Marks = "<< Per;
    cout <<"\n\n ================**********================\n\n" ;
}

void stud ::Calculate_Result()
{
    Tot = Phy + Chem + Maths;
    Per = ((float)(Tot))/3;
}

stud :: ~stud()
{
    cout << endl <<"\n\nInside Destructor of our Student class !!! \n\n" << Per << endl ;
}

int main()
{
    stud std1 ;
    std1.Accept_Student_Details();
    std1.Display_Student_Details();
    stud std2(10,85,80,77,"Priya Patil");
    std2.Display_Student_Details();
    getch();
    return 0;
}

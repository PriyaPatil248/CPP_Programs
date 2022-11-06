#include <iostream>

using namespace std;

class rect
{
private:
    int l,b,area;
public:
    void getrect()
    {
        cout << "Enter Length and Breadth" <<endl;
        cin >> l >> b;
    }
    void putrect()
    {
        area=l*b;
        cout << "Area of Rectangle:" << area << endl;
    }
};
int main()
{
    rect r;
    r.getrect();
    cout << "Display Area of Rectangle";
    r.putrect();
    return 0;
}

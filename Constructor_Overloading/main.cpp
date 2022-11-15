#include <iostream>

using namespace std;

class rect
{
private:
    int l,b;
public:
    rect()
    {
        l=54;
        b=43;
    }
    rect(int x)
    {
        l=x;
        b=15;
    }
    rect(int x, int y)
    {
        l=x;
        b=y;
    }
    void show()
    {
        int area;
        area = l * b;
        cout << "Area of Rectangle=" << area << endl;
    }
};
int main()
{
    rect();
    rect r1(4);
    rect r2(4,6);
    r1.show();
    r2.show();
    return 0;
}

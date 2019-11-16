#include<iostream>
#include<conio.h>
using namespace std;

class Abir
{
private:
    int x;
    int y;
public:
    Abir(int x1=10, int y1=5) //Default Argumented Constructor Function
    {
        x=x1;
        y=y1;
    }
    int getData1()
    {
        return x;
    }
    int getData2()
    {
        return y;
    }
};

main()
{
    Abir ob1;
    cout<<ob1.getData1()<<endl;
    cout<<ob1.getData2()<<endl;
    getch();
}

#include <iostream>
using namespace std;
double x, y;
int main()
{
    cout <<"enter the number x, in the range from -4 to 5 \n ";
    cin>>x;
    if (x>=-4 && x<0)
        y=(-0.5*x);
    else if (x>=0 && x<2)
        y=2-sqrt (4-(pow (x, 2)));
     else if(x>=2 && x<4)
        y=sqrt(4-pow (x-2, 2));
    else if (x>=4 && x<=5)
        y=(-x+4);
    if(x<-4 || x>5)
        cout <<"error";
    else cout <<"Y="<< y;

    }

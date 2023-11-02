#include <iostream> // организация ввода\вывода
#include <cmath>
using namespace std;

int main()
{
    float z,n,m;
    cout <<"n = ";
    cin >> n;
    cout <<"m = ";
    cin >> m;
    z = (sqrt(m)-sqrt(n))/m;
    cout << z;
}
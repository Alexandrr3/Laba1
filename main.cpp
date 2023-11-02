#include <iostream> // организация ввода\вывода
using namespace std;

double c(double x)
{
    double y;
    if (x >= -4 && x < 0)
        y = (-0.5 * x);
    if (x >= 0 && x < 2)
        y = 2 - sqrt(4 - (pow(x, 2)));
    if (x >= 2 && x < 4)
        y = sqrt(4 - pow(x - 2, 2));
    if (x >= 4 && x <= 5)
        y = (-x + 4);

    return y;
}
int main()
{
    double y;
    for (double x = -4; x <= 5; x++)
    {
        y = c(x);
        cout << "x = " << x ;
        cout << "\t y = " << y << endl;
    }
}
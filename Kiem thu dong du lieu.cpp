#include <iostream>
using namespace std;
string Price(double x, bool y)
{
    string res;
    if (x < 0.50 || x > 3.00)
    {
        cout << "Chiều cao không đúng";
    }
    if (y == true)
    {
        if (x < 1.00)
        {
            res = "Miễn phí";
        }
        else
            res = "100.000VND";
    }
    else
    {
        if (x < 1.00)
        {
            res = "Miễn phí";
        }
        else if (x < 1.30)
        {
            res = "120.000VND";
        }
        else
            res = "200.000VND";
    }
    return res;
}
int main()
{

    /*
    Bo du lieu:
    (0.00, true),(0.90, true),(1.50, true),
    (0.90, false),(1.20, false), (1.50, false)
    */
    double x[6] = {0.00, 0.90, 1.50, 0.90, 1.20, 1.50};
    bool y[6] = {true, true, true, false, false, false};
    for (int i = 0; i < 6; i++)
    {
        cout << Price(x[i], y[i]) << endl;
    }
    return 0;
}

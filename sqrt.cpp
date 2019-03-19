#include <stdio.h>

using namespace std;

double square_root(double S, int times);

int main()
{
    square_root(9, 3);
}

double square_root(double S, int times)
{
    double x0 = S/2;
    double x = (x0 + S/x0)/2;
    double xn;
    while (times > 0)
    {
        xn = (x + S/x)/2;
        x = xn;
        times--;
    }
    printf("%f", xn);
    return xn;
}

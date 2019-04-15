#include <stdio.h>
using namespace std;
//днес отсъствах, затова показвам двата метода, които знам
#ifndef FirstOption
//първи метод

int count(int a) 
{
    a++;
    return a;
}
int main ()
{
    int a = 0;
    for (int i = 0; i < 3; i++)
    {
        a = count(a);
        printf("%d\n", a);
    } 
}
#else
//втори метод
int arithmetic_function(int &a)
{
    a++;
    return a;
}
int main ()
{
    int a = 0;
    printf("%d\n", count(a)); 
    printf("%d\n", count(a)); 
    printf("%d\n", count(a)); 
}
#endif

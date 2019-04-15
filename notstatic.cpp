#include <stdio.h>
using namespace std;
int num = 0;
int count ()
{
    num++;
    return num;
}
int main ()
{
    printf("%d\n", count());
    printf("%d\n", count());
    printf("%d\n", count());
}

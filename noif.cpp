#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int op = 1;
    while (op <= 20)
    {
        bool a = op % 3;
        switch(a)
        {
            case 0 : for (; op % 5 == 0;)
                    {
                        goto die;
                    }
                    printf("fizz\n");
                    break;
            case 1 : for (; op % 5 == 0;)
                    {
                        goto hell;
                    }
                    printf("%d\n", op);
                    break;
            hell : printf("buzz\n");
            break;  
            die : printf("fizzbuzz\n");
            break; 
        } 
        op++;
    }
}
#include <stdio.h>

int secondToMax(int *arrayFirstElement, int size)
{
    int max = *arrayFirstElement;
    int secondToMax = *arrayFirstElement;
    for (int i = 0; i < size; i++)
    {
        if (max < arrayFirstElement[i])
        {
            max = arrayFirstElement[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (secondToMax < arrayFirstElement[i] && arrayFirstElement[i] < max)
        {
            secondToMax = arrayFirstElement[i];
        }
    }
    return secondToMax;
}

void main()
{
    int arr[] = {0,5,10,150,15,2,4,8,16,165};
    int size = sizeof(arr)/sizeof(int);
    printf("%d", secondToMax(arr, size));
}
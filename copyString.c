#include <stdio.h>

void copy(char *p, char *p2)
{
    while (*p != '\0')
    {
        *p2 = *p;
        p++;
        p2++;
    }
    *p2 = '\0';
}

void main()
{
    char str1[] = "hello!AsDf/\0/0/0";
    char str2[sizeof(str1)];
    copy(str1, str2);
    printf("%s\n%s", str1, str2);
}
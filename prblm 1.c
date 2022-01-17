#include <stdio.h>

int main()
{
    char a[6];
    int b;
    printf("Enter six letters\n");
    scanf("%s",a);
    b=a[5]+1;
    printf("%c",b);
    for(int i=5;i>0;i--)
    {
        printf("%c",a[i]);
    }

    return 0;
}

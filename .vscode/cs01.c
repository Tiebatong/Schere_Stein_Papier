#include <stdio.h>

int main(void)
{
    int x;
    int y;
    
    printf("enter a number: \n");
    scanf("%d", &x);
    printf("enter another number: \n");
    scanf("%d", &y);

    if (x < y)
    {
        printf("%d is smaller than %d. \n",x,y);
    }
    else if (x > y)
    {
        printf("%d is greater than %d. \n",x,y);
    }
    else 
    {
        printf("%d is equal to %d. \n",x,y);
    }

    system("pause");
    return 0;
}
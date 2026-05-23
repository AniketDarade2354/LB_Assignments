// Program which accept number from user and print numbers till that number.
#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        return;
    }

    for(iCnt = 1; iCnt <= iNo;iCnt++)
    {
        printf("%d ",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
// Row      4
// Columns  4

/*
        *   *   *   *
        *   *   *   *
        *   *   *   *
        *   *   *   *
        *   *   *   *

*/
#include <stdio.h>

void Display(int iRow, int iCol)   // N^2
{
    int i = 0, j = 0;

    if(iRow < 0)
    {
        iRow = -iRow;
    }
    if(iCol < 0)
    {
        iCol = -iCol;
    }
    //    1       2       3      
    for(i = 1; i<= iRow; i++)   // Outer
    {
        //    1         2       3
        for(j = 1; j <= iCol; j++)  // Inner  4 of Outer
        {
            printf("*\t");      // 4 of Inner
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns \n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;
}
#include<stdio.h>

int main()
{
    int iNo1 = 0, iNo2 = 0;

    printf("Enter first number : \n");
    scanf("%d",&iNo1);

    printf("Enter second number : \n");
    scanf("%d",&iNo2);

    printf("First number is : %d\n",iNo1);
    printf("Second number is : %d\n",iNo2);
    
    return 0;
}
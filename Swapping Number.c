#include<stdio.h>
void main()
{
    int fno, sno;
    printf("\n\n swapping of 2 numbers");
    printf("\n\n Enter the First Number = ");
    scanf("%d",&fno);
    printf("\n\n Enter the Second Number = ");
    scanf("%d",&sno);
    printf("\n\n Before swapping FNO = %d and SNO = %d", fno,sno);

    fno = sno;
    sno = fno;

    printf("\n\n After swapping FNO = %d and SNO = %d",fno,sno);
}


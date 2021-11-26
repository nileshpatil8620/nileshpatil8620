#include<stdio.h>
#include<conio.h>
void main()
{
    int k = 0, l = 1, sum = 11; 
		printf("\n\n Program For fibonacci series ");
		printf("\n\n%d",k);
		printf("\t%d",l);
		while(k<34)
		{
		  sum = k + l ;
		  printf("\t%d",sum);
		  k=l;
		  l=sum;
     	}

}



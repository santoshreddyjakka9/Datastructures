#include <stdio.h>
#include <stdlib.h>
int* larger(int*, int*);

int  main(void)
{
    int a ;
    int b ;
    int *p;
    printf("Please enter 2 nembers \n");
    scanf("%d%d",&a,&b);
    p = larger(&a, &b);
    printf("%d is larger\n",*p);
}

int* larger(int *x, int *y)
{
    if(*x > *y)
    {
        return x;}
	else if(*x < *y)
	 return y;
    else if (*x = *y)
    {
	 printf("Both are equal\n");
	 
	 exit(0);  
	 return 0;
	}
	
    
}

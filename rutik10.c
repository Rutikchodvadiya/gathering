#include<stdio.h>
main()
{
	int n; 
	printf("enter apositive integer");
	scanf("%d",&n);
	printf("factorial of %d = %ld");
	return 0;
}
    
    int multiplyNumbers(int n)
    {
	
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
    }
    

#include<stdio.h>
main()
{
	int a[5]={1,2,3,4,5};
	int i,s=0;
	for(i=0;i<5;i++)
	{
		s+=a[i];
	}
	printf("sum:%d",s);
}

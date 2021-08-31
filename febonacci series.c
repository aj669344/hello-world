#include<stdio.h>
void main()
{
	int a,n1=0,n2=1,n3,i;
	printf("please enter the number of terms you want ");
	scanf("%d",&a);
	printf("%d %d ",n1,n2);
	for(i=2;i<a;i++)
	{
		n3=n1+n2;
		printf(" %d ",n3);
		n1=n2;
		n2=n3;
	}
}

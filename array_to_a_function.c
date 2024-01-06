#include<stdio.h>

void main()
{
	int size,i,j,x;
	printf("enter the size of an array : ");
	scanf("%d",&size);
	int a[size];
	printf("sum is equal : ");
	scanf("%d",&x);
	int totalpair=0;
	printf("Enter the Element of Array : \n");
	for(i=0;i<=size-1;i++)
		{
	   scanf("%d",&a[i]);
	   }
	for(i=0;i<=size-1;i++){
    	for(j=i+1;j<=size-1;j++){
	    	if(a[i]+a[j]==x)
		    	totalpair++;
	 }
	}
	printf("\ntotal pair whose sum is %d is %d",x,totalpair);
}

/*
Time complexity of linear search algorithm -
Base Case - O(1)
Average Case - O(n)
Worst Case -O(n)*/
#include<stdio.h>
int main()
{
	int n,i,data,found=0;
	printf("Enter the  umber of elements in  the array: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the %d element: ",(i+1));
		scanf("%d",&a[i]);
	}
	printf("Enter the number to be searched: ");
	scanf("%d",&data);
	for(i=0;i<n;i++)
	{
		if(a[i]==data)
		{
			printf("%d is present at location %d.\n",data,i+1);
			found=1;
			break;
		}
	}
	if(found==0)
		{
			printf("%d isn't present in the array.\n",data);
		}
		return 0;
}

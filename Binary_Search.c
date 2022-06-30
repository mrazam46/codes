//Binary search
#include<stdio.h>
int main()
{
	int c,first,last,middle,n,i,data;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++)
	{
		printf("Enter the %d element: ",(i+1));
		scanf("%d",&a[i]);
	}
	printf("Enter the number to be searched: ");
	scanf("%d",&data);
	first=0;
	last=n-1;
	middle=(first+last)/2;
	
	while(first<=last){
		if(a[middle]<data)
			first=middle+1;
		else if (a[middle]==data){
			printf("%d found at location %d.\n",data,middle+1);
			break;
		}
		else
			last=middle-1;
		middle=(first+last)/2;
	}
	if (first>last)
		printf("Not found! %d isn't present in the list.\n",data);
	return 0;
	
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[5],b[5],c[10],i,j,k,n,m;
	printf("enter the limit of first array\n");
   	scanf("%d",&n);
   	printf("enter the sorted elements\n");
   	for(i=0;i<n;i++)
     	{  
     		scanf("%d",&a[i]);
     	}
   	printf("enter the limit of second array\n");
   	scanf("%d",&m);
   	printf("enter the sorted elements\n");
   	for(i=0;i<m;i++)
      	{  
       	scanf("%d",&b[i]);
      	}
   	i=0;
   	j=0;
   	while(i<n&&j<m)
    	{
      		if(a[i]<b[j])
         	{
          		c[k]=a[i];
          		i++;
         	}
         	else
            	{
             		c[k]=b[j];
             		j++;
             	}
          	k++;
    	}  
      	if(i>=n)
      	{
       	while(j<m)
       	{
         		c[k]=b[j];
          		j++;
          		k++;
        	}
      	}
     	if(j>=m)
       {
      		while(i<n)
          	{
           		c[k]=a[i];
           		i++;
           		k++;
          	}
      	}
 	printf("\n merged array is :");
    	for(k=0;k<(n+m);k++)
     	{
     		printf("\n%d\t",c[k]);
     	}
}           
 

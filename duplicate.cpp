#include<stdio.h>
#include<stdlib.h>
	
	int main()
		{
				int *a,*b,i,j,n,k,flag=0,dup=0;
				printf("\nEnter size of array:");
				scanf("%d",&n);
				a=(int*)malloc(n*sizeof(int));
				b=(int*)malloc(n*sizeof(int));
				printf("\nEnter elements in array:");
				for(i=0;i<n;i++)
					{
						printf("\nA[%d]:",i);
						scanf("%d",&a[i]);
					}
				for(i=0;i<n;i++)
					{
						flag=0;
						dup=0;
						for(j=i+1;j<n;j++)
						{
							if(a[i]==a[j])
							dup=1;
						}
						for(k=0;k<i;k++)
						{
							if(a[i]==b[k])
							flag=1;
						}
						if(flag!=1&&dup==1)
						{
								printf("\nFound duplicate element of %d at position:",a[i]);
								for(j=i+1;j<n;j++)
								{
								if(a[i]==a[j])
								printf(" %d",j);	
								b[i]=a[i];
								
								}
						}
					}
			}
			
		
		
		

#include<stdio.h>
 
void sort(int a[],int n)
{
    int gap,i,j,k,temp;
    for(gap=n/2;gap>0;gap/=2)
    {
        for(i=gap;i<n;i+=1)
        {
            temp=a[i];
            
            for(j=i;j>=gap&&a[j-gap]>temp;j-=gap)
                a[j]=a[j-gap];
            
            a[j]=temp;
        }
        for(k=0;k<n;k++)
        	printf("%d ",a[k]);
        printf("\n");
    }
}
 
int main()
{
    int a[20],i,n;
    
    printf("Enter number of elements:");
    scanf("%d",&n);
        
    for(i=0;i<n;i++){
        printf("Enter %d element:",i+1);
	    scanf("%d",&a[i]);
	}
    sort(a,n);
 
    printf("\nArray after shell sort:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
 
    return 0;
}

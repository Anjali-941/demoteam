#include<stdio.h>
void sort(int *,int);
void main()
  {
    int a[15],i,j,n,x;
    printf("enter the array limit");
    scanf("%d",&n);
    printf("enter the array");
    for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }
       
    sort(n,a);
}
void sort(int *a[],int n)
{
int i,j,x;
 for(i=0;i<n;i++)
          {
            for(j=i+1;j<n;j++)
              {
                if(*a[i]>*a[j])
                 {
                x=*a[i];
                *a[i]=*a[j];
                *a[j]=x;
                 }
              }
          }
        printf("\n the ascending order is");
        for(i=0;i<n;i++)
      {
        printf("\n %d",*a[i]);
      }
          
  }         

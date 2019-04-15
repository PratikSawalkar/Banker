#include<unistd.h>
#include<stdio.h>
int main()
{
 int n;    //n number of process
 int r;      // number of resources
 int i,j,k,cnt,cntt;
 int avail[10],p[10];
 int need[10][10],alloc[10][10],max[10][10];

 printf("\nEnter number of process :");
 scanf("%d",&n);
 printf("\n Enter  resources available : ");
 scanf("%d",&r);
 printf("\nEnter insatnces for resources :\n");
 for(i=0;i<r;i++)
 {  printf("R%d ",i+1);
  scanf("%d",&avail[i]);
  }
 printf("\n Enter allocation matrix  \n");
 for(i=0;i<n;i++)
 {
 printf("p%d",i+1);          p[i]=0;
 for(j=0;j<r;j++)
 {
  scanf("%d",&alloc[i][j]);
 }
}
}

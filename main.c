#include <stdio.h>
int main()
{
 int n,j,i,ck=1;
 printf("Enter Number : ");
 scanf("%d",&n);
 for(i=2;i<n;i++)
 {
 if(n%i==0)
 {
 printf("Not Prime Number !!!\n");
 ck=2;
 break;
 }
 }
 if(n>=0&&n!=1) {
 if(ck==1) { 
 printf("\n");
 
 for(j=1;j<=12;j++)
 {
 printf("%d X %d = %d \n",n,j,n*j);
 }
 }
 }
 
 else if (n==1) printf("Not Prime Number !!!");
 
 return 0;
}
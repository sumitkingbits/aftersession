#include <stdio.h>
int main(){
	
    printf("Conversion of Decimal to Binary\n");
   int N,i,p,k; int x=0;
   scanf("%d",&N);
   for(i=1,k=1;N>0;k=k*10,N=N/2){p=(N%2);
   					 x=x+ k*p;
   					 
   								}
   	printf("%d",x);
	return 0;
}

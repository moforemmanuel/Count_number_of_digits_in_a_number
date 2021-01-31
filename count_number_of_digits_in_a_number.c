#include <stdio.h>
#include <stdlib.h>

int main(){
	int num,n,count=0,part;
	printf("Enter a number : \n");
	scanf("%d",&num);
	n=num;
	
		do{
		part=n/10;
		count++;
		n/=10;
	}while(n>0);
		
	printf("%d contains %d digits.\n",num,count);
	printf("\n");
}

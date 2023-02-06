#include<stdio.h>
main(){
	
	int i,n,sum = 0;
	
	printf("ENTER VALUE : ");
	scanf("%d",&n);
	
	for( i = 1 ; n>=i ; n--){
		
		sum = sum + n;
		
	}	
	printf("%d",sum);
	
}

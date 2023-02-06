#include<stdio.h>
main(){
	
	int i,n,fact = 1;
	
	printf("ENTER VALUE : ");
	scanf("%d",&n);
	
	for( i = 1 ; n>=i ; n--){
		
		fact = fact * n;
		
		
		
	}	
	printf("%d",fact);
	
}
	
	


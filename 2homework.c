#include <stdio.h>

int main () {

	int a = 0;
	int i = 2;
	int b = 0;
        int bi =2;
	int c =0;
	int ci =2;
	int ii = 0;

	printf("Please enter first number\n");
	scanf("%d",&a);

	printf("Please enter your second number\n");
	scanf("%d", &b);

	printf("Please enter your third number\n");
	scanf("%d",&c);

	for (i > 0; i <= a; i++){
		if(a % i ==0){ 
		printf("firt==%d\n",i);
		}
	}

	for(bi > 0; bi <= b; bi++ ){
		if(b % bi == 0){
	
		printf("Second==%d\n",bi);
		}	
	}

	for(ci > 0; ci <= c; ci++){
		if(c % ci == 0){
		printf("The third = %d\n", ci);
		}
	}












}



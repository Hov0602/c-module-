#include <stdio.h>
int main ()
{

int year = 0;

do {
	printf("Please enter year \n");
	scanf("%d",&year);

}
	while(year <= 0 || year >= 2023);
	if (year % 4 == 0){
		printf("Nahanj tari\n");
}else {
	printf("Nahanj tari che \n");
	}

printf("Thanks \n");

}


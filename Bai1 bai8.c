#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x, y;
	
	printf("Enter a number less than 2000 or bigger than 3000: ");
	scanf("%d", &x);
	printf("and a number from 100 to 500: ");
	scanf("%d", &y);
	
	if (x < 2000 || x > 3000){
		printf("Congratulation, this is X :)");
	}else 
	printf("Oops there is no X :)))");
	
	if (y >= 100 && y <= 500){
		printf("\nNOICE! You got an Y.");
	}else 
	printf("\nWhat are you waitting for?? Nothing here :)");
	
	return 0;
}

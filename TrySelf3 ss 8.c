#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c, max;
	
	printf("Enter the 1st number: ");
	scanf("%d", &a);
	printf("Enter the 2nd number: ");
	scanf("%d", &b);
	printf("Enter the 3rd number: ");
	scanf("%d", &c);
	
	max = a; 
	if (max < b){
		max = b;
	} else if (max < c){
		max = c;
	} 
	
	printf("The highest number is: %d", max);
	
	return 0;
}

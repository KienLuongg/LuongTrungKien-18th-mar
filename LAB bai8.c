#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float m1, m2, m3, per;
	
	printf("Enter your 1st points : ");
	scanf("%f", &m1);
	printf("\nEnter your 2nd points : ");
	scanf("%f", &m2);
	printf("\nEnter your 3rd points : ");
	scanf("%f", &m3);
	
	per = (m1 + m2 + m3)/3;
	if (per >= 90){
		printf("You are brilliant, grade E+");
	} else if (per < 90 && per >=80){
		printf("SO CLOSE! TRY, grade E");
	} else if (per <80 && per >=70){
		printf("LOL hah lewlew, grade A+");
	} else if (per <70 && per >=60){
		printf("HAZ! grade A");
	} else if (per <60 && per >=50){
		printf("BACK TO YOUR CLASS NOW! , grade B");
	} else 
	printf("GET OFF!!!");
	
	return 0;
}

// Print A

#include <stdio.h>

char printChar(){
	
	char c1;
	char c2;

	c1 = 'A';
	c2 = 'a';

	printf("Print the value of A : %c\n", c1);
	printf("Print the numeric value of a : %c\n", c2);
	return 0;
}

char printCharValue(){
	
	char c3;
	char c4;

	c3 = 65;
	c4 = 97;

	printf("Print the value of A : %c\n", c3);
	printf("Print the numeric value of a : %c\n", c4);
	return 0;
}




int main(){
	char printA = printChar;
	char printB = printCharValue;

	printf("Those are the functions %c.\n", printA);
	print("Those are the functions %c.\n",printB);	
					
	return 0;
}


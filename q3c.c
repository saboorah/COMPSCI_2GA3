#include <stdio.h>
#include <stdlib.h>


void signedORtwo() {

	//test val
	int num = -3;

	//create a byte array


	//convert to hex
	char *hex = (char*) malloc(sizeof(num));
	//char hex[4];
	sprintf(hex, "%x", num);

	int len = sizeof(hex);

	//////////////////////////////////////////printf("\n%c",hex[len]);

	if (hex[len - 1] == 'd') {

		printf("\nTwo's Complement\n");


	} else {

		printf("\nSigned Magnitude\n");

	}



	//



}



int main (void) {


	signedORtwo();





}

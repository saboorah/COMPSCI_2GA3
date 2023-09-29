#include <stdio.h>
#include <stdlib.h>


int main (void) {


        char arr[8]; //at least 8 bytes of memory

	int* intPtr = arr; //arr pointer as int pointer

	*intPtr = 0x04030201; //store hex val


	//print array
	printf("\n");

	for ( int i = 0; i < 8; i++) {

		printf("%d, ", arr[i]);


	}

	printf("\n");



}





/* ----------------------OUTPUT--------------------

1, 2, 3, 4, 0, 0, 0, 0,

this is stored in little edian order as it starts with the least significant digits

*/


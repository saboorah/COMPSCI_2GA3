#include <stdio.h>
#include <stdlib.h>


int main (void) {


        int arr[8]; //at least 8 bytes of memory

	int* intPtr = &arr[0]; //arr pointer as int pointer

	*intPtr = 0x04030201; //store hex val


	//print array
	printf("\n");

	for ( int i = 0; i < 8; i++) {

		printf("%d, ", intPtr[i]);


	}

	printf("\n");



}





/* ----------------------OUTPUT--------------------

67305985, 0, 529267711, 0, -530476040, 32767, 100, 0,

this is stored in big edian order as it starts with the most significant digits

*/


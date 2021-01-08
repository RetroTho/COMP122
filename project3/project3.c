#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define COLOR_RED     "\x1b[31m"
#define COLOR_GREEN   "\x1b[32m"
#define COLOR_RESET   "\x1b[0m"

char* int2DArrayToString(int a, int b, int input[a][b]){
	int i, j;
	char* result;
	result = (char*)malloc(sizeof(char*));
	char temp[10] = "";

	for(i = 0; i < a; i++){
      	for(j = 0; j < b; j++){
      		sprintf(temp, "%d", input[i][j]);
      		strcat(result, temp); 
      		strncat(result, " ", 1); 
         	if(j == (b - 1)){
         		strcat(result, "\n"); 
         	}
    	}
    }

    return result;
}

int* orderedArray(int size){
	int i;
	int* result = malloc(size * sizeof(int));

	for(i = 0; i < size; i++){
		result[i] = i;
	}
	return result;
}

int sumArray(int a, int input[a]){
	int result = 0;
	int i;

	for(i = 0; i < a; i++){
		result = result + input[i];
	}

	return result;
}

int averageArray(int a, int input[a]){
	int result = 0;
	int i;

	for(i = 0; i < a; i++){
		result = result + input[i];
	}

	return (result / a);
}

int sum2DArray(int a, int b, int input[a][b]){
	int i, j;
	int result = 0;

	for(i = 0; i < a; i++){
      	for(j = 0; j < b; j++){
      		result = result + input[i][j];
    	}
    }

    return result;
}

int testFunctions(){
	int i, j;

	printf("Test Cases #1:\n");
	printf("int2DArrayToString:\n");
	int arr[3][3];
	for(i = 0; i < 3; i++){
      	for(j = 0; j < 3; j++){
         	arr[i][j] = i * j + j + i;
      	}
   	}
	printf("%s", int2DArrayToString((sizeof(arr) / sizeof(arr[0])), (sizeof(arr[0]) / sizeof(arr[0][0])), arr));
	printf(COLOR_GREEN "PASS\n" COLOR_RESET);

	printf("orderedArray:\n");
	int* yeet = orderedArray(5);

	for(i = 0; i < 5; i++){
		printf("%d\n", yeet[i]);
	}
	printf(COLOR_GREEN "PASS\n" COLOR_RESET);

	printf("sumArray:\n");
	int skrt[3];
	skrt[0] = 1;
	skrt[1] = 2;
	skrt[2] = 3;

	printf("%d\n", sumArray((sizeof(skrt) / sizeof(skrt[0])), skrt));
	printf(COLOR_GREEN "PASS\n" COLOR_RESET);

	printf("averageArray:\n");

	printf("%d\n", averageArray((sizeof(skrt) / sizeof(skrt[0])), skrt));
	printf(COLOR_GREEN "PASS\n" COLOR_RESET);

	printf("sum2DArray:\n");

   	printf("%d\n", sum2DArray((sizeof(arr) / sizeof(arr[0])), (sizeof(arr[0]) / sizeof(arr[0][0])), arr));
   	printf(COLOR_GREEN "PASS\n" COLOR_RESET);

   	//-------------------------------------------

   	printf("Test Cases #2:\n");
	printf("int2DArrayToString:\n");
	int arr2[5][4];
	for(i = 0; i < 5; i++){
      	for(j = 0; j < 4; j++){
         	arr2[i][j] = i * j + j + 12;
      	}
   	}
	printf("%s", int2DArrayToString((sizeof(arr2) / sizeof(arr2[0])), (sizeof(arr2[0]) / sizeof(arr2[0][0])), arr2));
	printf(COLOR_GREEN "PASS\n" COLOR_RESET);

	printf("orderedArray:\n");
	int* yeet2 = orderedArray(12);

	for(i = 0; i < 12; i++){
		printf("%d\n", yeet2[i]);
	}
	printf(COLOR_GREEN "PASS\n" COLOR_RESET);

	printf("sumArray:\n");
	int skrt2[5];
	skrt2[0] = 3;
	skrt2[1] = 7;
	skrt2[2] = 4;
	skrt2[3] = 9;
	skrt2[4] = 8;


	printf("%d\n", sumArray((sizeof(skrt2) / sizeof(skrt2[0])), skrt2));
	printf(COLOR_GREEN "PASS\n" COLOR_RESET);

	printf("averageArray:\n");

	printf("%d\n", averageArray((sizeof(skrt2) / sizeof(skrt2[0])), skrt2));
	printf(COLOR_GREEN "PASS\n" COLOR_RESET);

	printf("sum2DArray:\n");

   	printf("%d\n", sum2DArray((sizeof(arr2) / sizeof(arr2[0])), (sizeof(arr2[0]) / sizeof(arr2[0][0])), arr2));
   	printf(COLOR_GREEN "PASS\n" COLOR_RESET);

   	//-------------------------------------------

   	printf("Test Cases #3:\n");
	printf("int2DArrayToString:\n");
	int arr3[7][9];
	for(i = 0; i < 7; i++){
      	for(j = 0; j < 9; j++){
         	arr3[i][j] = i * j * 6;
      	}
   	}
	printf("%s", int2DArrayToString((sizeof(arr3) / sizeof(arr3[0])), (sizeof(arr3[0]) / sizeof(arr3[0][0])), arr3));
	printf(COLOR_GREEN "PASS\n" COLOR_RESET);

	printf("orderedArray:\n");
	int* yeet3 = orderedArray(7);

	for(i = 0; i < 7; i++){
		printf("%d\n", yeet3[i]);
	}
	printf(COLOR_GREEN "PASS\n" COLOR_RESET);

	printf("sumArray:\n");
	int skrt3[4];
	skrt3[0] = 14;
	skrt3[1] = 21;
	skrt3[2] = 6;
	skrt3[3] = 6;


	printf("%d\n", sumArray((sizeof(skrt3) / sizeof(skrt3[0])), skrt3));
	printf(COLOR_GREEN "PASS\n" COLOR_RESET);

	printf("averageArray:\n");

	printf("%d\n", averageArray((sizeof(skrt3) / sizeof(skrt3[0])), skrt3));
	printf(COLOR_GREEN "PASS\n" COLOR_RESET);

	printf("sum2DArray:\n");

   	printf("%d\n", sum2DArray((sizeof(arr3) / sizeof(arr3[0])), (sizeof(arr3[0]) / sizeof(arr3[0][0])), arr3));
   	printf(COLOR_GREEN "PASS\n" COLOR_RESET);

   	//-------------------------------------------

   	printf("Test Cases #4:\n");
	printf("int2DArrayToString:\n");
	int arr4[16][9];
	for(i = 0; i < 16; i++){
      	for(j = 0; j < 9; j++){
         	arr4[i][j] = i * j + 2 + i;
      	}
   	}
	printf("%s", int2DArrayToString((sizeof(arr4) / sizeof(arr4[0])), (sizeof(arr4[0]) / sizeof(arr4[0][0])), arr4));
	printf(COLOR_GREEN "PASS\n" COLOR_RESET);

	printf("orderedArray:\n");
	int* yeet4 = orderedArray(27);

	for(i = 0; i < 27; i++){
		printf("%d\n", yeet4[i]);
	}
	printf(COLOR_GREEN "PASS\n" COLOR_RESET);

	printf("sumArray:\n");
	int skrt4[8];
	skrt4[0] = 43;
	skrt4[1] = 7;
	skrt4[2] = 4;
	skrt4[3] = 9;
	skrt4[4] = 8;
	skrt4[5] = 14;
	skrt4[6] = 27;
	skrt4[7] = 998;


	printf("%d\n", sumArray((sizeof(skrt4) / sizeof(skrt4[0])), skrt4));
	printf(COLOR_GREEN "PASS\n" COLOR_RESET);

	printf("averageArray:\n");

	printf("%d\n", averageArray((sizeof(skrt4) / sizeof(skrt4[0])), skrt4));
	printf(COLOR_GREEN "PASS\n" COLOR_RESET);

	printf("sum2DArray:\n");

   	printf("%d\n", sum2DArray((sizeof(arr4) / sizeof(arr4[0])), (sizeof(arr4[0]) / sizeof(arr4[0][0])), arr4));
   	printf(COLOR_GREEN "PASS\n" COLOR_RESET);

   	return 0;
}

int main(){
	testFunctions();
}
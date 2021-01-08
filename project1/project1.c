#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

int PromptUserInput(){
	int result;
	printf("\nEnter a decimal number to convert: ");
	scanf("%d", &result);
	return result;
}

char* decimalToOctal(int input){
	char* result;
	result = (char*)malloc(sizeof(char) * (int)(log10(input)/log10(8) + 1));
	sprintf(result, "%o", input);
	return result;
}

char* decimalToHex(int input){
	char* result;
	result = (char*)malloc(sizeof(char) * (int)(log10(input) / log10(16) + 1));
	sprintf(result, "%x", input);
	return result;
}

long decToBin(long input){
	if(input == 0){
        return 0;  
	}
    else{
    	printf("%ld\n", input);
        return (input % 2 + 10 * decToBin(input / 2));
    }
}

char* decimalToBinary(int input){
	char* str;
	str = (char*)malloc(sizeof(long));
	sprintf(str, "%ld", decToBin(input));
	return str;
}

void PrintResult(int input){
	char* octal;
	char* hex;
	char* binary;

	octal = decimalToOctal(input);
	hex = decimalToHex(input);
	binary = decimalToBinary(input);

	printf("The decimal %d in octal is: %s\n", input, octal);
	printf("The decimal %d in hex is: %s\n", input, hex);
	printf("The decimal %d in binary is: %s\n", input, binary);

	free(octal);
	free(hex);
	free(binary);
}

int main(int argc, char* argv[]){
	int input;

	if(argc < 2){
		input = PromptUserInput();
	}
	else{
		input = (int)strtol(argv[1], NULL, 10);
	}
	PrintResult(input);
	return 0;
}
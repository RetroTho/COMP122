#include <stdio.h> 
#include <stdlib.h>
  
int main(int argc, char* argv[]){ 
    FILE *file;
    char currChar;

    if(argc < 2){
        char fname[100]; 
        printf("Enter the filename to open \n"); 
        scanf("%s", fname);
        file = fopen(fname, "r"); 
    }
    else{
        file = fopen(argv[1], "r");
    }

    if(file == NULL){ 
        printf("File not found \n"); 
        exit(0); 
    } 
 
    currChar = fgetc(file); 
    int lineCount = 1;
    printf("%d) ", lineCount);
    while(currChar != EOF){
        if(currChar == '\n'){
            printf("%c", currChar); 
            lineCount += 1;
            printf("%d) ", lineCount);
        }
        else{
            printf("%c", currChar); 
        }
        currChar = fgetc(file); 
    } 
    printf("\n");
  
    fclose(file); 
    return 0; 
}
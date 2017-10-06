#include <stdio.h>
#include <stdlib.h>

typedef unsigned short u_short;
typedef unsigned int u_int32;
typedef unsigned long u_int64;

//Returns a running total of bytes in a file
u_int64 getCode(char* buffer, int count){
    int c;
    FILE *file;
    file = fopen(buffer, "r");
    if(file){
        //File was found
        while((c = getc(file)) != EOF){
            count = count+1;
        }
        fclose(file);
    }
    else{
        //End the program
        printf("File not found, ya dingus.\n");
        exit(1);
    }
    return count;
}

void testValidity(){
    
}

int main(){
    //Get file name
    char fileName[256];
    printf("Enter filename:\n");
    scanf("%s", fileName);
    int count = 0;
    long byteCount = getCode(fileName, count);
    //Print the byte count
    printf("%ld\n", byteCount);
    return 0;
}

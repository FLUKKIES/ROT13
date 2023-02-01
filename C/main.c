#include <stdio.h>
#include <stdlib.h>

char* ROT13(char *arr, int size){
    int i = 0;
    char* new_arr = (char *)malloc(size+1);
    for(i = 0; i < size+1;  i++){
        if(arr[i] >= 'A' && arr[i] <= 'Z'){
            new_arr[i] = arr[i] + 'a' - 'A';
        }else if(arr[i] >= 'a' && arr[i] <= 'z'){
            new_arr[i] = arr[i] + 'A' - 'a';
        }else{
            new_arr[i] = arr[i];
        }
    }
    new_arr[i+1] = '\0';
    return new_arr;
}

int main(){
    int size;
    printf("Please input size of string: ");
    scanf("%d", &size);
    if(size <= 0){
        exit(0);
    }
    fflush(stdin);
    char arr[size+1];
    fgets(arr, size+1, stdin);
    fflush(stdin);
    printf("Before encoded by ROT13 : %s\n", arr);
    char *string = ROT13(arr, size+1);
    printf("After encoded by ROT13  : %s", string);
    return 0;
}
#include<stdio.h>

int main(){

    int input;

    printf("\033[31mEnter a Value\033[0m : ");
    scanf("%d",&input);


    for(int row = 0; row <= input; row++){

        for(int col = 0; col <= input; col++){

            printf("\033[32m#\033[0m",col);

        }

            printf("\n");
    }


    return 0;



}

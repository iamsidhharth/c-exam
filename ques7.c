#include<stdio.h>
void main(){
    int n = 5;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<=i;j++){
            printf("%d",i*i*i);
        }
        printf("\n");
    }
}
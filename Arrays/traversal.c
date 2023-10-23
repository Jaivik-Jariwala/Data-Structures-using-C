// Write a program to read and display n numbers using an array.
#include <stdio.h>
#include <conio.h>
int main(){
    int i, n, arr[16];
    clrscr();
    printf("enter the number of elements in array \n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\n enter element arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n the array elements are ");
    for(i=0; i<n;i++){
    printf("%d\t",arr[i]);
    }
    return 0;
}
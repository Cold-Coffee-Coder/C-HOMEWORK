/*PRINT THE PATTERN AS FOLLOWS
1
2 3
4 5 6
7 8 9 10
*/

#include<stdio.h>

int main(){
    int n,i,j,num=1;
    printf("Number of lines : ");
    scanf("%d",&n);
    for (i=1;i<n+1;i++){
        for (j=1;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}
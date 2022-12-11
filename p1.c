#include<stdio.h>
int main(){
    int x=100;
    for(int j=31;j>=0;j--)
    printf("%d",(x>>j)&1);
    printf("\n");
}

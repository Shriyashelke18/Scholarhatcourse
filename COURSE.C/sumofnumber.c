#include <stdio.h>
int main() {
    int n,i;
    float num,sum=0;
    printf("Enter how many numbers:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Enter number %d:",i);
        scanf("%f",&num);
        sum=sum+num;
    }
    printf("Sum of all numbers=%.2f\n",sum);
    return 0;
}
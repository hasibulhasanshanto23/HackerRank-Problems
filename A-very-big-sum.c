#include<stdio.h>
int main(){
    int n,i;
    long long int sum=0,elements;
    scanf("%d",&n);
    for(i=0; i<n; i++){
         scanf("%lld",&elements);
         sum+=elements;
    }
    printf("%lld",sum);
    return 0;
}
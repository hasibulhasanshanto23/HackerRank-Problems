#include<stdio.h>
int simpleArraySum(arrSize){
    int ele,sum=0,i;
    for(i=0; i<arrSize; i++){
        scanf("%d",&ele);
         sum=sum+ele;
    }
    return sum;
}
int main(){
    int arrSize,sum;
    scanf("%d",&arrSize);
   int result=simpleArraySum(arrSize);
   printf("%d",result);
    
    return 0;
}
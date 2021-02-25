#include<stdio.h>

int main(){
     int Alice[3],Bob[3];
    int al=0,bo=0;
    int result[2];
    scanf("%d%d%d",&Alice[0],&Alice[1],&Alice[2]);
    scanf("%d%d%d",&Bob[0],&Bob[1],&Bob[2]);
    for (int i = 0; i <3; i++)
    {
       if(Alice[i]>Bob[i]){
        al++;
       }
       else if(Alice[i]<Bob[i]){
         bo++;
       }   
    }
   result[0]=al;
   result[1]=bo;
   printf("%d %d",result[0],result[1]);
   return 0;  
}
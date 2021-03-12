#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main(){
    int n;
    scanf("%d",&n);
    int *score=malloc(sizeof(int)*n);
    for(int i=0; i<n; i++){
        scanf("%d",&score[i]);
    }

    int maxCount=0,minCount=0, maxScore=score[0],minScore=score[0];

    for(int i=1;i<n;i++){
        if(score[i]>maxScore){
            maxScore=score[i];
            maxCount++;
            }
            if(score[i]<minScore){
                minScore=score[i];
                minCount++;
            }
    }
    printf("%d %d\n",maxCount,minCount);
    return 0;
}
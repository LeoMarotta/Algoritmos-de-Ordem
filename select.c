#include <stdio.h>
#include <stdlib.h>

void selectS(int data[], int n){
    int i, j, tmp, min, min_id;
    for (i = 0;i < n-1;i++){
        min = data[i];
        
        for (j = i+1;j < n;j++){
            if (data[j]<min){
                min = data[j];
                min_id = j;
            }
        }
        tmp=data[i];
        data[i] = data[min_id];
        data[min_id] = tmp;
    }
    min_id = i+1;
}

int main(){

    int n=30;
    int data[n];

    printf("\n");

    for (int i = 0; i < n; i++){
        data[i]= rand()%100;
        printf("%d ", data[i]);
    }

    printf("\n\n");

    selectS(data, n);

    for (int i = 0; i < n; i++){
        printf("%d ", data[i]);
    }
    
}


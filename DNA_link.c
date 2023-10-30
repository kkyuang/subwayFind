#include <stdio.h>
#include <string.h>

//DNA 조각 배열
char DNAs[100][51];

int main(){
    //DNA 조각의 개수는?
    int n = 0;
    scanf("%d", &n);
    
    //DNA 조각 입력
    for(int i = 0; i < n; i++){
        scanf("%s", &DNAs[i]);
    }

    //DNA 조각 맞추기
    for(int i = 0; i < n; i++){ //각각의 염기서열에 대해
        char last4base[5] = strcpy();//마지막 4개의 염기는?
        for(int j = 0; j < n; j++){ //각각의 염기서열에 대해
        }
    }
}
#include <stdio.h>
int main(){
    //변수 선언 부분
    
    //입력 부분

    //노선 개수(최대 5개)
    int lineCount = 0;
    scanf("%d", &lineCount);
    //노선별 역 개수(최대 10개)
    int stationCount[5] = {};
    for(int i = 0; i < lineCount; i++){
        scanf("%d ", &stationCount[i]);
    }
    //노선별 역간 소요시간
    int times[5][10] = {}; //--> [0][0]
    for(int i = 0; i < lineCount; i++){
        for(int j = 0; j < stationCount[i]; j++){
            scanf("%d ", &times[i][j]);
        }
    }
}
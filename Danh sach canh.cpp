#include<stdio.h>

int n,m;
int degree[1001] = {0};
int a[1001][1001] = {0};
void sosanhke(){
    scanf("%d%d",&n,&m);
    for(int i = 0; i < m; i++){
        int x,y;
        scanf("%d%d",&x,&y);
        a[x][degree[x]++] = y;
        a[y][degree[y]++] = x;
    }
    for(int i = 1; i <= n; i++){
        printf("%d: ",i);
        for(int j = 0; j < degree[i]; j++){
            printf("%d ",a[i][j]);
        } 
        printf("\n");
      
    }
}
int main(){
    sosanhke();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int n;
int k[128];
int main(){
    srand((unsigned)time(0));
    printf("Input key length(not over 128)\n");
    scanf("%d",&n);
    freopen("D:\\code\\p.txt","w",stdout);
    for(int i=1;i<=10000;i++){
        memset(k,0,sizeof(k));
        printf("%d:",i);
        for(int j=1;j<=n;j++){
            int s=rand()%128;
            char c=s;
            while(s<=32){
                s=rand()%128;
                c=s;
            }
            printf("%c",c);
        }
        printf("\n");
    }
}
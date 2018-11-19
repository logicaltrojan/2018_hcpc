#include <bits/stdc++.h>

using namespace std;

int K;

bool mach(int x){

  int sta = 0;
  for(int i = 1; i <= 33; i++){
    sta = pow(2, i);

    if(sta == x) return false;
  }

  return true;

}
int main(){

  int tc;
  scanf("%d", &tc);

  while(tc--){
    scanf("%d", &K);


    if(!mach(K)) printf("GoHanGang\n");
    else printf("Gazua\n");

  }

}

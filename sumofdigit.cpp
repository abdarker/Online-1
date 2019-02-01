#include<bits/stdc++.h>

int sumof(int x){
    int r,sum=0;

    while(x){
    r= x%10;
    sum= sum+r;
    x=x/10;
}
   return sum;

}

int main(){
    int num,sum;
    scanf("%d",&num);

    if(num<0){
        num=num*-1;
    }
    sum=sumof(num);

    printf("%d",sum);

}

#include<bits/stdc++.h>

void rev(){
    char c;

    scanf("%c",&c);
    if( c != '\n'){
        rev();
        printf("%c",c);
    }

}

int main(){

    rev();

}

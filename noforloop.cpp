#include<bits/stdc++.h>

void noforloop( int arr[],int start,int len){
    if(start>= len){
        return;
    }


    noforloop(arr,start+1,len);
    printf("%d\n",arr[start]);

}


int main(){
    int n,c,array[100],len;

   printf("Enter number of elements\n");

   scanf("%d",&n);

   printf("Enter %d integers\n", n);
   for ( c = 0 ; c < n ; c++ ){
     scanf("%d",&array[c]);
   }


   noforloop(array,0,n);

}

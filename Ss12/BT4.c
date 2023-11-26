#include<stdio.h>
#include<stdbool.h>
bool checkDoiXung1(int n,int arrayOne[]){
	for(int i = 0;i<n/2;i++){
        if(arrayOne[i] != arrayOne[n-i-1]){
		    return false;
    }
    return true;
    }
}
bool checkDoiXung2(int n,int arrayTwo[]){
	for(int i = 0;i<n/2;i++){
        if(arrayTwo[i] != arrayTwo[n-i-1]) return false;
    }
    return true;
}
int main(){
	int n;
	int arrayOne[]={1,2,3,2,1};
	n=(sizeof(arrayOne)/sizeof(int));
	for(int i = 0;i<n;i++){
        printf("%d  ", arrayOne[i]);
    }
    if(checkDoiXung1(n, arrayOne)){
	 printf("\narrayOne la mang doi xung\n");
    }else{
	 printf("\narrayOne khong la mang doi xung\n");
    }
    int arrayTwo[]={'a','n','n','a','a'};
    n=(sizeof(arrayTwo)/sizeof(int));
    for(int i = 0;i<n;i++){
        printf("%d  ", arrayTwo[i]);
    }
    if(checkDoiXung2(n, arrayTwo)){
	 printf("\narrayTwo la mang doi xung");
    }else{
	 printf("\narrayTwo khong la mang doi xung");
    }
}

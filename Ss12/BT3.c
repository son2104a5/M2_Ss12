#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int n,m;
	int p1,p2;
	int count1,count2;
	printf("Nhap so phan tu cua mang thu 1:");
	scanf("%d",&n);
	int a1[n];
	for(int i=0;i<n;i++){
		printf("a1[%d]=",i);
		scanf("%d",&a1[i]);
	}
	for(int i=0;i<n;i++){
		count1=0;
		for(int j=1;j<=a1[i];j++){
			if(a1[i]%j==0){
				count1++;
			}
		}
		if(count1<=2){
			printf("%d\n",a1[i]);
			p1++;
		}
	}
	printf("Nhap so phan tu cua mang thu 2:");
	scanf("%d",&m);
	int a2[m];
	for(int i=0;i<m;i++){
		printf("a2[%d]=",i);
		scanf("%d",&a2[i]);
	}
	for(int i=0;i<m;i++){
		count2=0;
		for(int j=1;j<=a2[i];j++){
			if(a2[i]%j==0){
				count2++;
			}
		}
		if(count2<=2){
			printf("%d\n",a2[i]);
			p2++;
		}
	}
	if(p1>p2){
		printf("mang a1 co nhieu so nguyen to hon");
	}else{
		printf("mang a2 co nhieu so nguyen to hon");
	}
	return 0;
}

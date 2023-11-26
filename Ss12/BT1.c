#include<stdio.h>
int sum1(int a, int b){
	return a+b;
}
int sum2(int a, int c){
	return a+c;
}
int sum3(int c, int b){
	return c+b;
}
int sub1(int a, int b){
	if(a>b){
		return a-b;
	}else{
		return b-a;
	}
}
int sub2(int a, int c){
	if(a>c){
		return a-c;
	}else{
		return c-a;
	}
}
int sub3(int c, int b){
	if(b>c){
		return b-c;
	}else{
		return c-b;
	}
}
int main(){
	int a,b,c;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);
	printf("%d + %d = %d\n",a,b,sum1(a, b));
	if(a>b){
		printf("%d - %d = %d\n",a,b,sub1(a, b));
	}else{
		printf("%d - %d = %d\n",b,a,sub1(a, b));
	}
	printf("%d + %d = %d\n",b,c,sum2(b,c));
	if(b>c){
		printf("%d - %d = %d\n",b,c,sub2(b,c));
	}else{
		printf("%d - %d = %d\n",c,b,sub2(c, b));
	}printf("%d + %d = %d\n",c,a,sum3(a, c));
	if(a>c){
		printf("%d - %d = %d\n",a,c,sub3(a, c));
	}else{
		printf("%d - %d = %d\n",c,a,sub3(a, c));
	}
	return 0;
}

#include<stdio.h>
#include<math.h>
int mul1(int a, int b){
	return a*b;
}
int mul2(int b, int c){
	return b*c;
}
int mul3(int a, int c){
	return a*c;
}
int div1(int a, int b){
	if(a>b){
	    return a/b;
    }else{
    	return b/a;
	}
}
int div2(int b, int c){
	if(b>c){
	    return b/c;
	}else{
		return c/b;
	}
}
int div3(int a, int c){
	if(a>c){
		return a/c;
	}else{
		return c/a;
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
	printf("%d * %d = %d\n",a,b,mul1(a,b));
	if(a%b!=0&&b%a!=0){
		printf("%d khong chia het cho %d\n",a,b);
	}else if(a>b){
		printf("%d / %d = %d\n",a,b,div1(a,b));
	}else{
		printf("%d / %d = %d\n",b,a,div1(a,b));
	}
	printf("%d * %d = %d\n",b,c,mul2(b,c));
	if(c%b!=0&&b%c!=0){
		printf("%d khong chia het cho %d\n",b,c);
	}else if(c>b){
		printf("%d / %d = %d\n",c,b,div2(b,c));
	}else{
		printf("%d / %d = %d\n",b,c,div2(b,c));
	}
	printf("%d * %d = %d\n",a,c,mul3(a,c));
	if(a%c!=0&&c%a!=0){
		printf("%d khong chia het cho %d\n",a,c);
	}else if(a>c){
		printf("%d / %d = %d\n",a,c,div3(a,c));
	}else{
		printf("%d / %d = %d\n",c,a,div3(a,c));
	}
	return 0;
}


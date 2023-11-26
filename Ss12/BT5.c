#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,m,k;
	printf("Nhap so hang va so cot cua mang 2 chieu:");
	scanf("%d %d",&n,&m);
	int array[n][m];
	do{
		printf("***************MENU****************\n");
		printf("1. Nhap gia tri cac phan tu cua mang\n");
		printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
		printf("3. In ra cac phan tu o goc theo ma tran\n");
		printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
		printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
		printf("6. In ra ca phan tu la so nguyen to theo ma tran\n");
		printf("7. Thoat\n");
		int choice;
		printf("Lua chon cua ban:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("array[%d][%d]=",i,j);
						scanf("%d",&array[i][j]);
					}
				}
				break;
			case 2:
				printf("Cac phan tu trong mang duoc xep theo ma tran:\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("%d   ",array[i][j]);
					}
					printf("\n");
				}
				break;
			case 3:
				printf("Cac phan tu o goc duoc xep theo ma tran:\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(i==0&&j==0||i==0&&j==m-1||i==n-1&&j==0||i==n-1&&j==m-1){
							printf("%d\t",array[i][j]);
						}else{
							printf("0\t");
						}
					}
					printf("\n");
				}
				break;
			case 4:
				printf("Cac phan tu nam tren duong bien duoc xep theo ma tran:\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if((i==0||i==n-1)||i!=0&&(j==0||j==m-1)){
						    printf("%d\t",array[i][j]);
						}else{
						    printf("0\t");
						}
					}
					printf("\n");
				}
				break;
			case 5:
				printf("Cac phan tu nam tren duong cheo chinh va cheo phu duoc xep theo ma tran:\n");
				for(int i=0;i<n;i++){
				    for(int j=0;j<m;j++){
					    if(i==0&&j==0||i==0&&j==m-1||i==n-1&&j==0||i==n-1&&j==n-1||i!=0&&j==m-i-1||j==i){
					        printf("%d\t",array[i][j]);
				        }else{
					        printf("0\t");
				        }
				    }
			    printf("\n");
				}
				break;
			case 6:
				printf("Cac phan tu la so nguyen to duoc xep theo ma tran:\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						int count=0;
						for(int k=1;k<=array[i][j];k++){
							if(array[i][j]%k==0){
								count++;
							}
						}
						if(count<=2){
							printf("%d\t",array[i][j]);
						}else{
							printf("0\t");
						}
					}
					printf("\n");
				}
				break;
			case 7:
				exit(0);
			default:
				printf("Vui long lua chon so tu 1-7\n");
		}
	}while(1==1);
}

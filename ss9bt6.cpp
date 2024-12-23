#include<stdio.h>
#define MAX 100
int main(){
	int size,value,chose,allow=1,hang,cot,total,totalLe=0,tich=1;
	 int array[MAX][MAX];
	do{
		printf("	MENU\n");
		printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
		printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
		printf("3. In gia tri cac phan tu la le và tinh tong\n");
		printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
		printf("5. In ra cac phan tu nam tren duong cheo chinh\n");
		printf("6. In ra cac phan tu nam tren duong cheo phu\n");
		printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
		printf("8. Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d",&chose);
		switch(chose){
			case 1:
				printf("moi ban nhap hang cua mang: ");
				scanf("%d",&hang);
				printf("moi ban nhap cot cua mang: ");
				scanf("%d",&cot);
				for(int i=0;i<hang;i++){
					for(int j=0;j<cot;j++){
					printf("nhap array[%d][%d]",i+1,j+1);
					scanf("%d",&array[i][j]);
				}
		    	}
		    	allow=0;
		    	break;
		    case 2:
		    	if(allow){
		    		printf("moi ban nhap gia tri mang truoc");
				}else{
				for(int i=0;i<hang;i++){
					for(int j=0;j<cot;j++){
						printf("%d",array[i][j]);
					}
					printf("\n");
				}
				}
				break;
			case 3:
				if(allow){
					printf("moi ban nhap gia tri mang truoc");
				}else{
					for(int i=0;i<hang;i++){
					for(int j=0;j<cot;j++){
						if(array[i][j]%2!=0){
						printf("%d ",array[i][j]);
						totalLe+=array[i][j];	
						}
					}
				}
				printf("\n tong cac so le la: %d\n",totalLe);
				}
				break;
			case 4:
				if(allow){
					printf("moi ban nhap gia tri mang truoc\n");
				}else{
					for(int i=0;i<hang;i++){
					for(int j=0;j<cot;j++){
						if(i==0||j==0||i==hang-1||j==cot-1){
						printf("%d ",array[i][j]);
						tich*=array[i][j];	
						}
					}
					printf("\n");
				}
				printf("tich phan tu nam tren duong bien %d\n",tich);
				}
				break;
				case 5:
					if(allow){
						printf("moi ban nhap gia tri mang truoc\n");
					}else{
					for(int i=0;i<hang;i++){
					for(int j=0;j<cot;j++){
						if(i==j){
						printf("%d",array[i][j]);	
						}
					}
				}
			}
				break;
				case 6:
					if(allow){
						printf("moi ban nhap gia tri mang truoc\n");
					}else{
					for(int i=0;i<hang;i++){
		         	printf("%d ",array[i][hang-i-1]);
		        }
		    }
		        break;
		        case 7:
		        	if(allow){
		        		printf("moi ban nhap gia tri mang truoc\n");
					}else{
		        	int maxtotal=0,checkHang;
		        	for(int i=0;i<hang;i++){
		        		total=0;
					for(int j=0;j<cot;j++){
						total+=array[i][j];
					}
						if(total>maxtotal||i==0){
						maxtotal=total;
						checkHang=i;	
					}
			          	}
		                      	printf("dong lon nhat la dong %d tong gia tri la %d \n",checkHang+1,maxtotal);
		                  	for (int j = 0; j < cot; j++) {
                       printf("%d ",array[checkHang][j]);
                            }
                          printf("\n");
                      }
                       break;
			    case 8:
				printf("tam biet ban nhe <3");
				break;	
				default:
                printf("Lua chon khong hop le vui long chon lai\n");
                break;
		} 
	}while(chose!=8);
	return 0;
}

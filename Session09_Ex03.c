#include<stdio.h>

int main() {
	
	//buoc1 khai bao ham va bien can dung 
	int arr[100];
	int i;
	int index;
	int n;
		// buoc 2 yeu cau nguoi dung nhap vao kich thuoc mang mong muon
		printf("kich thuoc mang ma ban mong muon la: \n");
		scanf("%d", &n);
	    
		//buoc3 yeu cau nguoi dung nhap tung phan tu cho mang
		printf("cac phan tu co trong mang cua ban la: \n");
		   //dung vong lap for de co the yeu cau nguoi dung nhap lien tuc cac gia tri
		   for(i = 0; i < n; i++){
		   	 printf(" phan tu number[%d] co gia tri la: \n", i + 1);
		   	 scanf("%d", &arr[i]);
		   }
		   
		
		// buoc4 tien hanh xoa mot phan tu o mot vi tri bat ki
		//phai luu y la phai co dieu kien
		if(n > 0){
			printf("vi tri phan tu trong mang ma ban muon xoa la: (luu y chi nhap tu 0 den %d)\n", n - 1);
			scanf("%d", &index);
			if(index > 0 && index < n){
				for( i = index; i < n - 1; i++){
					//dich cac phan tu ve truoc
					arr[i] =arr[i - 1];
					//giam phan tu trong mang di 1 
				}
					n--;
					printf("phan tu tai vi tri %d da duoc xoa thanh cong: \n", index);
			} else{
				printf("gia tri ban vua nhap sai r: ");
			}
		} else {
			printf("khong co gia tri nao trong mang de xoa:");
		}
	
		// buoc 5 in ra ket qua sau khi thuc hien cac buoc tren
		printf("\n\n cac gia tri co trong mang la: \n\n");
		for(i = 0; i < n; i++){
			printf("number[%d] = %d\n", i, arr[i]);
		}
		
		
		// ket thuc chuong trinh
		return 0;
		
}

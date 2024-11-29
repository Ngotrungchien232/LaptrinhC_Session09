#include<stdio.h>

int main() {
	
	//khai bao ham va bien can de lam bai 
	int arr[100]; //kich thuoc cua mang
	int i;
	int n = 0; // so gia tri ban dau cua mang la 0
	
	// cho nguoi dung nhap mot mang bat ki
	printf("So phan tu cua mang ma ban muon: \n");
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		printf("phan tu number[%d] la: \n", i + 1);
		scanf("%d", &arr[i]);
	}
	
	//yeu cau nguoi dung nhap vao vi tri can sua trong mang 
	//de co the sua phan tu trong mang thi mang phai co it nhat lon hon 1 gia tri
	// ta co the dung vong lap if de co the kiem tra
	if(n > 0){
		int index, phan_tu_moi;
		printf("phan tu ban muon nhap co vi tri la: (luu y chi co the sua phan tu tu 0 den %d)\n", n -1);
		scanf("%d", &index);
		if(index >= 0 && index < n){
		printf(" phan tu moi ma ban muon thay o vi tri number[%d]\n", index);
		scanf("%d", &phan_tu_moi);
		arr[index] = phan_tu_moi;
		printf("phan tu %d da duoc ban sua thanh %d\n", index, phan_tu_moi);
	} else{
		printf("phan tu ban vua nhap khong ton taia trong mang: \n");
	}
	}else {
		printf("mang dang rong khong co phan tu de sua: \n");
	}
	
	
	// sau do in mang co gia tri moi da nhap ra 
	for(i = 0; i < n; i++){
		if(n == 0) {
			printf("khong co bat cu phan tu nao trong mang de co the in ra\n");
		} else{
			printf("cac phan tu co trong nhom la: \n");
			printf("number[%d] = %d", i, arr[i]);
		}
	}
	
	
	
	
	
	
	
	
	//ket thuc chuong trinh 
	return 0;
}

#include<stdio.h>

int main(){
	
	//MENU

// 1.Nhap so phan tu can nhap va in ra cac phan tu
// 2. In ra cac phan tu dang quan li
// 3. In ra cac phan tu chan va tinh tong
// 4. In ra cac gia tri lon nhat va nho nhat trong mang
// 5. In ra cac phan tu la so nguyen to trong mang va tinh tong 
// 6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do ton tai
// 7. Them mot phan tu vao vi tri chi dinh 
// 8. Thoat

//      Lua chon cua ban la:

//b1 tien hanh khai bao ham va bien se su dung trong bai
       int i, j;
       int sum_chan = 0;
       int min, max;
       int sum_nguyento;
       int index;
       int lua_chon;
       int size = 0;
       int arr[100], n = 0;
       int isPrime;
       int giatri;
       int count;
    
       //b2 tien hanh in menu ra cho nguoi dung chon
       // in ra ta co the dung vong lap while
       while (1) {
       	printf("     MENU     \n");
       	printf("1.Nhap so phan tu can nhap va in ra cac phan tu\n");
       	printf("2. In ra cac phan tu dang quan li\n");
       	printf("3. In ra cac phan tu chan va tinh tong\n");
       	printf("4. In ra cac gia tri lon nhat va nho nhat trong mang\n");
       	printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
       	printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do ton tai\n");
       	printf("7. Them mot phan tu vao vi tri chi dinh\n");
       	printf("8. Thoat\n");
       	printf("\n");
       	printf("\n");
       	// yeu cau nguoi dung chon va gan gia tri cho bien lua_chon
       	printf("Lua chon cua ban la: ");
       	scanf("%d", &lua_chon);
       	
       	//de co the cho nguoi dung chon thi ta co the dung cau lenh switch case
       	switch(lua_chon){
       		case 1:
       			// yeu cau nguoi dung nhap so phan tu cua mang va tien hanh nhap
       			printf("kich thuoc cua mang ma ban mong muon la: \n");
       			scanf("%d", &size);
       			for(i = 0; i < size; i++){
       				printf("gia tri number[%d] = \n", i + 1);
       				scanf("%d", &arr[i]);
				   }
				   break;
			case 2:
				//tien hanh in ra cac phan tu co trong mang
				// de co the in ra cac phan tu co trong mang ta co the dung vong lap for
				//nhung ta cung phai co dieu kien neu trong mang khong co phan tu nao
				if(size <= 0 || size == 0){
					printf("mang dang trong moi ban quay lai 1 de nhap phan tu\n");
				} else {
					printf("cac phan tu dang co trong mang la: \n");
					for(i = 0; i < size; i++){
					   printf("number[%d] = %d\n", i, arr[i]);
					   printf("\n");
					}
					printf("\n");
				}
				break;
			case 3:
				if(size <= 0 || size == 0){
					printf("mang dang trong moi ban quay lai 1 de nhap phan tu\n");
				} else{
				sum_chan = 0;
				printf("cac so chan trong mang la: ");
				for (i = 0; i < size; i++) {
                        if (arr[i] % 2 == 0) {
                            printf("%d ", arr[i]);
                            sum_chan += arr[i];
                        }
                    }
                    printf("tong cac so chan trong mang la %d\n", sum_chan);
				}
				printf("\n");
			break;
			
			case 4:
				// in ra cac gia tri lon nhat va nho nhat trong mang
				if(size <= 0 || size == 0){
					printf("mang dang trong moi ban quay lai 1 de nhap phan tu\n");
					printf("\n");
				} else {
					
                    min = max = arr[0];
                    for (i = 1; i < size; i++) {
                        if (arr[i] > max) max = arr[i];
                        if (arr[i] < min) min = arr[i];
                    }
                    printf("Gia tri lon nhat: %d\n", max);
                    printf("Gia tri nho nhat: %d\n", min);
			}
			break;
			
			case 5:
				// in ra cac so nguyen to va tinh tong cac so nguyen to co trong mang
				 if (size <= 0) {
                    printf("Mang dang trong. Vui long nhap du lieu truoc!\n");
                } else {
                    sum_nguyento = 0;
                    printf("Cac so nguyen to trong mang: ");
                    for (i = 0; i < size; i++) {
                        isPrime = 1;
                        if (arr[i] < 2){
                        	isPrime = 0;
						}
                        for (j = 2; j * j <= arr[i]; j++) {
                            if (arr[i] % j == 0) {
                                isPrime = 0;
                                break;
                            }
                        }
                        if (isPrime = 1) {
                            printf("%d ", arr[i]);
                            sum_nguyento += arr[i];
                        }
                    }
                    printf("\nTong cac so nguyen to: %d\n", sum_nguyento);
                }
                break;
            case 6:
            	//nhap vao mot so va thong ke xem co bao so do trong phan tu
            	printf("Nhap gia tri can thong ke: ");
                scanf("%d", &giatri);
                count = 0;
                for (i = 0; i < size; i++) {
                    if (arr[i] == giatri) count++;
                }
                printf("Gia tri %d xuat hien %d lan trong mang.\n", giatri, count);
                break;
			case 7:
				printf("Nhap gia tri can them: ");
                scanf("%d", &giatri);
                printf("Nhap vi tri can them (0-%d): ", size);
                scanf("%d", &index);

                if (index < 0 || index > size) {
                    printf("Vi tri khong hop le\n");
                } else {
                    for (i = size; i > index; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[index] = giatri;
                    size++;
                    printf("Them thanh cong\n");
                }
                break;
            case 8:
            	//thoat chuong trinh 
            	printf("chuong trinh ket thuc\n");
            	return 0;
            default:
            	printf("lua chon cua ban khong hop le");
            	
		   } //cua switch
       	
       	
       	
       	
	   } // cua while
       



 


 




 

// ket thuc chuong trinh 
return 0;
 


 


}

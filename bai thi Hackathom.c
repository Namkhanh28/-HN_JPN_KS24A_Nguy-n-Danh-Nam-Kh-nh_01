#include<stdio.h> 
int main (){
	int n;
	int array; 
	int position;
	int choice , value;  
	do{
	    printf("1,Moi nhap so phan tu va gia tri cho mang"\n);
		printf("2,Tìm gia tri nho nhat va lon nhat cua mang"\n);
		printf("3,Them mot phan tu vào mang"\n);
		printf("4,Xoa phan tu tai mot vi tri cu the"\n);
		printf("5,Sap xep mang theo thu tu giam dan"\n);
		printf("6,Thoat"\n)
		printf (" Lua chon cua ban"\n); 
		scanf("%d",&choice); 
   switch(choice)
   case1://Nhap phan tu cua mang  
     printf("so luong phan tu cho mang: ");
			scanf("%d", &n);
			for(int i=0;i<n ;i++){
				printf("So phan tu cua mang la %d",n);
				}
				printf ("array[%d]");
   break 
     case2: // Hien thi mang
			printf("In ra mang sau khi them moi cac phan tu: ");
			for(int i=0; i<n;i++){
				printf("%d", arr[i]);
			}
			printf("\n");
			break;
     case3:
     	printf("gia tri lon nhat cua mang la"\n);
     	
    int maxValue = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] > maxValue) {
            maxValue = array[i]
        }
        else;
		     
   }
     	printf("gia tri lon nhat cua mang la"\n);
   break
     case4:
   break
     case5:
   break
     case6:
   break
    defaut; 
   while(choice!=6);
	return 0; 
} 

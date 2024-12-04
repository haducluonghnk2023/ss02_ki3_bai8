#include<stdio.h>
int main(){
	int n;
	printf("nhap so phan tu cua mang:");
	scanf("%d",&n);
	if(n<=0 || n>1000){
		printf("so luong phan tu khong hop le/n");
		return 0;
	}
	int arr[n-1];
	int actual_sum = 0;
	
	printf("nhap %d phan tu tu 1 den %d\n",n-1,n);
	
	for(int i = 0; i < n - 1; i++){
		scanf("%d",&arr[i]);
		actual_sum += arr[i];
	}
	int expected_sum = n * (n+1) /2;
	int missing_number =  expected_sum - actual_sum;
	printf(" so bi thieu la: %d",missing_number);
	return 0;
}


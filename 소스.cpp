#include<stdio.h>
void A(void);
void B(void);
void tot(void);
int main(void) {


	tot();


	return 0;
}

void A(void) {
	printf("\n\nwhile 반복문\n\n");
	int n = 0;
	
	while( n < 10) {
		printf("HELLO World~~!!\n");
		n++;
	}

	printf("\n\nfor 반복문\n\n");
	for (int n = 1; n < 10; n++) {
		for (int s = 1; s < 10; s++) {
			printf("%d x %d = %d\n ", n, s, n * s);
		}

	}




}

void B(void) {
	printf("\n\n while 두번 반복문 구구단 \n\n");
	int n = 0;
	int dan = 1;
	while (dan < 10) {
		n = 0;
		printf("\n %d단 \n", dan);
		while (n < 10) {
			printf("%d x %d = %d\n", dan, n, dan * n);
			n++;
		}

		dan++;
	}

}


// 두드림 과제 
void tot(void) {
	int num;
	printf("숫자 입력\n");

	for (int sum = 0; sum < 101; sum+=num) {
		printf("지금까지 총 합 : %d\n", sum);
		scanf_s("%d", &num);
		
		if (sum > 100)
			break;
		printf("숫자입력\n");
	}
	/*
	while (sum < 100) {
		scanf_s("%d", &num);
		sum += num;
		printf("지금까지 총 합 : %d\n", sum);
		if (sum >= 100)
			break;
		printf("숫자입력\n");
	}*/
}

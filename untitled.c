#include <stdio.h>
int get_max(int x, int y);
int main() {
	int a, b; int max;
	printf("숫자 두개를 입력하세요 : "); scanf("%d %d", &a, &b);
	max = get_max(a, b);
	printf("둘 중 큰 수는 %d.\n", max);
	return 0; 
}
int get_max(int x, int y) {
return (x > y ? x : y); 
}


printf("숫자 두개를 입력하세요 : "); scanf("%d %d", &a, &b);
max = (x > y ? x : y); 



#include <stdio.h>
int main() {
	int a, b; int max;
	printf("숫자 두개를 입력하세요 : "); scanf("%d %d", &a, &b);
	max = (x > y ? x : y); 
	printf("둘 중 큰 수는 %d.\n", max);
	return 0; 
}

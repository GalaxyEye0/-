#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*int main(void)
{
	printf("7 + 8 = %d\n", 7 + 8);
	printf("7 - 8 = %d\n", 7 - 8);
	printf("7 * 8 = %d\n", 7 * 8);
	printf("7 / 8 = %d\n", 7 / 8);

	char str[16];
	printf("이름을 입력하세요 :");
	scanf_s("%s", str, sizeof(str)); 
	
	int a;
	printf("나이를 입력하세요 :");
	scanf_s("%d", &a);

	char str1[64];
	printf("주소를 입력하세요 :");
	scanf_s("%s", str, sizeof(str));
	
	printf("성명: %s\n", str);
	printf("나이 : %d\n", a);
	printf("주소 : %s\n", str1);
}*/
//여러 종류의 변수 입력받고 출력하기

/*void main()
{
	float a, b, c;
	float sum, average;

	printf("실수를 입력하시오: ");
	scanf_s("%f", &a);
	printf("실수를 입력하시오: ");
	scanf_s("%f", &b);
	printf("실수를 입력하시오: ");
	scanf_s("%f", &c);
	
	sum = a + b + c, average = sum / 3;
	
	printf("합은 %f이고 평균은 %f입니다.", sum, average);
}*/
//programming_1: 실수 입력값들의 합과 평균 구하는 프로그램

/*void main()
{
	float mile;
	float meter;
	printf("마일을 입력하시오: ");
	scanf_s("%f", &mile);
	meter = mile * 1609;
	printf("%f마일은 %f미터입니다. ", mile, meter);
}*/
//Programming_2: 마일을 미터로 변환하는 프로그램

/*void main() 
{
	double r, h, s;
	printf("삼각형의 밑변: ");
	scanf_s("%lf", &r);
	printf("삼각형의 높이: ");
	scanf_s("%lf", &h);

	s = r * h / 2;

	printf("삼각형의 넓이: %lf", s);
}*/
//Programming_3: 삼각형 넓이 계산하는 프로그램

/*void main()
{
	double F, C;
	printf("화씨값을 입력하세요: ");
	scanf_s("%lf", &F);
	
	C = (5.0 / 9.0) * (F - 32.0);
	printf("섭씨값은 %lf도입니다.", C);
}*/
//Programming_4: 화씨값을 섭씨값으로 계산하는 프로그램


/*void main() {

	double x;
	double y;
	printf("실수를 입력하세요: ");
	scanf_s8("%lf", &x);

	y = (3 * x*x) + 7 * x + 11;

	printf("다항식의 값은 %lf", y);

}*/ 
//Programming_5: 실수형 변수 받아 계산하는 다항식 예제


/*void main()
{
	float weight;
	printf("몸무게를 입력하세요(단위: kg): ");
	scanf_s("%f", &weight);

	float moonweight = weight * 0.17;
	printf("달에서의 몸무게는 %fkg입니다.", moonweight);
	
}*/
//Programming_6: 실수형 변수 받아 달에서의 몸무게 계산하는 예제

/*int main(void)
{
	float a;
	printf("실수를 입력하시오: ");
	scanf_s("%f", &a);
	printf("실수형식으로는 %f입니다.\n", a);
	printf("지수형식으로는 %e입니다.", a);
} */
//Programming_1: 소수점 표기 방법과 지수 표기 방법 예제

/*int main(void)
{
	int a;
	printf("16진수 정수를 입력하시오: ");
	scanf_s("%x", &a);
	printf("8진수로는 %#o입니다\n", a);
	printf("10진수로는 %d입니다\n", a);
	printf("16진수로는 %#x입니다", a);
}*/
//Programming_2: 16진수를 입력받아 8진수, 10진수, 16진수로 변환하는 예제

/*int main(void)
{
	int x, y, temp;
	
	x = 10;
	y = 20;
	printf("x=%d y=%d\n", x, y);
	
	temp = x;

	x = y;
	y = temp;
	printf("x=%d y=%d", x, y);
}*/
//Programming_3: int 형 변수 서로 교환하는 예제

/*
int main(void)
{
	double A, B, H, V;
	printf("상자의 가로 세로 높이를 한번에 입력: ");
	scanf_s("%lf %lf %lf", &A, &B, &H);
	
	V = A * B * H;

	printf("상자의 부피는 %lf입니다.", V);

}*/
//Programming_4: 상자의 부피를 구하는 예제

/*#define c 3.33058
int main(void)
{
	float a, b;
	printf("평을 입력하세요: ");
	scanf_s("%f", &a);

	b = a * c;
	
	printf("%f평방미터 입니다.", b);
}*/
//Programming_5: 평을 제곱미터로 변환하는 예제

/*int main(void)
{
	float a, b, c;
	a = 3.32e-3;
	b = 9.76e-8;
	
	printf("%f", a + b);
}*/
//Programming_6: 지수표기법을 실수형으로 초기화하는 예제

/*int main(void)
{
	double m, v, e;
	printf("질량(kg): ");
	scanf_s("%lf", &m);
	printf("속도(m/s): ");
	scanf_s("%lf", &v);
	printf("운동에너지(E): %lf", m*v*v/2.0);
}*/
//Programming_7: 운동에너지 계산하는 예제

/*int main(void)
{
	int input;
	printf("아스키코드를 입력하시오: ");
	scanf_s("%d", &input);
	char code1 = input;
	printf("문자: %c입니다.", code1);
}*/
//Programming_8: 아스키 코드 입력하여 변환하는 예제

/*int main(void)
{
	char beep = '\a';
	printf("화재가 발생하였습니다.%c", beep);
}*/
//Programming_9: 아스키 코드로 경보음이 울리는 예제

/*int main(void)
{
	printf("\"ASCII code\", \'A\', \'B\', \'C\' \n\\t \\a \\n");
}*/
//Programming_10: 역슬래시를 활용한 다양한 이스케이프 문자

/*int main(void)
{
	int a = 0, b = 0;
	printf("2개의 정수를 입력하시오: ");
	scanf_s(" %d %d", &a, &b);
	printf("몫: %d 나머지: %d", a / b, a%b);
	

}*/
//Programming_1: 정수를 입력 받아 몫과 나머지를 계산하는 예제

/*int main(void) {
	double a=0.0, b=0.0;
	printf("실수를 2개 입력하시오: ");
	scanf_s("%lf %lf", &a, &b);

	printf("%lf %lf %lf %lf", a+b, a-b, a*b, a/b);
}*/
//Programming_2: 2개의 더블형 실수를 읽어 사칙연산하는 예제

/*int main(void) {
	int a = 0, b = 0, c = 0;

	printf("3개의 정수를 입력하시오: ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a > b && a > c)
		printf("최대값: %d", a);

	if (b > a && b > c)
		printf("최대값: %d", b);

	if (c > a && c > a)
		printf("최대값: &d", c);
}*/
/* int a, b, c, max_a, max_b;

	printf("3개의 정수를 입력하시오: ");
	scanf_s("%d %d %d", &a, &b, &c);

	max_a = (a > b) ? a : b;
	max_b = (max_a > c) ? max_a : c;
	printf("최대값: %d", max_b);
	}*/
//Programming_3: 3개의 정수 값을 입력 받아서 최대 값을 출력하는 예제

/*int main(void) {

	int cm = 0, feet;

	printf("키를 입력하시오(cm): ");
	scanf_s("%d", &cm);
	feet = cm / 30.48;
	double inch = cm / 2.54;
	inch = inch - feet * 12;
	printf("%d cm는 %d피트 %lf인치입니다", cm, feet, inch);
}*/
//Programming_4: cm를 피트와 인치로 변환하는 예제

/*int main(void) {
	int a=0;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &a);
	printf("십의 자리: %d \n일의 자리: %d ", a / 10, a % 10);
}*/
//Programming_5: 100보다 작은 정수 십의 자리와 일의 자리로 분해하는 예제

/*int main(void) {
	int a = 0;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &a);

	printf("2의 보수: %d", ~a + 1);

}*/
//Programming_6: 2의 보수를 출력하는 예제

/*int main(void) {
	int a = 0, b =0;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &a);
	
	printf("%d를 곱하고 싶은 횟수: ", a);
	scanf_s("%d", &b);

	printf("%d<<%d의 값: %d", a, b, a << b);
}*/
//Programming_7: 비트연산자 << 활용해 2를 여러 번 곱한 수 출력하는 예제

/*#define pi 3.141592
int main(void) {
	float r, s, v;
	printf("구의 반지름을 입력하시오: ");
	scanf_s("%f", &r);
	
	s = 4 * pi * r * r;
	v = 4.0 / 3.0 * pi * r * r * r ;
	printf("구의 표면적은 %f입니다. \n", s);
	printf("구의 체적은 %f입니다.", v);
}*/
//Programming_8: 구의 표면적과 체적을 계산하는 예제

/*
int main(void) {
	float stick_h, shadow_h, piramid_L, piramid_h;
	printf("지팡이의 높이를 입력하시오: "); 
	scanf_s("%f", &stick_h);
	printf("지팡이 그림자의 길이를 입력하시오: ");
	scanf_s("%f", &shadow_h);
	printf("피라미드까지의 거리를 입력하시오: ");
	scanf_s("%f", &piramid_L);
	piramid_h = (stick_h * piramid_L) / shadow_h;
	printf("피라미드의 높이는 %f입니다. ", piramid_h);
}*/
//Programming_9: 닮음을 이용해 피라미드 높이 구하는 예제

/*int main(void) {
	int x = 0, y = 0, S_1 = 0, S_2 = 0, S_3 = 0, S_4 = 0;
	printf("X좌표를 입력하시오: ");
	scanf_s("%d", &x);
	printf("Y좌표를 입력하시오: ");
	scanf_s("%d", &y);

	S_1 = (x > 0 && y > 0) ? printf("1사분면") : S_2;
	S_2 = (x < 0 && y > 0) ? printf("2사분면") : S_3;
	S_3 = (x < 0 && y < 0) ? printf("3사분면") : S_4;
	S_4 = (x > 0 && y < 0) ? printf("4사분면") : S_1;

	return 0;
}*/
//Programming_10: 정수를 입력받아 사분면을 출력하는 예제

/*int main(void)
{ 
	char ch;
	printf("문자를 입력하세요: ");
	scanf_s("%c", &ch);

	switch (ch)
	{
	case 97:
	case 101:
	case 105:
	case 111:
	case 117:
		printf("모음입니다.");
		break;
	
	default:
		printf("모음이 아닙니다.");

		break;
	}
}*/
//Programming_1: 알파벳 모음과 자음을 switch 문으로 구분하는 예제

/*int main(void)
{
	int input1 = 0, input2 = 0;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &input1);
	printf("정수를 입력하시오: ");
	scanf_s("%d", &input2);

	if (input1 % input2 == 0)
		printf("약수입니다.");
	else
		printf("약수가 아닙니다.");
}*/
//Programming_2: 2개의 정수를 받아 처음 받은 수의 약수인지 확인하는 예제

/*int main(void)
{
	int a, b, c;
	printf("
3개의 정수를 입력하세요: ");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a < b && a < c)
		printf("제일 작은 정수는 %d입니다.", a);
	else  if (b < a && b < c)
		printf("제일 작은 정수는 %d입니다.", b);
	else if (c < a && c < b)
		printf("제일 작은 정수는 %d입니다.", c);
}*/
//Programming_3: 3개의 정수를 받아 가장 작은 값을 출력하는 예제

/*int main(void)
{
	int AI_NUM, HU_NUM = 0;

	AI_NUM = rand() % 3 + 1;
	rand(time(0));

	printf("선택하시오(1. 가위 2. 바위 3. 보)\n");
	printf("입력: ");
	scanf_s("%d", &HU_NUM);

	if (AI_NUM == 1) {
		if (HU_NUM == 1) {
			printf("컴퓨터와 비겼음. 다시 플레이 하기");
			return 0;
		}
		else if (HU_NUM == 2)
			printf("컴퓨터가 졌음.");
		else	if (HU_NUM == 3)
			printf("컴퓨터가 이김.");
		
	}

	else if (AI_NUM == 2) {
		if (HU_NUM == 1) 
			printf("컴퓨터가 이김.");

		else if (HU_NUM == 2) {
			printf("컴퓨터와 비겼음.");
			return 0;
		}
		else	if (HU_NUM == 3)
			printf("컴퓨터가 졌음.");

	}

	else if (AI_NUM == 3) {
		if (HU_NUM == 1) 
			printf("컴퓨터가 짐.");

		else if (HU_NUM == 2) 
			printf("컴퓨터가 이겼음.");

		else	if (HU_NUM == 3) {
			printf("컴퓨터와 비겼음.");
			return 0;
		}

	}

}*/
//Programming_4: 컴퓨터와 가위 바위 보 하는 프로그램

/*int main(void) {

	int cm, year;
	printf("키를 입력하시오(cm): ");
	scanf_s("%d", &cm);
	printf("나이를 입력하시오: ");
	scanf_s("%d", &year);

	if (cm >= 140 && year >= 10)
		printf("타도 좋습니다");
	else
		printf("죄송합니다");
}*/
//Programming_5: 키와 나이를 입력받아 롤러코스터를 탑승 가능 유뮤 출력하는 예제

/*int main(void)
{
	int month;

	printf("월번호를 입력하시오: ");
	scanf_s("%d", &month);

	switch(month){
	case 1:
		printf("Jan");
	case 2:
		printf("Feb");
	case 3:
		printf("Mar");
	case 4:
		printf("Apr");
	case 5:
		printf("May");
	case 6:
		printf("Jun");
	case 7:
		printf("Jul");
	case 8:
		printf("Agu");
	case 9:
		printf("Sep");
	case 10:
		printf("Oct");
	case 11:
		printf("Nov");
	case 12:
		printf("Dec");

	default:
		return 0;

		break;

	}

}*/
//Programming_6: 월 숫자를 입력받아 영어단어로 출력하는 예제

/*int main(void)
{

	int cm, weight;
	int st_weight;

	printf("체중과 키를 입력하시오: ");
	scanf_s("%d %d", &cm, &weight);
	st_weight = (cm - 100) * 0.9;

	if (st_weight > weight)
		printf("저체중입니다.");
	else if (st_weight == weight)
		printf("표준체중입니다");
	else if (st_weight < weight)
		printf("과체중입니다.");

	return 0;


}*/
//Programming_7: 표준체중 계산하여 과체중, 저체중, 표준체중 출력하는 예제

/*int main(void) {
	float x = 0.0;

	printf("x의 값을 입력하시오: ");
	scanf_s("%f", &x);
	
	if (x <= 0)
		printf("f(x)의 값은 %.1f입니다", (x*x*x) - (9*x) + 2);
	else if (x > 0)
		printf("f(x)의 값은 %.1f입니다", (2*x) +3);
}*/
//Programming_8: x값을 받아 함수 값을 출력하는 예제


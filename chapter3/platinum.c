#include<stdio.h>

int main(void)
{
	float weight;
	float value;
	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("please enter your weight in pounds: ");
	
	// 获取用户输入
	scanf("%f", &weight);
	/* 假设白金的价格每盎司$1700 */
	/* 14.5833用于把英镑常衡盎司转换为金衡盎司 */
	value = 1700.0 * weight * 14.5833;
	printf("Your weight in platium is worth $ %.2f. \n", value);
	printf("Your are easy worth that! If platium prices drop,\n");
	printf("eat more to maintain your value.\n");
	getchar();
	getchar();
	return 0;  
}

// talkback -- 演示与用户交互
#include <stdio.h>
#include <string.h>  // 提供 strlen() 函数的原型
#define DENSITY 62.4  // 人体密度（单位：磅/立方英尺）
int main(void)
{
	float weight, volume;
	int size, letters;
	char name[40];

	printf("Hi! What's your first name?\n");
	scanf("%s", name);
	printf("%s, what's your weightin pounds?\n", name);
	scanf("%f", &weight);
	size = sizeof name;  // 当运算对象是类型时圆括号必不可少，对特定量可有可无
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well, %s , your volume is %.2f cubic feet.\n", name, volume);
	printf("Also, your first name has %d letters, \n", letters);
	printf("and we have %d bytes to store it.\n", size);
	return 0;
}

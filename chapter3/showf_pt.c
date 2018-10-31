/* showf_pt.c -- 以两种方式显示float类型的值 */
#include <stdio.h>

int main(void)
{
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;
	
	printf("%f can be written %e \n", aboat, aboat);
	// 下一行要求编译器支持c99或其中相关特性
	printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
	printf("%Lf can be writen %Le\n", dip, dip);

	return 0;
}
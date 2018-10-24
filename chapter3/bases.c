/* bases.c -- 1⃣️十进制/八进制/十六禁止打印十进制数100 */
#include <stdio.h>
int main(void)
{
	int x = 100;

	printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
	printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);

	return 0;
}

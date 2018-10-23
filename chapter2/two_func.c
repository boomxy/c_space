#include <stdio.h>

void butler(void);
int main(void)
{
	printf("I will summon the butler function.\n ");
	butler();
	printf("Yse. Bring me some tea and writeable DVDs.\n");
}

void butler(void)
{
	printf("Your rang. sir?\n");
}

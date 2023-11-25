/* charcode.c-displays code number for a character */
#include <stdio.h>
int main(void)
{
	int num;
	for (num = 0; num < 256; num++) {
		printf("%d:   begin:%c:end\n", num, num);
	}

	char ch;		// -128 ~ 255
	// ch = -256;
	// ch = -129;
	ch = -128;
	ch = 0;
	ch = 128;
	ch = 129;
	ch = 255;
	// ch = 256;
	printf("%d: begin:%c:end\n", ch, ch);

	return 0;
}

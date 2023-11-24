#include <stdio.h>
#include <inttypes.h>
int main(void)
{
	printf("8 bit min = %" PRId8 ", max = %" PRId8 "\n", INT8_MIN,
	       INT8_MAX);
	printf("16 bit min = %" PRId16 ", max = %" PRId16 "\n", INT16_MIN,
	       INT16_MAX);
	printf("32 bit min = %" PRId32 ", max = %" PRId32 "\n", INT32_MIN,
	       INT32_MAX);
	printf("64 bit min = %" PRId64 ", max = %" PRId64 "\n", INT64_MIN,
	       INT64_MAX);
	// 8 bit min = -128, max = 127
	// 16 bit min = -32768, max = 32767
	// 32 bit min = -2147483648, max = 2147483647
	// 64 bit min = -9223372036854775808, max = 9223372036854775807

	return 0;
}

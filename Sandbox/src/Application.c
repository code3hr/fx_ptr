#include<stdlib.h>

__declspec(dllimport) void fx_print(void);

int main()
{
	fx_print();

	return	EXIT_SUCCESS;
}
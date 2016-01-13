#include <stdio.h>
#include "CustomContainer.h"

int main(int argc, const char* argv[])
{
	CustomContainer customContainer;

	for (auto it = customContainer.begin(); it != customContainer.end(); it++)
	{
		printf("1: %d\n", *it);
	}
	for (auto i : customContainer)
	{
		printf("2: %d\n", i);
	}

	getchar();
}
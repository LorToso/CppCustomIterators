#include <stdio.h>
#include "CustomContainer.h"

int main(int argc, const char* argv[])
{
	CustomContainer customContainer;

	for (auto it = customContainer.begin(); it != customContainer.end(); it++)
	{
		printf("Iterators: %d\n", *it);
	}

	for (auto i : customContainer)
	{
		printf("Ranged-for: %d\n", i);
	}

	getchar();
}
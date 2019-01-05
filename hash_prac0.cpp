#include <stdio.h>
#include <iostream>
#include "malloc.h"

using namespace std;

unsigned long myhash(const char *str)
{
	unsigned long hash = 5381;
	int c;

	while (c = *str++)
	{
		hash = (((hash << 5) + hash) + c) % MAX_TABLE;
	}
	return hash % MAX_TABLE;
}

int main(void)
{
    int ret = 0;
    printf("dongju start\n");


    return ret;
}

#include<stdio.h>
#include "testdarienmorrison.h"
int main (void)
{
	printf("%ld\n", syscall(__NR_darienmorrison, 3380082));
}

#include <stdio.h>

static void* ping(void* arg);
static void* pong(void* arg);

int main(int argc, const char *argv[])
{
	int iter = 0;

	if (argc != 2) {
		printf("Invalid argument count\n");
		return 1;
	}

	iter = atoi(argv[1]);

	//TODO

	return 0;
}

void* ping(void* arg)
{
	//TODO

	return NULL;
}

void* pong(void* arg)
{
	//TODO

	return NULL;
}


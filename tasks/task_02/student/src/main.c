#include <stdio.h>

static void* ping(void* arg);
static void* pong(void* arg);

pthread_mutex_t MTX;
pthread_cond_t COND;

int main(int argc, const char *argv[])
{
	int iter = 0;
	
	pthread_t thread1, thread2;
        pthread_create(&thread1,0,ping,0);
	pthread_create(&thread2,0,pong,0);

	pthread_join(thread1,0);
	pthread_join(thread2,0);


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
	pthread_mutex_lock(&MTX);
	iter++;
	pthread_cond_signal(&COND);
	pthread_mutex_unlock(&MTX);
	printf("ping \n");
	return NULL;
}

void* pong(void* arg)
{
	//TODO
	printf("pong \n");
	return NULL;
}


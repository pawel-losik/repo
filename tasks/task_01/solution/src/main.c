#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void* to_fork(void* unused)
{
  pid_t p = fork();
  printf("%d\n", p);
  while(1) sleep(10);
  return 0;
}

int main(int argc, const char *argv[])
{
  pthread_t tid;

  pthread_create(&tid, 0, to_fork, 0);

  while(1) sleep(10);

  return 0;
}

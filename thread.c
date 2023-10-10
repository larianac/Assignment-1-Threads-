#include <stdio.h>

int var = 0;
pthread_mutex_t myMutex = PTHREAD_MUTEX_INITIALIZER; // Declare a mutex
void* thread1Func()
{
pthread_mutex_lock(&myMutex); // Lock the mutex before entering the critical section
var++; // Critical section
pthread_mutex_unlock(&myMutex) // Unlock the mutex and allow other threads to enter the critical section
}
void* thread2Func()
{
pthread_mutex_lock(&myMutex); // Lock the mutex before entering the critical section
var--; // Critical section
pthread_mutex_unlock(&myMutex) // Unlock the mutex and allow other threads to enter the critical section
}

int main()
{
pthread_t tid1, tid2;
pthread_create(&t1, NULL, thread1Func, NULL);
pthread_create(&t2, NULL, thread2Func, NULL);
pthread_join(t1, NULL);
pthread_join(t2, NULL);
printf(“var = %d\n”, var);
}


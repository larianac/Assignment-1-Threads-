/*NOTES


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

*/

//CODE

#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <pthread.h> 

int g = 0; 

void *Threads(void *var) 
{ 
    // Store the value argument passed to this thread 
    int *x = (int *)var; 

    // Sum of array
    int sum = 0;
  
    // static variable to observe its changes 
    static int y = 0; 
    
    
    // checks if it is addition or subtraction
  
    //loop through array
    /*
    access variables and add together 
    */
    //loop through array again and add or subtract sum  
    //print results
} 
  
int main() 
{ 
    int i; 
    pthread_t x; 
  
    // Let us create three threads 
    for (i = 0; i < 3; i++) 
        pthread_create(&x, NULL, Threads, (void *)&x); 
   pthread_exit(NULL); 
    return 0; 
} 


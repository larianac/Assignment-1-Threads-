Ariana Contreras (887830263)

Assignment 1: 

Objective: Write a POSIX multithreaded program in C called "thread.c" that performs the following operations: Given a list of integers as input, create two separate worker threads. Thread-1 calculates the sum of all elements in the array and generates an output array with elements as (sum + array[i]). Thread-2 calculates the sum of the elements in the array and generates an output array with elements as (sum - array[i]). Collect the output of the program into a new file and submit both the code file and the output file on Canvas.

Example:

Given the list of integers -{7, 2, 1, 3, 8, 4, -5, 6, 9}

Thread 1: will find out the sum of the array, in the above example the sum is 35. Now the output array should have elements with values as (sum+array[I]). So the output will be
{42 , 37 , 36 , 38 , 43 , 39 , 30 , 41 , 44}
The first element of the output array = 35+array[0]= 35+ 7 = 42.
The second element of the output array = 35+array[1] = 35+2 = 37 and so on.
Thread 2: will find out the sum of the array, in the above example the sum is 35. Now the output array should have elements with values as (sum-array[I]). So the output will be
{28 , 33 , 34 , 32 , 27 , 31 , 40 , 29 , 26}
The first element of the output array = 35 - array[0] = 35- 7 = 28.
The second element of the output array = 35 - array[1] = 35 - 2 = 33 and so on.
Other Information:

1. gcc -pthread thread.c -othread is an example command to compile and link your program

2. ./thread | tee threading_output.txt is an example command to run your program while collecting your program’s output to a text file and seeing the output on the console.

3. Submit only these two files : Code file and output file.

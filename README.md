# pi-Calculator-monte-carlo
This project is designed to calculate the number pi using the Monte Carlo method. It is written in C language and uses the pthread.h library to make it thread-safe. The project is designed as an assignment for an operating systems class.


## Usage
To run the project, you will need to compile the source code using a C compiler and then run it. The program will work with the number of threads and amount of toss specified by the user. For example, to run the program using 10 threads and 250000 toss, you can use the following command:
## Run
./pi 250000 10


The program will print the calculated value of pi.

Note: To compile the code you need to use the following command:

## Compaile
gcc pi.c -o pi -lpthread

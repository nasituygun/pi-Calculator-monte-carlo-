//240201012
#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>

int counter;
int numberOfToss=0;
int numberOfInside=0;
pthread_mutex_t lock;

float randomFloat(float min, float max){
    return ((max - min) * ((float)rand() / RAND_MAX)) + min;
}


void* calculatePi(void* p){
    while (counter>0){
        float x=randomFloat(-1,1);
        float y=randomFloat(-1,1);
        pthread_mutex_lock(&lock);
        if (x*x+y*y<1){
            numberOfInside++;

        }
            numberOfToss++;
            counter--;
        if (counter==0){
            pthread_mutex_unlock(&lock);
            break;
        }
        pthread_mutex_unlock(&lock);



    }

    pthread_exit(NULL);
}

int main(int argc, char *argv[]){
    counter=atoi(argv[1]);
    int thread= atoi(argv[2]);
    pthread_t tid[thread];
    for(int i=0; i<thread; i++){
        if(pthread_create(&tid[i], NULL, calculatePi,NULL)){
            printf("fail");
        }}



        for (int i=0; i<thread; i++){
            pthread_join(tid[i], NULL);
        }

    printf("pi= %f\n",4.0*numberOfInside/(double)numberOfToss);

    return 0;
}

// pre-processor directives

// include needed header file
#include "./headers/Assignment.h"

// write code for functions declared in header file

void heartRate (int i, int n){

     float targetHeartRate;
     float x = START;
    
    printf("Intensity \t Target Heart Rate \n");
    do {
        targetHeartRate = (((220 - i) - n) * x) + n;
        printf("%.0f\t\t", x * 100);
        printf("%.0f BPM\n ", targetHeartRate);
        x = x + .05;
    } while(STOP(x));

}

void heartRateReference (int *i, int *n){
    
   float targetHeartRate;
   float x = START;
    
    printf("\n\nIntensity \t Target Heart Rate \n");
    do {
        targetHeartRate = (((220 - *i) - *n) * x) + *n;
        printf("%.0f\t\t", x * 100);
        printf("%.0f BPM\n ", targetHeartRate);
        x = x + .05;
    } while(STOP(x));
}


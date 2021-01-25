#include "stats.h"

struct Stats  {
    //struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    
}

struct Stats compute_statistics(float* numberset, int setlength)
    
struct Stats compute_statistics(float* numberset, int setlength)
    {
    int i;
    float sum = 0, min = 0, max = 0 ;
    struct Stats Statcalc;
    
    for (i=0 ; i < setlength ; i ++ )
    {
    sum += numberset[i]
    }
    
    for (i=0 ; i < setlength - 1 ; i ++ )
    {
        if (numberset[i] < numberset[i+1] )
        {
            min = numberset[i]
        }
    }
    
    for (i=0 ; i < setlength - 1 ; i ++ )
    {
        if (numberset[i] > numberset[i+1] )
        {
            max = numberset[i]
        }
    }
    
    
    
    Statcalc.average = sum/setlength;
    Statcalc.min = min ;
    Statcalc.max =   max ;  
    }
    

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

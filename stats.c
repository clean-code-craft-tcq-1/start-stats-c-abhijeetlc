#include "stats.h"



float numberset[];
int setlength;
int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
//struct Stats compute_statistics(float numberset[], int setlength)
  
Stat compute_statistics(float numberset[], int setlength); 
  
Stat compute_statistics(float numberset[], int setlength)
    {
    
    int i;
    float sum = 0, min = 0, max = 0 ;
    Stat Statcalc;
    
    for (i=0 ; i < setlength ; i ++ )
    {
           sum += numberset[i] ;
    }
    
    for (i=0 ; i < setlength - 1 ; i ++ )
    {
        if (numberset[i] < numberset[i+1] )
        {
            min = numberset[i] ;
        }
    }
    
    for (i=0 ; i < setlength - 1 ; i ++ )
    {
        if (numberset[i] > numberset[i+1] )
        {
            max = numberset[i] ;
        }
    }
	
    Statcalc.average = sum/setlength;
    Statcalc.min = min ;
    Statcalc.max =  max ;  
    
    return Statcalc ;
	
    }
    
    
    for (i=0 ; i < setlength - 1 ; i ++ )
    {
        if (numberset[i] > numberset[i+1] )
        {
            max = numberset[i] ;
        }
    }
	
    Statcalc.average = sum/setlength;
    Statcalc.min = min ;
    Statcalc.max =  max ;  
    
    return Statcalc ;
	
    }

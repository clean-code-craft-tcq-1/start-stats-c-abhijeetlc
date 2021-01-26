#include <stdio.h>
#include <stdlib.h>
#include "stats.h"

float numberset[10];
int setlength;


//struct Stats compute_statistics(float numberset[], int setlength)
  
Stat compute_statistics(float numberset[], int setlength); 
  
Stat compute_statistics(float numberset[], int setlength)
 {
    
    int i;
    float sum = 0, min = numberset[0], max = numberset[0] ;
    Stat Statcalc;
    
    for (i=0;i<setlength;i++)
    {
           sum+=numberset[i];
    }
    
    for (i=0;i<setlength;i++)
    {
        if (numberset[i]<min)
        {
            min=numberset[i];
        }
    }
    
    for (i=0;i<setlength;i++)
    {
        if (numberset[i]>max)
        {
            max=numberset[i];
        }
    }
	
    Statcalc.average=(sum/setlength);
    Statcalc.min=min;
    Statcalc.max=max; 
    
    return Statcalc;
	
    }

void check_and_alert (float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
	emailAlertCallCount=0;
	ledAlertCallCount=0;
	int emailAlertCallCount_test=0;
	int ledAlertCallCount_test=0;
		
	
	if (computedStats.average>maxThreshold)
	{
		emailAlertCallCount=alerters[0](emailAlertCallCount_test);
		ledAlertCallCount=alerters[1](ledAlertCallCount_test);
		
	}
	pirntf("%d\n",&emailAlertCallCount_test);
	pirntf("%d\n",&emailAlertCallCount);
	pirntf("%d\n",&ledAlertCallCount_test);
	pirntf("%d\n",&ledAlertCallCount);
	
}

int emailAlerter (int emailAlertCallCount) {return(emailAlertCallCount++);} 
int ledAlerter (int ledAlertCallCount) {return (ledAlertCallCount++);} 

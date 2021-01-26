#include "stats.h"



float numberset[10];
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
	
	if (computedStats.average>maxThreshold)
	{
		emailAlertCallCount=alerters[0](emailAlertCallCount);
		ledAlertCallCount=alerters[1](ledAlertCallCount);
	}
}

int emailAlerter (int emailAlertCallCount) {return(emailAlertCallCount++);} 
int ledAlerter (int ledAlertCallCount) {return (ledAlertCallCount++);} 

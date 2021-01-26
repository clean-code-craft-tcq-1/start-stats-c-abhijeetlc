
//struct Stats compute_statistics(float numberset[], int setlength);

typedef struct Stats  {
    //struct Stats s;
    float average = 0;
    float min = 0;
    float max = 0;
    
}Stat;

Stat compute_statistics(float numberset[], int setlength); 

typedef int (*alerter_funcptr)(int);

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);

extern int emailAlertCallCount;
extern int ledAlertCallCount; 

int emailAlerter (int emailAlertCallCount);
int ledAlerter (int ledAlertCallCount);

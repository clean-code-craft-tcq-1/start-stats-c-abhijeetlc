
//struct Stats compute_statistics(float numberset[], int setlength);

typedef struct Stats  {
    //struct Stats s;
    float average = 0;
    float min = 0;
    float max = 0;
    
}Stat;

typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);

Stat compute_statistics(float numberset[], int setlength); 

extern int emailAlertCallCount;
extern int ledAlertCallCount;

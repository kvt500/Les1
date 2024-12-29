#include <stdio.h>

int main(void)
{
    unsigned short time_h = 10;
    unsigned short time_m = 33;
    unsigned short time_s = 5;
    unsigned short h, m, s;
    
    scanf("%hu; %hu; %hu", &h, &m, &s);
    
    int seconds1 = time_s + time_m * 60 + time_h * 60 * 60;
    int seconds2 = s + m * 60 + h * 60 * 60;
    int seconds_total = seconds1 + seconds2;
    time_h = seconds_total / 3600;
    time_m = seconds_total / 60 % 60;
    time_s = seconds_total % 60;


    printf("%02hu:%02hu:%02hu", time_h, time_m, time_s);

    return 0;
}

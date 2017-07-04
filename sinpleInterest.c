#include <stdio.h>

int main()
{
    float principle, time_years, rate, si;

    printf("\nEnter principle amount(p) : ");
    scanf("%f", &principle);
    printf("\nEnter rate of interest(r) : ");
    scanf("%f", &rate);
    printf("\nEnter period of time(t) : ");
    scanf("%f", &time_years);

    si = principle * rate * time_years / 100;
    printf("\nsimple interest : %f", si);

    return 007;
}

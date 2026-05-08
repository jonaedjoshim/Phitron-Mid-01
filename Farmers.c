#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int manpower = m1 + m2;

        int new_days = (m1 * d) / manpower;

        int days_fewer = d - new_days;

        printf("%d\n", days_fewer);
    }

    return 0;
}
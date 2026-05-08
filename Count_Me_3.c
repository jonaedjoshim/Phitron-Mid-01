#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char s[10001];
        scanf("%s", s);

        int capital = 0,
            small = 0,
            digits = 0,
            len = strlen(s);

        for (int i = 0; i < len; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                capital++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                small++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                digits++;
            }
        }

        printf("%d %d %d\n", capital, small, digits);
    }

    return 0;
}
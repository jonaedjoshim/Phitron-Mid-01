#include <stdio.h>
#include <string.h>

int main()
{
    char s[100001];
    scanf("%s", s);

    int count = 0;
    int length = strlen(s);

    for (int i = 0; i < length; i++)
    {
        char c = s[i];

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            continue;
        }
        else
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
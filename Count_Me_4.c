#include <stdio.h>
#include <string.h>

int main()
{
    char s[10001];
    scanf("%s", s);

    int frequency[26] = {0};
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        int index = s[i] - 'a';
        frequency[index]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (frequency[i] > 0)
        {
            printf("%c - %d\n", i + 'a', frequency[i]);
        }
    }

    return 0;
}
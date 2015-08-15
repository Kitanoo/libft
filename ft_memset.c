#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char   *str;
    size_t          i;

    str = (unsigned char*)s;
    if (s)
    {
        i = 0;
        while (i < n)
        {
            str[i] = c;
            i++;
        }
    }
    return ((void*)str);
}

int     main(void)
{
    char    *str;

    str = (char *)malloc(41 * sizeof(char));
    str = ft_memset(str, 65, 40);
    printf("ok %s", str);
    return (0);
}

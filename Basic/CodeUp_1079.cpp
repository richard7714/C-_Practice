//
// Created by ma on 23. 3. 4.
//

#define C_1079
#ifndef C_1079

#include <cstdio>
#include <cstring>

int main()
{
    char n;
reload:
    scanf("%s",&n);
    printf("%s\n",&n);
    if(n != 'q')
    {
        goto reload;
    }
    return 0;
}

#endif
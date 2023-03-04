//
// Created by ma on 23. 3. 4.
//

#define C_1071

#ifndef C_1071
#include <cstdio>

int main()
{
    int n;
reload:
    scanf("%d", &n);
    if(n!=0) {
        printf("%d\n", n);
        goto reload;
    }

    return 0;
}
#endif


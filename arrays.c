#include <stdio.h>

int main(int argc, char** argv)
{
    int count[11];
    for (int i = 0; i < 11; i++) {
        count[i] = i * 2;
    }
    for (int i = 0; i < 11; i++) {
        printf("count[%d] address:\t%x\n", i, &count[i]);
    }
    return 0;
}
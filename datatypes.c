#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char** argv)
{
    printf("*** INTEGER TYPES ***\n");
    printf("CHAR_BIT : %d\n", CHAR_BIT);
    printf("CHAR_MAX : %d\n", CHAR_MAX);
    printf("CHAR_MIN : %d\n", CHAR_MIN);
    printf("INT_MAX  : %d\n", INT_MAX);
    printf("INT_MIN  : %d\n", INT_MIN);
    printf("LONG_MAX : %d\n", (long) LONG_MAX);
    printf("LONG_MIN : %d\n", (long) LONG_MIN);
    printf("SCHAR_MAX: %d\n", SCHAR_MAX);
    printf("SCHAR_MIN: %d\n", SCHAR_MIN);
    printf("SHRT_MAX : %d\n", SHRT_MAX);
    printf("SHRT_MIN : %d\n", SHRT_MIN);
    printf("UCHAR_MAX: %d\n", UCHAR_MAX);
    printf("UINT_MAX : %d\n", UINT_MAX);
    printf("ULONG_MAX: %d\n", ULONG_MAX);
    printf("USHRT_MAX: %d\n", USHRT_MAX);

    printf("\n*** FLOATING-POINT TYPES ***\n");
    printf("Storage size for float: %d\n", sizeof(float));
    printf("FLT_MAX     : %g\n", (float) FLT_MAX);
    printf("FLT_MIN     : %g\n", (float) FLT_MIN);
    printf("-FLT_MAX    : %g\n", (float) -FLT_MAX);
    printf("-FLT_MIN    : %g\n", (float) -FLT_MIN);
    printf("DBL_MAX     : %g\n", (double) DBL_MAX);
    printf("DBL_MIN     : %g\n", (double) DBL_MIN);
    printf("-DBL_MAX    : %g\n", (double) -DBL_MAX);
    printf("Precision value: %d\n", FLT_DIG);
    
    return 0;
}
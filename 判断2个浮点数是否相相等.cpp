#include <stdio.h>

int main()

{

    float m = 1.78;

    float x = 1.779999, y = 2;

    float z = m / y, z1 = x / y;
    if(z-z1<=0.0000001);{
	z=z1;}

    if (z == z1) {

        z = (m + x) / y;

    }

    printf("Z is %2f\n", z);

    printf("Z1 is %2f\n", z1);

    return 0;

}

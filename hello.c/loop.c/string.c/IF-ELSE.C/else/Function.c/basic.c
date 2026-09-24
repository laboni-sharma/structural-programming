basic.c‎
Original file line number	Diff line number	Diff line change
@@ -0,0 +1,24 @@
#include <stdio.h>
void chaina()
{
    printf("Bai Lu");
    return;
}
void america()
{
    printf("New York");
    chaina();
    return;
}
void bangladesh()
{
    prrintf("Bangladesh");
    america();
    return;
}
int main()
{
    bangladesh();
    return;
}
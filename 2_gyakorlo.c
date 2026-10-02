#include <stdio.h>

int main()
{
    int num, t_h, db = 0;
    double atlag = 0.0;
    scanf("%d", &num);

    while (num != 0)
    {
        db++;
        if (db == 16)
            t_h = num;
        
        atlag += num;
        scanf("%d", &num);
    }
    atlag = atlag/db;
    printf("%lf\n%d\n", atlag, t_h);    
    return 0;
}
#include<stdio.h>

int main()
{
    int num, i;
    int pac_mass = 1;
    scanf("%d", &num);
    float x_man, y_man, vector_x = 0.0, vector_y = 0.0;
    scanf("%f %f", &x_man, &y_man);
    float x[num];
    float y[num];
    for(i=0; i<num; i++)
    {
        scanf("%f %f", &x[i], &y[i]);
    }
    for(i=0; i<num; i++)
    {
        vector_x = (x[i] - x_man) + (x[i] - x_man) / pac_mass;
        vector_y = (y[i] - y_man) + (y[i] - y_man) / pac_mass;
        printf("%.2f %.2f\n",vector_x,vector_y);
        pac_mass = pac_mass * 2;
        x_man = x_man + vector_x;
        y_man = y_man + vector_y;
    }
    printf("%.2f %.2f", x_man, y_man);
    return 0;
}

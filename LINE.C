#include <stdio.h>
#include <graphics.h>

void main()
{
    float x,y,x1,y1,x2,y2,dx,dy,m,xe,c;

    int gd = DETECT,gm;
    initgraph(&gd,&gm,"");
    printf("Enter point1 (x1,y1) =");
    scanf("%f %f",&x1,&y1);
    printf("Enter point2 (x2,y2) =");
    scanf("%f %f",&x2,&y2);

    dx = x2 - x1;
    dy = y2 - y1;
    m = dy/dx;

    if(dx > 0)
    {
        x = x1;
        y = y1;
        xe = x2;
    }
    else if(dx < 0)
    {
        x = x2;
        y = y2;
        xe = x1;
    }

    c = y - m*x;
    while(x < xe)
    { 
        putpixel(x,y,GREEN);
        x = x+1;
        y = m*x + c;
    }
    getch();
    closegraph();
}

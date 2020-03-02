#include<bits/stdc++.h>
#include<graphics.h>
#include<string.h>
using namespace std;
void setbkcolor(int color);
int graph(int x,int y)
{
    int p;

    return p;
}
void interfac()
{


    int gd = DETECT,gm;
    initgraph(&gd,&gm," ");
    setcolor(RED);
    for(int i = 20; i<=380; i+=40)
    {
        line(i,20,i,380);
    }
    for(int i = 20; i<=380; i+=40)
    {
        line(20,i,380,i);
    }

    setbkcolor(GREEN);

}

int main()
{
    int cursor;
    char cursor1;
    char num1;
    char num;
    char input;
    int p;
    interfac();
    outtextxy(40,40,"*");
    int x=30,y=30;
    while(scanf("%c",&input)!=EOF)
    {

        if(input == 'a')
        {
            x = x-40;
            outtextxy(x,y,"*");
        }
        else if(input == 's')
        {
            y = y + 40;
            outtextxy(x,y,"*");
        }
        else if(input == 'd')
        {
            x = x + 40;
            outtextxy(x,y,"*");
        }
        else if(input == 'w')
        {
            y = y - 40;
            outtextxy(x,y,"*");
        }

        if(input == 1)
        {
            outtextxy(x,y,"1");
        }
        else if(input == 2)
        {
            outtextxy(x,y,"2");
        }
        else if(input == 3)
        {
            outtextxy(x,y,"3");
        }
        else if(input == 4)
        {
            outtextxy(x,y,"4");
        }
        else if(input == 5)
        {
            outtextxy(x,y,"5");
        }
        else if(input == 6)
        {
            outtextxy(x,y,"6");
        }
        else if(input == 7)
        {
            outtextxy(x,y,"7");
        }
        else if(input == 8)
        {
            outtextxy(x,y,"8");
        }
        else if(input == 9)
        {
            outtextxy(x,y,"9");
        }
        while(input != 'a' && input != 's' && input != 'd' && input != 'w' && input <'1' && input >9)
        {
            outtextxy(550,500,"Invalid Input");
            scanf("%c",&input);
        }
    }
    delay(200000000);
    closegraph();
    return 0;
}

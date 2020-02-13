#include<bits/stdc++.h>
#include<graphics.h>
#include<string.h>
using namespace std;
void setbkcolor(int color);
void interfac()
{


    int gd = DETECT,gm;
    initgraph(&gd,&gm," ");
    setcolor(RED);
    for(int i = 20;i<=380;i+=40)
    {
        line(i,20,i,380);
    }
    for(int i = 20;i<=380;i+=40)
    {
        line(20,i,380,i);
    }

    setbkcolor(GREEN);

}

int main()
{
    string num1;
    char num;
    string *p;

    interfac();
    cin >> num ;
    num1[0]=num;
    p = &num1;
    outtextxy(30,30,"1");
    //cout << &num;
    delay(200000000);
    closegraph();
    return 0;
}

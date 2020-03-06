#include<bits/stdc++.h>
#include<graphics.h>
#include<string.h>
using namespace std;
void interfac();
int main()
{
    char input;
    char put[2];
    int p,grid[9][9]=
    {
        {4,7,0,9,0,1,6,0,5},
        {0,2,0,3,0,0,0,8,4},
        {0,0,0,0,0,0,0,0,1},
        {0,1,4,7,0,8,0,5,0},
        {6,0,0,2,0,3,0,0,9},
        {0,3,0,0,0,5,8,1,0},
        {8,0,0,0,0,0,0,0,0},
        {5,9,0,0,0,4,0,2,0},
        {7,0,1,5,0,2,0,9,8},
    };
    int validity_grid[9][9]=
    {
        {1,1,0,1,0,1,1,0,1},
        {0,1,0,1,0,0,0,1,1},
        {0,0,0,0,0,0,0,0,1},
        {0,1,1,1,0,1,0,1,0},
        {1,0,0,1,0,1,0,0,1},
        {0,1,0,0,0,1,1,1,0},
        {1,0,0,0,0,0,0,0,0},
        {1,1,0,0,0,1,0,1,0},
        {1,0,1,1,0,1,0,1,1},
    };
    int gd = DETECT,gm;
    initgraph(&gd,&gm," ");
    interfac();

    int x=30,y=30;
    setcolor(WHITE);
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            if(grid[i][j]!=0&&grid[i][j]!=-1)
            {
                setcolor(LIGHTGREEN);
                settextstyle(4,HORIZ_DIR,1);
                sprintf(put,"%d",grid[i][j]);
                outtextxy(x+(j*40),y+(i*40),put);
            }
            else
                outtextxy(x+(j*40),y+(i*40)," ");
        }
    }
    setcolor(WHITE);
    int i=0,j=0;
    int temp=0,previ=0,prevj=0,cursor_flag=0;

    while(1)
    {
        while(validity_grid[i][j])
        {
            j=abs((++j)%9);
        }
        scanf("%c%*c",&input);

        if((input == 'a')||(input == 's')||(input=='d')||(input=='w'))
        {
            previ=i;
            prevj=j;
            if(input == 'a')
            {
                j=abs((--j)%9);
                while(validity_grid[i][j])
                    {
                        j=(9-(++j))%9;
                    }
            }
            else if(input == 's')
            {
                i=(++i)%9;
                while(validity_grid[i][j])
                    i=(++i)%9;
            }
            else if(input == 'd')
            {
                j=(++j)%9;
                while(validity_grid[i][j])
                    j=(++j)%9;
            }
            else if(input == 'w')
            {
                i=abs(9+(--i))%9;
                while(validity_grid[i][j])
                    i=(9+(--i))%9;
            }
            temp=grid[i][j];
            cursor_flag=1;
            grid[i][j]=-1;
        }
        else
        {
            grid[i][j] = input - '0';
        }
        printf("current box: (%d,%d)\n",j,i);
        printf("Enter value in box: (%d,%d)\n",j,i);

        if(grid[i][j]==-1)
        {
            setcolor(BLACK);
            rectangle(x+(prevj*40)-7,y+(previ*40)-7,x+(prevj*40)+26,y+(previ*40)+26);
            setcolor(WHITE);
            rectangle(x+(j*40)-7,y+(i*40)-7,x+(j*40)+26,y+(i*40)+26);
        }
        else if(grid[i][j]!=0 && grid[i][j]!=-1)
        {
            settextstyle(4,HORIZ_DIR,1);
            sprintf(put,"%d",grid[i][j]);
            outtextxy(x+(j*40),y+(i*40),put);
        }
        if(grid[i][j]==0)
            outtextxy(x+(j*40),y+(i*40),"  ");
    }
    delay(200000000);

    closegraph();
    return 0;
}
void interfac()
{
    setcolor(WHITE);
    for(int i = 20; i<=380; i+=40)
    {
        line(i,20,i,380);
    }
    for(int i = 20; i<=380; i+=40)
    {
        line(20,i,380,i);
    }
    line(139,20,139,380);
    line(141,20,141,380);

    line(259,20,259,380);
    line(261,20,261,380);

    line(20,139,380,139);
    line(20,141,380,141);

    line(20,259,380,259);
    line(20,261,380,261);

    settextstyle(9,HORIZ_DIR,1);
    outtextxy(400,40,"WELCOME TO SUDOKU");
    settextstyle(8,HORIZ_DIR,1);
    outtextxy(400,70,"Cursor movement keys:");
    outtextxy(400,110,"W to move cursor up");
    outtextxy(400,140,"S to move cursor down");
    outtextxy(400,170,"A to move cursor left");
    outtextxy(400,200,"D to move cursor down");
    outtextxy(400,230,"Press 1-9 to enter");
    outtextxy(400,250,"valid value at cursor");
}

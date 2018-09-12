#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
#include<time.h>

int no;
char name[30];

int lucky()
{
 int rno;
 scanf("%d",&no);
 randomize();
 rno=random(12)+1;

// printf("\n User no : %d  & Random no : %d ",no,rno);
 return(rno);
}

void welcome()
{
   textcolor(10);
   printf("WELCOME %s",name);
}

void menu()
{
  int ch,i,length;

  gotoxy(120,150);
  scanf("%d",&ch);

  switch(ch)
  {
	case 1:   printf("\n\n\n\n\n  Enter your name :");
		  scanf("%s",&name);


	break;
	case 2:   printf("\n hiiii");
	break;
	default:  exit(0);

  }
}
void spin()
{
  int i,k;

  for(i=0;i<=2;i++)
  {
      k=5+i;
      setcolor(k);
      delay(800);
      if(k==5)
      {
	outtextxy(300, 330, "Ready");
      }
      if(k==6)
      {
	setcolor(0);
	outtextxy(300, 330,"Ready");
	setcolor(k);
	outtextxy(300, 330, "Get Set");
      }
      if(k==7)
      {
	setcolor(0);
	outtextxy(300,330, "Get Set ");
	setcolor(k);
	outtextxy(300, 330, "Spin (Press any key...)");
      }
 }
}

void main()
{
int gdriver = DETECT,gmode;
float d;
char name[30];

int rno,ch,x,y,x2,y2,u,i,radius=150,radius2=200,x1=0,y1;
int x3,y3,x4,y4,x5,y5,x6,y6,x7,y7,x8,y8,x9,y9,x10,y10;
int inner_x,inner_y,cx[12],cy[12],j=0;

	initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");

	   settextstyle(3,0,1) ;
	   for(i=0;i<14;i++)
	   {
	     setcolor(i);
	     settextstyle(0,0,2);
	     outtextxy(250, 20," WELCOME ");
	     outtextxy(300,45,"TO");
	     outtextxy(80,70,"$$$$$ VIRTUAL CASINO ROYALE $$$$$");
	     delay(400);
	     settextstyle(0,0,2);
	     outtextxy(200, 200,"SELECT YOUR MODE : ");
	     outtextxy(200, 230,"1.) Single Player");
	   //  outtextxy(200, 250,"2.) Multiplayer ");
	   }
	    menu();
	    getch();
	    cleardevice();
	    welcome();
	    outtextxy(100,230, "Enter your lucky no.(1-12) :");
	    rno=lucky();

	    spin();

	    getch();
	    cleardevice();

	x=getmaxx()/2;
	y=getmaxy()/2;

	for(i=0;i<=14;i++)
	{
	  circle(x,y,radius);
	  circle(x,y,radius2);
	  setcolor(i);
	  delay(100);
	}
	  y1=radius2;

      setcolor(10);
      d=1.25-radius;
      do
      {
	 x3=x+x1;
	 y3=y+y1;
	    line(x,y,x3,y3);

	    inner_x=(x3+419)/2;
	    inner_y=(y3+439)/2;

	    cx[5]=inner_x-20; cy[5]=inner_y-85; // COORDINATE OF 6TH CIRCLE

	    circle(inner_x-20,inner_y-85,20);
	    settextstyle(6,0,1);
	    outtextxy(inner_x-10,inner_y-40,"6");

	    inner_x=(x3+219)/2;
	    inner_y=(y3+439)/2;

	    cx[6]=inner_x+20; cy[6]=inner_y-85; // COORDINATE OF 7TH CIRCLE

	    circle(inner_x+20,inner_y-85,20);
	    settextstyle(6,0,1);
	    outtextxy(inner_x,inner_y-40,"7");
      //----------------------------------------------------------

	 x4=x+y1;
	 y4=y+x1;
	    line(x,y,x4,y4);

	    inner_x=(x4+519)/2;
	    inner_y=(y4+339)/2;

	    cx[3]=inner_x-85; cy[3]=inner_y-25; // COORDINATE OF 4TH CIRCLE

	    circle(inner_x-85,inner_y-25,20);
	    settextstyle(6,0,1);
	    outtextxy(inner_x-30,inner_y-20,"4");

	    inner_x=(x4+519)/2;
	    inner_y=(y4+139)/2;

	    cx[2]=inner_x-80; cy[2]=inner_y+20; // COORDINATE OF 3RD CIRCLE

	    circle(inner_x-80,inner_y+20,20);
	    settextstyle(6,0,1);
	    outtextxy(inner_x-30,inner_y,"3");
    //------------------------------------------------------------
	 x5=x+y1;
	 y5=y-x1;
	    line(x,y,x5,y5);

	    inner_x=(x5+419)/2;
	    inner_y=(y5+39)/2;

	    cx[0]=inner_x-120; cy[0]=inner_y-15; // COORDINATE OF 1ST CIRCLE

	    circle(inner_x-120,inner_y-15,20);
	    settextstyle(6,0,1);
	    outtextxy(inner_x-110,inner_y-80,"1");

	    inner_x=(x5+219)/2;
	    inner_y=(y5+39)/2;

	    cx[11]=inner_x-85; cy[11]=inner_y-10; // COORDINATE OF 12TH CIRCLE

	    circle(inner_x-85,inner_y-10,20);
	    settextstyle(6,0,1);
	    outtextxy(inner_x-110,inner_y-78,"12");
    //------------------------------------------------------------
	 x6=x+x1;
	 y6=y-y1;
	     line(x,y,x6,y6);

	 x7=x-x1;
	 y7=y-y1;
	     line(x,y,x7,y7);

	 x8=x-y1;
	 y8=y-x1;
	     line(x,y,x8,y8);

	 x9=x-y1;
	 y9=y+x1;
	     line(x,y,x9,y9);
	 x10=x-x1;
	 y10=y+y1;
	     line(x,y,x10,y10);

	    inner_x=(x10+419)/2;
	    inner_y=(y10+39)/2;

	    cx[8]=inner_x-165; cy[8]=inner_y+30; // COORDINATE OF 10TH CIRCLE

	    circle(inner_x-165,inner_y+30,20);
	    settextstyle(6,0,1);
	    outtextxy(inner_x-230,inner_y-50,"10");

	    inner_x=(x10+219)/2;
	    inner_y=(y10+39)/2;

	    cx[9]=inner_x-65; cy[9]=inner_y-25; // COORDINATE OF 9TH CIRCLE

	    circle(inner_x-65,inner_y-25,20);
	    settextstyle(6,0,1);
	    outtextxy(inner_x-120,inner_y+30,"9");
    //------------------------------------------------------------


	   if(d<0)
	   {
	    x1++;
	    d=d+2*x+1;
	   }
	   else
	   {
	     x1++;
	     y1--;
	     d=d+2*x-2*y+1;
	   }

      }while(x < y);
      x1=100;
      do
      {
	 x3=x+100;
	 y3=y+y1;
	    line(x,y,x3,y3-25);
	 x4=x+y1;
	 y4=y+100;
	    line(x,y,x4-20,y4-15);

	      inner_x=(x4-20+x3)/2;
	      inner_y=(y4-15+y3-25)/2;

	      cx[4]=inner_x-50;cy[4]=inner_y-50;  // COORDINATE OF 5TH CIRCLE

	    circle(inner_x-50,inner_y-50,20);
	    settextstyle(6,0,1);
	    outtextxy(inner_x-20,inner_y-20,"5");
    //----------------------------------------------------------------
	 x5=x+y1;
	 y5=y-100;
	     line(x,y,x5-20,y5+10);
	 x6=x+100;
	 y6=y-y1;
	     line(x,y,x6,y6+25);

	    inner_x=(x5-20+x6)/2;
	    inner_y=(y5+10+y6+25)/2;

	    cx[1]=inner_x-50; cy[1]=inner_y+50; // COORDINATE OF 2ND CIRCLE

	    circle(inner_x-50,inner_y+50,20);
	    settextstyle(6,0,1);
	    outtextxy(inner_x-20,inner_y,"2");
    //--------------------------------------------------------------------
	 x7=x-100;
	 y7=y-y1;
	     line(x,y,x7-15,y7+35);
	 x8=x-y1;
	 y8=y-100;
	     line(x,y,x8+20,y8+10);

	    inner_x=(x7-15+x8+20)/2;
	    inner_y=(y7+35+y8+10)/2;

	    cx[10]= inner_x+55; cy[10]=inner_y+50; // COORDINATE OF 11TH CIRCLE

	    circle(inner_x+55,inner_y+50,20);
	    settextstyle(6,0,1);
	    outtextxy(inner_x,inner_y,"11");
      //----------------------------------------------------------
	 x9=x-y1;
	 y9=y+100;
	     line(x,y,x9+28,y9+5);
	 x10=x-100;
	 y10=y+y1;
	     line(x,y,x10,y10-25);

	    inner_x=(x9+28+x10)/2;
	    inner_y=(y9+5+y10-25)/2;

	    cx[7]=inner_x+50,cy[7]=inner_y-55; // COORDINATE OF 8TH CIRCLE

	    circle(inner_x+50,inner_y-55,20);
	    settextstyle(6,0,1);
	    outtextxy(inner_x+10,inner_y-30,"8");
      //----------------------------------------------------------

	   if(d<0)
	   {
	    x1++;
	    d=d+2*x+1;
	   }
	   else
	   {
	     x1++;
	     y1--;
	     d=d+2*x-2*y+1;
	   }

      }while(x < y);
     setcolor(3);

    while(j<4)
    {
      for(i=0;i<12;i++)
      {
	printf("\a");
	delay(75);
   //	nosound();

	if(j==0)
	{
	   delay(50);
		setfillstyle(1,13);
		floodfill(cx[i],cy[i],10);
	   delay(50);
		setfillstyle(1,0);
		floodfill(cx[i],cy[i],10);
	}
	if(j==1)
	{
	   delay(100);
		setfillstyle(1,13);
		floodfill(cx[i],cy[i],10);
	   delay(100);
		setfillstyle(1,0);
		floodfill(cx[i],cy[i],10);
	}
	if(j==2)
	{
	   delay(200);
		setfillstyle(1,13);
		floodfill(cx[i],cy[i],10);
	   delay(150);
		setfillstyle(1,0);
		floodfill(cx[i],cy[i],10);
	}
	if(j==3 && i+1==rno)
	{
	    delay(300);
		setfillstyle(1,13);
		floodfill(cx[i],cy[i],10);
		break;
	}
	if(j==3 && (i+1)!= rno)
	{
	   delay(300);
		setfillstyle(1,13);
		floodfill(cx[i],cy[i],10);
	   delay(250);
		setfillstyle(1,0);
		floodfill(cx[i],cy[i],10);
	}
      }
      j++;
    }
  //-------------------Decision module----------------
    settextstyle(6,0,1);
    if(rno==no)
    {
      for(i=0;i<14;i++)
      {
       setcolor(i);
       outtextxy(1,10," : ) CONGRATS !!!  You are quite Lucky hah...");
      }
    }
    else
    {
     setcolor(WHITE);
     outtextxy(1,10," : ( SORRY !!! Better luck next time ") ;
    }
getch();

closegraph();
}

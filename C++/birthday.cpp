#include<iostream>
#include<graphics.h>
#include<conio.h>
//colors BLACK, BLUE, GREEN, CYAN, RED, MAGENTA, BROWN, LIGHTGRAY, DARKGRAY,LIGHTBLUE, LIGHTGREEN, LIGHTCYAN, LIGHTRED, LIGHTMAGENTA, YELLOW, WHITE 

void flood(int x, int y, int new_col, int old_col) 
{ 
    if (getpixel(x, y) == old_col)
	{ 
        putpixel(x, y, new_col); 	
        flood(x + 1, y, new_col, old_col); 
        flood(x - 1, y, new_col, old_col); 
        flood(x, y + 1, new_col, old_col); 
        flood(x, y - 1, new_col, old_col); 
    } 
}

void happy1()
{
	int i=0;
	//H
	line(100,100,100,150);

	
	line(100,100,120,100);
	line(100,150,120,150);


	line(120,100,120,120);
	line(120,130,120,150);


	line(120,120,140,120);
	line(120,130,140,130);


	line(140,120,140,100);
	line(140,130,140,150);

	
	line(140,100,160,100);
	line(140,150,160,150);


	line(160,100,160,150);

	
	flood(101,101,3,7);
	
	//A
	line(170,100,170,150);
	line(230,100,230,150);


	line(170,100,230,100);

	
	line(170,150,190,150);
	line(230,150,210,150);

	
	line(190,150,190,130);
	line(210,150,210,130);

	
	line(190,130,210,130);

	
	line(190,110,190,120);
	line(190,110,210,110);
	line(210,110,210,120);
	line(190,120,210,120);

	
	flood(171,101,3,7);
	
	//P
	for(i=0;i<=10;i+=10)
	{		
		line(250+(6*i),100,250+(6*i),150);

		
		line(250+(6*i),100,270+(6*i),100);
		line(250+(6*i),150,270+(6*i),150);

		
		line(270+(6*i),150,270+(6*i),130);

		
		line(270+(6*i),100,300+(6*i),100);
		line(270+(6*i),130,300+(6*i),130);
		line(300+(6*i),130,300+(6*i),100);

		
		line(280+(6*i),110,290+(6*i),110);
		line(280+(6*i),110,280+(6*i),120);
		line(280+(6*i),120,290+(6*i),120);
		line(290+(6*i),120,290+(6*i),110);

		
		flood(251+(6*i),101,3,7);
	}
	
	//Y
	line(370,100,370,130);
	line(430,100,430,130);

	
	line(370,130,390,130);
	line(430,130,410,130);

	
	line(390,130,390,150);
	line(410,130,410,150);
	line(390,150,410,150);

	
	line(370,100,390,100);
	line(410,100,430,100);

	
	line(390,100,390,120);
	line(410,100,410,120);
	line(390,120,410,120);

	
	flood(371,101,3,7);
	
}


void birthday1()
{
	//B
	line(470,100,470,150);

	
	line(470,100,520,100);
	line(470,150,520,150);


	line(520,100,520,120);
	line(520,130,520,130);


	line(520,120,490,120);
	line(520,130,490,130);
	line(490,120,490,130);
	line(520,130,520,150);


	line(500,105,500,115);
	line(500,105,510,105);
	line(510,105,510,115);
	line(500,115,510,115);


	line(500,135,500,145);
	line(500,135,510,135);
	line(510,135,510,145);
	line(500,145,510,145);

	
	flood(471,101,3,7);
	
	//I
	line(530,100,590,100);
	line(530,100,530,110);
	line(530,110,550,110);
	line(570,110,590,110);
	line(590,100,590,110);

	
	line(570,110,570,140);
	line(550,110,550,140);

	
	line(530,150,590,150);
	line(530,140,530,150);
	line(530,140,550,140);
	line(570,140,590,140);
	line(590,150,590,140);

	
	flood(531,101,3,7);
	
	//R
	line(600,100,600,150);

	
	line(600,100,650,100);
	line(600,150,620,150);

	
	line(650,100,650,120);
	line(620,120,650,120);

	line(620,120,650,150);
	line(650,150,630,150);
	line(630,150,620,140);

	
	line(620,140,620,150);

	
	line(630,105,630,110);
	line(630,105,640,105);
	line(640,105,640,110);
	line(630,110,640,110);
	flood(601,101,3,7);
	
	//T
	line(660,100,720,100);
	line(660,100,660,110);
	line(660,110,680,110);
	line(700,110,720,110);
	line(720,100,720,110);

	
	line(700,110,700,150);
	line(680,110,680,150);
	line(680,150,700,150);

	
	flood(661,101,3,7);
	
	//H
	line(730,100,730,150);

	
	line(730,100,750,100);
	line(730,150,750,150);


	line(750,100,750,120);
	line(750,130,750,150);


	line(750,120,770,120);
	line(750,130,770,130);


	line(770,120,770,100);
	line(770,130,770,150);

	
	line(770,100,790,100);
	line(770,150,790,150);


	line(790,100,790,150);

	
	flood(731,101,3,7);
	
	//D
	line(800,100,800,150);

	
	line(800,100,850,100);
	line(850,100,850,150);
	line(800,150,850,150);

	
	line(815,115,835,115);
	line(815,115,815,135);
	line(815,135,835,135);
	line(835,115,835,135);

	
	flood(801,101,3,7);
	
	//A
	line(860,100,860,150);
	line(920,100,920,150);

	

	line(860,100,920,100);

	
	line(860,150,880,150);
	line(920,150,900,150);

	
	line(880,150,880,130);
	line(900,150,900,130);

	
	line(880,130,900,130);

	
	line(880,110,880,120);
	line(880,110,900,110);
	line(900,110,900,120);
	line(880,120,900,120);

	
	flood(861,101,3,7);
	
	//Y
	line(930,100,930,130);
	line(990,100,990,130);

	
	line(930,130,950,130);
	line(990,130,970,130);

	
	line(950,130,950,150);
	line(970,130,970,150);
	line(950,150,970,150);

	
	line(930,100,950,100);
	line(970,100,990,100);

	
	line(950,100,950,120);
	line(970,100,970,120);
	line(950,120,970,120);

	
	flood(931,101,3,7);	
	
}

void dada1()
{
		//B
	line(470,200,470,250);

	
	line(470,200,520,200);
	line(470,250,520,250);


	line(520,200,520,220);
	line(520,230,520,230);


	line(520,220,490,220);
	line(520,230,490,230);
	line(490,220,490,230);
	line(520,230,520,250);


	line(500,205,500,215);
	line(500,205,510,205);
	line(510,205,510,215);
	line(500,215,510,215);


	line(500,235,500,245);
	line(500,235,510,235);
	line(510,235,510,245);
	line(500,245,510,245);

	
	flood(471,201,3,7);

	

	
	
	//R
	line(530,200,530,250);

	
	line(530,200,580,200);
	line(530,250,550,250);

	
	line(580,200,580,220);
	line(550,220,580,220);

	line(550,220,580,250);
	line(580,250,560,250);
	line(560,250,550,240);

	
	line(550,240,550,250);

	
	line(560,205,560,210);
	line(560,205,570,205);
	line(570,205,570,210);
	line(560,210,570,210);
	flood(531,201,3,7);

	
	//O
	line(600,200,600,250);

	
	line(600,200,650,200);
	line(650,200,650,250);
	line(600,250,650,250);

	
	line(610,205,640,205);
	line(610,205,610,245);
	line(610,245,640,245);
	line(640,205,640,245);
	flood(601,201,3,7);
	

	
	//T
	line(660,200,720,200);
	line(660,200,660,210);
	line(660,210,680,210);
	line(700,210,720,210);
	line(720,200,720,210);

	
	line(700,210,700,250);
	line(680,210,680,250);
	line(680,250,700,250);

	flood(661,201,3,7);

	
	//H
	line(730,200,730,250);

	
	line(730,200,750,200);
	line(730,250,750,250);


	line(750,200,750,220);
	line(750,230,750,250);


	line(750,220,770,220);
	line(750,230,770,230);


	line(770,220,770,200);
	line(770,230,770,250);

	
	line(770,200,790,200);
	line(770,250,790,250);


	line(790,200,790,250);

	flood(731,201,3,7);

	
	//E
	line(800,200,800,250);
	line(800,200,850,200);
	line(800,250,850,250);
	
	line(850,200,850,210);
	line(850,220,850,230);
	line(850,240,850,250);

	
	line(850,210,820,210);
	line(850,220,820,220);
	line(850,230,820,230);
	line(850,240,820,240);

	line(820,210,820,220);
	line(820,240,820,230);
	
	flood(801,201,3,7);
	//R
	line(860,200,860,250);

	
	line(860,200,910,200);
	line(860,250,880,250);

	
	line(910,200,910,220);
	line(880,220,910,220);

	line(880,220,910,250);
	line(910,250,890,250);
	line(890,250,880,240);

	
	line(880,240,880,250);

	
	line(890,205,890,210);
	line(890,205,900,205);
	line(900,205,900,210);
	line(890,210,900,210);
	flood(861,201,3,7);
		
	
} 

void ballon()
{
	setcolor(2);
	circle(0,50,50);
	flood(11,41,2,7);
	circle(50,0,50);
	flood(41,1,12,7);
	
	setcolor(9);	
	circle(1200,40,50);
	flood(1199,41,9,7);
	circle(1120,0,50);
	flood(1121,1,14,7);
	
	
	
	setcolor(1);
	circle(0,730,50);
	flood(1,731,1,7);
	circle(50,770,50);	
	flood(51,771,4,7);
	
	
	setcolor(10);
	circle(1200,740,50);
	flood(1199,741,10,7);
	circle(1120,780,50);
	flood(1121,781,6,7);
}

void motion_ballon()
{
	int i=0;
	for(i=0;i<=800;i=i+200)
	{
		setcolor(4);
		circle(200,800-i,50);
		setcolor(0);
		line(200,850-i,200,870-i);
		flood(201,801-i,4,7);
		
		setcolor(14);
		circle(350,800-i,50);
		setcolor(0);
		line(350,850-i,350,870-i);
		flood(351,801-i,14,7);
		
		setcolor(10);
		circle(500,800-i,50);
		setcolor(0);
		line(500,850-i,500,870-i);
		flood(501,801-i,10,7);
		
		setcolor(3);
		circle(650,800-i,50);
		setcolor(0);
		line(650,850-i,650,870-i);
		flood(651,801-i,3,7);
		
		setcolor(13);
		circle(800,800-i,50);
		setcolor(0);
		line(800,850-i,800,870-i);
		flood(801,801-i,13,7);
		
		setcolor(12);
		circle(950,800-i,50);
		setcolor(0);
		line(950,850-i,950,870-i);
		flood(951,801-i,12,7);
		delay(200);
		cleardevice();
	}
}

void happy()
{
	int i=0;
	//H
	line(100,100,100,150);
	delay(50);
	
	line(100,100,120,100);
	line(100,150,120,150);
	delay(50);

	line(120,100,120,120);
	line(120,130,120,150);
	delay(50);

	line(120,120,140,120);
	line(120,130,140,130);
	delay(50);

	line(140,120,140,100);
	line(140,130,140,150);
	delay(50);
	
	line(140,100,160,100);
	line(140,150,160,150);
	delay(50);

	line(160,100,160,150);
	delay(50);
	
	flood(101,101,3,7);
	
	//A
	line(170,100,170,150);
	line(230,100,230,150);
	delay(50);

	line(170,100,230,100);
	delay(50);
	
	line(170,150,190,150);
	line(230,150,210,150);
	delay(50);
	
	line(190,150,190,130);
	line(210,150,210,130);
	delay(50);
	
	line(190,130,210,130);
	delay(50);
	
	line(190,110,190,120);
	line(190,110,210,110);
	line(210,110,210,120);
	line(190,120,210,120);
	delay(50);
	
	flood(171,101,3,7);
	
	//P
	for(i=0;i<=10;i+=10)
	{		
		line(250+(6*i),100,250+(6*i),150);
		delay(50);
		
		line(250+(6*i),100,270+(6*i),100);
		line(250+(6*i),150,270+(6*i),150);
		delay(50);
		
		line(270+(6*i),150,270+(6*i),130);
		delay(50);
		
		line(270+(6*i),100,300+(6*i),100);
		line(270+(6*i),130,300+(6*i),130);
		line(300+(6*i),130,300+(6*i),100);
		delay(50);
		
		line(280+(6*i),110,290+(6*i),110);
		line(280+(6*i),110,280+(6*i),120);
		line(280+(6*i),120,290+(6*i),120);
		line(290+(6*i),120,290+(6*i),110);
		delay(50);
		
		flood(251+(6*i),101,3,7);
	}
	
	//Y
	line(370,100,370,130);
	line(430,100,430,130);
	delay(50);
	
	line(370,130,390,130);
	line(430,130,410,130);
	delay(50);
	
	line(390,130,390,150);
	line(410,130,410,150);
	line(390,150,410,150);
	delay(50);
	
	line(370,100,390,100);
	line(410,100,430,100);
	delay(50);
	
	line(390,100,390,120);
	line(410,100,410,120);
	line(390,120,410,120);
	delay(50);
	
	flood(371,101,3,7);
	
}


void birthday()
{
	//B
	line(470,100,470,150);
	delay(100);
	
	line(470,100,520,100);
	line(470,150,520,150);
	delay(100);

	line(520,100,520,125);
	line(520,130,520,150);
	delay(100);

	line(520,125,500,125);
	line(520,130,500,130);
	line(500,125,500,130);
	line(520,130,520,150);
	delay(100);

	line(500,105,500,115);
	line(500,105,510,105);
	line(510,105,510,115);
	line(500,115,510,115);
	delay(100);

	line(500,135,500,145);
	line(500,135,510,135);
	line(510,135,510,145);
	line(500,145,510,145);
	delay(100);
	
	flood(471,101,3,7);
	
	//I
	line(530,100,590,100);
	line(530,100,530,110);
	line(530,110,550,110);
	line(570,110,590,110);
	line(590,100,590,110);
	delay(100);
	
	line(570,110,570,140);
	line(550,110,550,140);
	delay(100);
	
	line(530,150,590,150);
	line(530,140,530,150);
	line(530,140,550,140);
	line(570,140,590,140);
	line(590,150,590,140);
	delay(100);
	
	flood(531,101,3,7);
	
	//R
	line(600,100,600,150);
	delay(100);
	
	line(600,100,650,100);
	line(600,150,620,150);
	delay(100);
	
	line(650,100,650,120);
	line(620,120,650,120);
	delay(100);
	
	line(620,120,650,150);
	line(650,150,630,150);
	line(630,150,620,140);
	delay(100);
	
	line(620,140,620,150);
	delay(100);
	
	line(630,105,630,110);
	line(630,105,640,105);
	line(640,105,640,110);
	line(630,110,640,110);
	delay(100);
	
	flood(601,101,3,7);
	
	//T
	line(660,100,720,100);
	line(660,100,660,110);
	line(660,110,680,110);
	line(700,110,720,110);
	line(720,100,720,110);
	delay(100);
	
	line(700,110,700,150);
	line(680,110,680,150);
	line(680,150,700,150);
	delay(100);
	
	flood(661,101,3,7);
	
	//H
	line(730,100,730,150);
	delay(100);
	
	line(730,100,750,100);
	line(730,150,750,150);
	delay(100);

	line(750,100,750,120);
	line(750,130,750,150);
	delay(100);

	line(750,120,770,120);
	line(750,130,770,130);
	delay(100);

	line(770,120,770,100);
	line(770,130,770,150);
	delay(100);
	
	line(770,100,790,100);
	line(770,150,790,150);
	delay(100);

	line(790,100,790,150);
	delay(100);
	
	flood(731,101,3,7);
	
	//D
	line(800,100,800,150);
	delay(100);
	
	line(800,100,850,100);
	line(850,100,850,150);
	line(800,150,850,150);
	delay(100);
	
	line(815,115,835,115);
	line(815,115,815,135);
	line(815,135,835,135);
	line(835,115,835,135);
	delay(100);
	
	flood(801,101,3,7);
	
	//A
	line(860,100,860,150);
	line(920,100,920,150);
	delay(100);
	

	line(860,100,920,100);
	delay(100);
	
	line(860,150,880,150);
	line(920,150,900,150);
	delay(100);
	
	line(880,150,880,130);
	line(900,150,900,130);
	delay(100);
	
	line(880,130,900,130);
	delay(100);
	
	line(880,110,880,120);
	line(880,110,900,110);
	line(900,110,900,120);
	line(880,120,900,120);
	delay(100);
	
	flood(861,101,3,7);
	
	//Y
	line(930,100,930,130);
	line(990,100,990,130);
	delay(100);
	
	line(930,130,950,130);
	line(990,130,970,130);
	delay(100);
	
	line(950,130,950,150);
	line(970,130,970,150);
	line(950,150,970,150);
	delay(100);
	
	line(930,100,950,100);
	line(970,100,990,100);
	delay(100);
	
	line(950,100,950,120);
	line(970,100,970,120);
	line(950,120,970,120);
	delay(100);
	
	flood(931,101,3,7);	
	
}



void dada()
{
		//B
	line(470,200,470,250);
	delay(100);
	
	line(470,200,520,200);
	line(470,250,520,250);
	delay(100);

	line(520,200,520,220);
	line(520,230,520,230);
	delay(100);

	line(520,220,490,220);
	line(520,230,490,230);
	line(490,220,490,230);
	line(520,230,520,250);
	delay(100);

	line(500,205,500,215);
	line(500,205,510,205);
	line(510,205,510,215);
	line(500,215,510,215);
	delay(100);

	line(500,235,500,245);
	line(500,235,510,235);
	line(510,235,510,245);
	line(500,245,510,245);

	
	flood(471,201,3,7);

	

	
	
	//R
	line(530,200,530,250);
	delay(100);
	
	line(530,200,580,200);
	line(530,250,550,250);
	delay(100);
	
	line(580,200,580,220);
	line(550,220,580,220);
	delay(100);
	line(550,220,580,250);
	line(580,250,560,250);
	line(560,250,550,240);
	delay(100);
	
	line(550,240,550,250);
	delay(100);
	
	line(560,205,560,210);
	line(560,205,570,205);
	line(570,205,570,210);
	line(560,210,570,210);
	flood(531,201,3,7);

	
	//O
	line(600,200,600,250);
	delay(100);
	
	line(600,200,650,200);
	line(650,200,650,250);
	line(600,250,650,250);
	delay(100);
	
	line(610,205,640,205);
	line(610,205,610,245);
	line(610,245,640,245);
	line(640,205,640,245);
	flood(601,201,3,7);


	
	//T
	line(660,200,720,200);
	line(660,200,660,210);
	line(660,210,680,210);
	line(700,210,720,210);
	line(720,200,720,210);
	delay(100);
	
	line(700,210,700,250);
	line(680,210,680,250);
	line(680,250,700,250);

	flood(661,201,3,7);

	
	//H
	line(730,200,730,250);
	delay(100);
	
	line(730,200,750,200);
	line(730,250,750,250);
	delay(100);

	line(750,200,750,220);
	line(750,230,750,250);
	delay(100);

	line(750,220,770,220);
	line(750,230,770,230);
	delay(100);

	line(770,220,770,200);
	line(770,230,770,250);
	delay(100);
	
	line(770,200,790,200);
	line(770,250,790,250);
	delay(100);

	line(790,200,790,250);
	
	flood(731,201,3,7);

	
	//E
	line(800,200,800,250);
	line(800,200,850,200);
	line(800,250,850,250);
		delay(100);
	line(850,200,850,210);
	line(850,220,850,230);
	line(850,240,850,250);
	delay(100);
	
	line(850,210,820,210);
	line(850,220,820,220);
	line(850,230,820,230);
	line(850,240,820,240);
	delay(100);
	line(820,210,820,220);
	line(820,240,820,230);
	
	flood(801,201,3,7);
	//R
	line(860,200,860,250);
	delay(100);
	
	line(860,200,910,200);
	line(860,250,880,250);
	delay(100);
	
	line(910,200,910,220);
	line(880,220,910,220);
	delay(100);
	line(880,220,910,250);
	line(910,250,890,250);
	line(890,250,880,240);
	delay(100);
	
	line(880,240,880,250);
	delay(100);
	
	line(890,205,890,210);
	line(890,205,900,205);
	line(900,205,900,210);
	line(890,210,900,210);
	flood(861,201,3,7);
		
	
}

void table()
{
	setcolor(0);
	line(450,400,400,500);	
	line(450,400,800,400);
	line(750,500,800,400);
	line(400,500,750,500);	
	flood(451,401,6,7);
	
	line(400,500,400,600);
	line(400,600,420,600);
	line(420,500,420,600);
	flood(401,501,6,7);
	
	line(730,500,730,600);
	line(730,600,750,600);
	line(750,500,750,600);
	flood(731,501,6,7);
	
	line(780,435,780,500);
	line(780,500,800,500);
	line(800,500,800,400);
	flood(799,499,6,7);
	
	
}

void cake()
{
	setcolor(10);
	setfillstyle(1,14);
	fillellipse(550,450,50,25);
	
	setcolor(15);
	line(520,400,520,450);
	line(590,400,590,450);

	
	setfillstyle(1,10);
	fillellipse(555,400,40,15);
	
	fillellipse(555,440,40,15);
	flood(521,410,10,6);
	
	line(540,360,540,400);
	line(550,360,550,400);
	line(540,360,550,360);
	line(540,400,550,400);
	flood(541,361,15,7);
	flood(541,399,15,10);
	
	line(560,360,560,400);
	line(570,360,570,400);
	line(570,360,560,360);
	line(560,400,570,400);
	flood(561,361,15,7);
	flood(561,399,15,10);
	
	setfillstyle(1,14);
	fillellipse(545,350,5,10);
	fillellipse(565,350,5,10);
	
	
}


void gift()
{
	int i=0;
	setcolor(0);
			setfillstyle(1,9);
			setcolor(0);
			bar(650,350,750,450);
			
			line(650,350,650,450);
			line(650,350,750,350);
			line(750,350,750,450);
			line(650,450,750,450);
			//
			line(800,330,690,330);
			line(690,330,650,350);
		
			
			line(800,320,800,400);
			line(750,350,800,320);
			line(750,450,800,400);
			flood(799,390,9,7);
			flood(751,440,9,6);
			
		
			setfillstyle(1,2);
			bar3d(650,340,750,350,50,50);
			
			outtextxy(670,370,"SURPRISE");
			outtextxy(670,390,"GIFT");
			
			delay(3000);
	for(i=20;i<=40;i=i+20)
	{
		cleardevice();
	
		ballon();
		setcolor(0);
	
		happy1();
		birthday1();
		dada1();
	
		table();
		cake();
		
			setcolor(0);
			setfillstyle(1,9);
			setcolor(0);
			bar(650,350,750,450);
			
			line(650,350,650,450);
			line(650,350,750,350);
			line(750,350,750,450);
			line(650,450,750,450);
			//
			line(800,330,690,330);
			line(690,330,650,350);
		
			
			line(800,320,800,400);
			line(750,350,800,320);
			line(750,450,800,400);
			flood(799,390,9,7);
			flood(751,440,9,6);
		setfillstyle(1,2);	
		if(i>21)
		{
			
			bar3d(650+i,340-i,750+i,350-i,50,50);
		}
		else
		{
			bar3d(650,340-i,750,350-i,50,50);
		}
		outtextxy(670,370,"SURPRISE");
		outtextxy(670,390,"GIFT");
			
		delay(500);
	
	}
		
	
}

void sanitize()
{
	setcolor(0);
	setfillstyle(1,15);
	bar(700,420,720,470);
	
	line(700,420,705,410);
	line(720,420,715,410);
	line(705,410,715,410);
	flood(701,419,7,6);
	
	line(700,420,700,470);
	line(720,420,720,470);
	line(700,420,720,420);
	
	setfillstyle(1,7);
	fillellipse(710,410,5,2);
	bar(705,405,715,410);
	

	rectangle(630,420,660,480);
	flood(631,421,0,6);
	arc(645,420,0,180,15);
	arc(645,480,180,360,15);
	
	outtextxy(850,420,"Sorry, Budget Kom!!");
	outtextxy(850,440,"So, SANITIZE r MASK dilm.....LOL");
}



int main()
{
	int gd=DETECT,gm;
	initwindow(1200,800,"Wish");
	setbkcolor(7);
	
	
	motion_ballon();
	cleardevice();
	
	ballon();
	setcolor(0);
	
	happy();
	birthday();
	dada();
	
	table();
	cake();
	
	gift();
	
	cleardevice();
	
	ballon();
	setcolor(0);
	
	happy1();
	birthday1();
	dada1();
	
	table();
	cake();
	
	sanitize();
	
	getch();
	return 0;
}

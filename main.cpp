#include<graphics.h> 
main()
{
	initwindow(500,500);
	line(50,50,100,50);
	line(100,50,100,100);
	line(100,100,50,100);
	line(50,100, 50,50);
	putpixel(75,75, WHITE);
	setcolor(RED);
	settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 2);
	outtextxy(50, 25, "This is a square :D");
	getch();
}

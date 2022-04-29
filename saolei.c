#define _CRT_SECURE_NO_WARNINGS 1

#include "touwenjian.h"

void menu()
{

	printf("******************************\n");
	printf("******************************\n");
	printf("******************************\n");
	printf("******************************\n");
	printf("******************************\n");
}
void game()
{
char mine[ROWS][COLS] = { 0 };
char show[ROWS][COLS] = { 0 };

InitBoards(mine,ROWS,COLS,'0');
InitBoards(show,ROWS,COLS,'*'); 

DisplayBoard(mine,ROW,COL);
}

int main() {
	printf("nothing was wrong for your tomorrowland"); 
	system("pause"); 
	return 0;
	
}


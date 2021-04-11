//berisi spawn pallete
#include "spawn.h"
#include<graphics.h>

void acak_posisi()  //untuk mengacak posisi dari masing masing fitur saat muncul ke layar
{

}

void nyawa() //untuk membuat bentuk dari fitur penambahan nyawa
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"c:\\dekstop\\New folder\\hous");
    setcolor(GREEN);
    circle(50,50,25);
    getch();
}


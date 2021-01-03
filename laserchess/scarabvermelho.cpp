#include "scarabvermelho.h"

void ScarabVermelho::draw(QPainter *p)
{
    QPixmap d(":/imagens/escaravelhoVermelho");
    QTransform t;
    t.rotate(grau);
    d = d.transformed(t);
    p->drawPixmap(QRect(x, y, 100, 100), d);
}

string ScarabVermelho::tipo()
{
    return "SV";
}

vector<int> ScarabVermelho::hit(int k)
{
    if(grau == 0 or grau == 180)
        return {(k+2)%4, x+50, y+50};
    else
    {
        if(k == 1)
            return {2, x+50, y+50};
        if(k == 2)
            return {1, x+50, y+50};
        if(k == 3)
            return {0, x+50, y+50};
        else
            return {3, x+50, y+50};
    }
}

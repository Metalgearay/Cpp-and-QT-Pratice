#include "Adder.h"
#include <QGridLayout>

Adder::Adder(QWidget *parent):QWidget(parent)
{
	QPushButton *plus = new QPushButton("+",this);
	QPushButton *minus = new QPushButton("-",this);
	lbl = new QLabel("0",this);

	QGridLayout *grid = new QGridLayout(this);
	grid->addWidget(plus,0,0);
	grid->addWidget(minus,0,1);
    grid->addWidget(lbl,1,1);

    setLayout(grid);

    connect(plus,&QPushButton::clicked,this,&Adder::OnPlus);

     connect(minus,&QPushButton::clicked,this,&Adder::OnMinus);

	

}

void Adder::OnPlus()
{
	int val= lbl->text().toInt();
	val++;
	lbl->setText(QString::number(val));
}
void Adder::OnMinus()
{
	int val= lbl->text().toInt();
	val--;
	lbl->setText(QString::number(val));
}
#include "Easter.h"
#include <QGridLayout>
#include <cmath>
EasterCalc::EasterCalc(QWidget *parent):QWidget(parent)
{
	QPushButton *calc = new QPushButton("Calculate",this);
	lbl = new QLabel("Please Enter Year Above",this);
    txtbox = new QLineEdit(this);

    QGridLayout *grid = new QGridLayout(this);
    grid->addWidget(txtbox,0,0);
    grid->addWidget(lbl,1,1);
    grid->addWidget(calc,2,1);
    setLayout(grid);

    connect(calc,&QPushButton::clicked,this,&EasterCalc::OnCalc);
}
void EasterCalc::OnCalc()
{
	QString month,day,date;
	int year = txtbox->text().toInt();
	int a = year%19;
	int b= floor(year/100);
	int c= year%100;
	int d = floor(b/4);
	int e = b%4;
	int f = floor((b+8)/25);
	int g = floor((b-f+1)/3);
	int h = (19*a+b-d-g+15)%30;
	int i = floor(c/4);
	int k = c%4;
	int l = (32+2*e+2*i-h-k)%7;
	int m = floor((a+11*h+22*l)/451);
	int monthint = floor((h+l-7*m+114)/31);
	int dayint = ((h+l-7*m+114)%31)+1;
	if(monthint==3)
	{
       month= "March";
    }
    else
    {
        month="April";
    }
    day.setNum(dayint);
    date = month+" "+day;
    lbl->setText(date);
}


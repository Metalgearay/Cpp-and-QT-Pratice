#include <QLabel>
#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include <QLineEdit>
#include <QLabel>
class EasterCalc:public QWidget
{
	Q_OBJECT
    public:
       EasterCalc(QWidget *parent=0);
    private slots:
      void OnCalc();

    private:
    QLabel *lbl;
    QLineEdit * txtbox;


};
#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QLabel>

class Adder:public QWidget
{
	Q_OBJECT

	public:
	  Adder(QWidget *parent=0);
	private slots:
	void OnPlus();
    void OnMinus();

    private:
    QLabel *lbl;
};
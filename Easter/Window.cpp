#include "Easter.h"

 int main(int argc, char ** argv)
 {
 	QApplication app(argc,argv);

 	EasterCalc window;

 	window.resize(350,300);
 	window.setWindowTitle("Easter Calculator");
 	window.show();

 	return app.exec();
 }
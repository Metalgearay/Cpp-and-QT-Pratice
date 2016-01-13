#include "Adder.h"

 int main(int argc, char ** argv)
 {
 	QApplication app(argc,argv);

 	Adder window;

 	window.resize(350,300);
 	window.setWindowTitle("Adder");
 	window.show();

 	return app.exec();
 }

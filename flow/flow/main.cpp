#include "mainwindow.h"
#include "child.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	mainWindow w;
	child c;

	w.chi = &c;
	c.main = &w;
	w.show();
	return a.exec();
}

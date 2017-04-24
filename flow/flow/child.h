#ifndef CHILD_H
#define CHILD_H

#include <QWidget>
#include "ui_child.h"
#include "mainwindow.h"

class mainWindow;
class child : public QWidget
{
	Q_OBJECT

public:
	child(QWidget *parent = 0);
	~child();
	mainWindow *main = 0;

	void gotoMain();

	void maxMize();
	void minMize();

private:
	Ui::child ui;
};

#endif // CHILD_H

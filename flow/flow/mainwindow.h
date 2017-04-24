#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QWidget>
#include "ui_mainwindow.h"

class child;
class mainWindow : public QWidget
{
	Q_OBJECT

public:
	mainWindow(QWidget *parent = 0);
	~mainWindow();
	child *chi = 0;

	void gotochild();

signals:
	void maxAll();
	void minAll();
protected:
	virtual void changeEvent(QEvent *event) override;

private:
	Ui::mainWindowClass ui;
};

#endif // MAINWINDOW_H

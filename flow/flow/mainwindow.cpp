#include "mainwindow.h"
#include "child.h"

mainWindow::mainWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, &QPushButton::clicked, this, &mainWindow::gotochild);

	//connect(this, &mainWindow::maxAll, chi, &child::maxMize);
	//connect(this, &mainWindow::minAll, chi, &child::minMize);
	
}

mainWindow::~mainWindow()
{

}

void mainWindow::gotochild()
{
	chi->show();
}

void mainWindow::changeEvent(QEvent *event)
{
	//if (event->type() != QEvent::WindowStateChange)
	//	return;
	//if (this->windowState() == Qt::WindowMaximized)
	//{
	//	emit maxAll();
	//}
	//else if (this->windowState() == Qt::WindowActive)
	//{
	//	emit minAll();
	//	this->stackUnder(chi);
	//}
	//event->accept();
	
	//if (event->type() == QEvent::ActivationChange)
	//{
	//	printf("状态改变\n");
		if (this->windowState() == Qt::WindowMinimized)
		{
			//最小化
			printf("最小化\n");
			emit minAll();
		}
		else if (this->windowState() == Qt::WindowMaximized)
		{
			printf("活动\n");
			emit maxAll();
		}
	/*	this->stackUnder(chi);*/
		/*chi->raise();*/
	//}
	event->accept();
		return;
}

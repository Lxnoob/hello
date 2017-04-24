#include "child.h"

child::child(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	main = new mainWindow();
	this->setAutoFillBackground(false);
	this->setAttribute(Qt::WA_TranslucentBackground, true);								//背景透明
	this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool /*| Qt::WindowStaysOnTopHint*/);//保持置顶

	connect(ui.pushButton, &QPushButton::clicked, this, &child::gotoMain);
	
	connect(main, &mainWindow::maxAll, this, &child::maxMize);
	connect(main, &mainWindow::minAll, this, &child::minMize);
}

child::~child()
{

}

void child::gotoMain()
{
	this->hide();
	main->show();
}

void child::maxMize()
{
	printf("最da\n");
	this->showNormal();
}

void child::minMize()
{
	printf("最小\n");
	this->showMinimized();
}

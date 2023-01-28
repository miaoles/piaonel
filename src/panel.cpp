#include "panel.h"

panel::panel(QWidget *parent) : QWidget(parent)
{
	QVBoxLayout *mainLayout = new QVBoxLayout;
	QPushButton *button = new QPushButton("Test", this);
	QLabel *label = new QLabel("Test");

	connect(button, &QPushButton::released, this, &panel::doStuff);

	mainLayout->addWidget(label);
	mainLayout->addWidget(button);

	setLayout(mainLayout);
}

panel::~panel()
{
}

void panel::doStuff()
{
	qInfo() << KWindowSystem::isPlatformWayland();
}

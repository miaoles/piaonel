#ifndef PANEL_H
#define PANEL_H

#include <QWidget>
#include <QtWidgets>
#include <QDebug>
#include <KWindowSystem>

class panel : public QWidget
{
    Q_OBJECT

public:
    panel(QWidget *parent = nullptr);
    ~panel();

private slots:
    void doStuff();
};
#endif // PANEL_H

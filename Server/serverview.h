#ifndef SERVERVIEW_H
#define SERVERVIEW_H

#include <QWidget>

class ServerView : public QWidget
{
    Q_OBJECT

public:
    ServerView(QWidget *parent = nullptr);
    ~ServerView();
};
#endif // SERVERVIEW_H

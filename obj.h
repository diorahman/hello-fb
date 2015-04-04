#ifndef FILTER_H
#define FILTER_H

#include <QObject>

class QWidget;

class Filter : public QObject {
  Q_OBJECT

public:
  Filter(QObject * parent = 0);
  ~Filter();

protected:
  bool eventFilter(QObject *obj, QEvent *event);

private:
  QWidget *app;
};

#endif

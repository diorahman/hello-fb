#include "obj.h"

#include <QDebug>
#include <QKeyEvent>
#include <QWidget>

Filter::Filter(QObject* parent) : QObject(parent) {
  app = qobject_cast<QWidget*>(parent);
}

Filter::~Filter(){}

bool Filter::eventFilter(QObject * obj, QEvent * event) {
  if (event->type() == QEvent::KeyPress) {
    QKeyEvent * keyEvent = (QKeyEvent*) event;
    if (app) {
      qDebug() << "HAHAH";
      app->close();
    } else {
      qDebug() << "Hihi";
    }
  }
  QObject::eventFilter(obj, event); 
}

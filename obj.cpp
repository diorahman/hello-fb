#include "obj.h"

#include <QDebug>
#include <QKeyEvent>
#include <QWidget>
#include <QTime>

Filter::Filter(QObject* parent) : QObject(parent) {
  app = qobject_cast<QWidget*>(parent);
}

Filter::~Filter(){}

bool Filter::eventFilter(QObject * obj, QEvent * event) {
  if (event->type() == QEvent::KeyPress) {
    if (app) {
      qDebug() << "HAHAH";
      app->close();
    } else {
      qDebug() << "Hihi";
    }
  } else {
    qDebug() << QTime::currentTime().toString() << " - " << event->type();
  }
  return QObject::eventFilter(obj, event); 
}

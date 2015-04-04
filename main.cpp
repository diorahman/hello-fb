#include <QApplication>
#include "main-window.h"
#include "obj.h"

int main(int argc, char* argv[]) {
  QApplication app(argc, argv);

  MainWindow w;
  w.showFullScreen();

  return app.exec();
}

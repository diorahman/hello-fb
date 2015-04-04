#include "main-window.h"
#include <QPushButton>
#include "obj.h"

MainWindow::MainWindow() {
  button = new QPushButton(this);
  button->setText("Haha");
  setCentralWidget(button);
  connect(button, SIGNAL(clicked()), this, SLOT(close()));
//  setFixedSize(400, 400);

  Filter * obj = new Filter(this);
  button->installEventFilter(obj);
}

MainWindow::~MainWindow(){}

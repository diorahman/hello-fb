#include "main-window.h"

#include <QPushButton>

MainWindow::MainWindow() {
  button = new QPushButton(this);
  button->setText("HAHA");
  setCentralWidget(button);
  connect(button, SIGNAL(clicked()), this, SLOT(close()));
}

MainWindow::~MainWindow(){}

/**
 * \file AddTaskWidget.cpp
 * \author David Thompson
 * \brief Implements functionality of the AddTaskWidget
 * \date 2019-07-31
 */

#include <iostream>
#include <string>

#include "AddTaskWidget.h"

namespace qttodo {

AddTaskWidget::AddTaskWidget(QWidget * parent):
    QWidget(parent) {

    setupUi(this);
}

// SLOTS

void AddTaskWidget::on_add_button_clicked() {
    Task task("Huzzah!", Date());
    emit task_created(task);
}

} // qttodo

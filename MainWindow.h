//
// Created by zaria.burton2 on 12/14/2023.
//

#ifndef MAILBACKGEN_MAINWINDOW_H
#define MAILBACKGEN_MAINWINDOW_H
#include "sqlite3/sqlite3.h"
#include <QMainWindow>
#include <filesystem>
#include <QErrorMessage>
#include <QComboBox>
#include <QPushButton>
#include <QSpinBox>
#include <QGridLayout>
#include <QLabel>

class MainWindow: QMainWindow {
public:
    MainWindow(); //constructor

private:
    std::filesystem::path temp_dir;
    QErrorMessage *error_dialog;
    QComboBox *client_selector;
    QPushButton *edit_button;
    QPushButton *add_client_button;
    QSpinBox *amount_of_copies_selector;
    QFrame *reason_select_frame;

    QLabel *reason_select_error;
    QPushButton *generate_envelope_button;
    QPushButton *generate_large_envelope_button;
    QPushButton *generate_letter_button;

    sqlite3 *db;

    void populate_client_selector();
    void get_default_address();
    void set_default_address();


    class ReasonSelectFrame: QFrame {
    public:
        ReasonSelectFrame();
        QGridLayout reason_layout;
        std::vector<std::string> reason_list; //used for loading multiple reasons to word doc


    };


};


#endif //MAILBACKGEN_MAINWINDOW_H

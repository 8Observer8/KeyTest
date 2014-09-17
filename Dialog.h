#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QKeyEvent>

namespace Ui {
    class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

public slots:
    void keyPressEvent( QKeyEvent *event );

private slots:
    void on_onDefaultButton_clicked();

private:
    Ui::Dialog *ui;
    const int m_onDefaultNumber;
};

#endif // DIALOG_H

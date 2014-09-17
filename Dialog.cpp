#include "Dialog.h"
#include "ui_Dialog.h"

Dialog::Dialog( QWidget *parent ) :
    QDialog( parent ),
    ui( new Ui::Dialog ),
    m_onDefaultNumber( 1000 )
{
    ui->setupUi(this);
    ui->leftNumberSpinBox->setValue( m_onDefaultNumber );
    ui->rightNumberSpinBox->setValue( m_onDefaultNumber );

    this->setFixedSize( this->size() );
    this->setFocusPolicy( Qt::StrongFocus );
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::keyPressEvent(QKeyEvent *event)
{
    int value = 0;
    switch ( event->key() ) {
    case Qt::Key_Left:
        value = ui->leftNumberSpinBox->value();
        value++;
        ui->leftNumberSpinBox->setValue( value );
        break;
    case Qt::Key_Right:
        value = ui->rightNumberSpinBox->value();
        value++;
        ui->rightNumberSpinBox->setValue( value );
        break;
    }
}

void Dialog::on_onDefaultButton_clicked()
{
    ui->leftNumberSpinBox->setValue( m_onDefaultNumber );
    ui->rightNumberSpinBox->setValue( m_onDefaultNumber );
}

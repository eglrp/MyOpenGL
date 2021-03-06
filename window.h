// window.h

#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QSlider>

namespace Ui {
class Window;
}

class Window : public QWidget
{
    Q_OBJECT

public:
    explicit Window(QWidget *parent = 0);
    ~Window();

protected:
    void keyPressEvent(QKeyEvent *event);

private slots:
    void on_rotXSlider_valueChanged(int value);

    void on_rotYSlider_valueChanged(int value);

    void on_rotZSlider_valueChanged(int value);

    void on_rotXSpinBox_valueChanged(int arg1);

    void on_rotYSpinBox_valueChanged(int arg1);

    void on_rotZSpinBox_valueChanged(int arg1);

    void on_checkBox_stateChanged(int arg1);

    void on_doubleSpinBox_valueChanged(double arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void on_doubleSpinBox_2_valueChanged(double arg1);

    void on_spinBox_valueChanged(int arg1);

    void on_pushButton_3_clicked();

    void on_spinBox_4_valueChanged(int arg1);

    void on_spinBox_3_valueChanged(int arg1);

    void on_spinBox_2_valueChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_doubleSpinBox_4_valueChanged(double arg1);

    void on_doubleSpinBox_5_valueChanged(double arg1);

    void on_doubleSpinBox_6_valueChanged(double arg1);

private:
    Ui::Window *ui;
};

#endif // WINDOW_H

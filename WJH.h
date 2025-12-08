#ifndef WJH_H
#define WJH_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onTempChanged(int value);  // Ajoutez cette ligne
    void onventChanged(int value);  // Ajoutez cette ligne
    void onatmoChanged(int value);  // Ajoutez cette ligne
    void change_labels(int value);
    void onAPIkeys(QString api);
    void onCITY (QString ville);
private:
    Ui::MainWindow *ui;
};
#endif // WJH_H

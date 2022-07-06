#include <QCoreApplication>
#include <QTimer>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug("Hello World!");
    QTimer::singleShot(0, &a, &QCoreApplication::quit);
    return a.exec();
}

#ifndef QWIDGET2IMAGE_H
#define QWIDGET2IMAGE_H
#include <QWidget>
#include <QString>
#include <QSize>


class QWidget2Image
{
public:
    QWidget2Image();
    ~QWidget2Image();

    bool savePdf(QWidget *w, QString path);
    bool saveSvg(QWidget *w, QString path);
    bool saveImage(QWidget *w, QString, const char* format="jpg", int dpi=300, Qt::GlobalColor color=Qt::GlobalColor::white);
};

#endif // QWIDGET2IMAGE_H

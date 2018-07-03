#include "QWidget2Image.h"
#include "Svg2Image.h"
#include "QWidget2Pdf.h"
#include "QWidget2Svg.h"
#include <QByteArray>

QWidget2Image::QWidget2Image() {}

QWidget2Image::~QWidget2Image() {}

bool QWidget2Image::savePdf(QWidget *w, QString path)
{
    QWidget2Pdf *w2p = new QWidget2Pdf();
    return w2p->save(w, path);
}

bool QWidget2Image::saveSvg(QWidget *w, QString path)
{
    QWidget2Svg *w2v = new QWidget2Svg();
    return w2v->save(w, path);
}

bool QWidget2Image::saveImage(QWidget *w, QString path, QSize size, const char *format, int dpi, Qt::GlobalColor color)
{
    QWidget2Svg *w2v = new QWidget2Svg();
    Svg2Image *s2i = new Svg2Image();
    QByteArray array = w2v->getBytes(w);
    return s2i->save(array, path, size, format, dpi, color);
}

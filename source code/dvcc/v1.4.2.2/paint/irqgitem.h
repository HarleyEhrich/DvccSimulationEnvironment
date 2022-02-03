#ifndef IRQGITEM_H
#define IRQGITEM_H


#include <QBrush>
#include <QFont>
#include <QGraphicsItem>
#include <QObject>
#include <QPainter>
#include <QPen>
#include <QRectF>

#include "systemdataset.h"

class IrQGItem : public QGraphicsItem
{
private:
    QRectF* bodyRect=nullptr;

    QGraphicsRectItem* body=nullptr;

    QGraphicsDropShadowEffect* bodyShadowEff=nullptr;

    QGraphicsSimpleTextItem* dataText=nullptr;

    QGraphicsSimpleTextItem* nameText=nullptr;

    QGraphicsSimpleTextItem* signalsInText=nullptr;

//    QGraphicsSimpleTextItem* signalsOutText=nullptr;

    QGraphicsPathItem* toBusLine=nullptr;

    QGraphicsPathItem* fromBusLine=nullptr;

    systemDataSet* data=nullptr;

protected:
    QRectF boundingRect() const Q_DECL_OVERRIDE;

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget=nullptr) Q_DECL_OVERRIDE;

public:

    IrQGItem(systemDataSet* dataSet,QGraphicsItem *parent = 0);
};

#endif // IRQGITEM_H

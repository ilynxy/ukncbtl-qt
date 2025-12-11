#ifndef UNITTESTS_H
#define UNITTESTS_H

#if UKNCBTL_ENABLE_TESTING

#include <QtTest/QtTest>


class TestCommon : public QObject
{
    Q_OBJECT
private slots:
    void testParseOctalValue();
    void testPrintOctalValue();
    void testPrintBinaryValue();
};


#endif // if UKNCBTL_ENABLE_TESTING

#endif // UNITTESTS_H

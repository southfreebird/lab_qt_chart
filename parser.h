#ifndef PARSER_H
#define PARSER_H

#include <QString>
#include <parseexception.h>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QRegularExpressionMatchIterator>
#include <QLineSeries>
#include <QDebug>
#include <transientanalysisentity.h>
#include <QStringRef>
#include <QStringListIterator>

/**
 * @brief The Parser class
 * Исполльзовать для парсинга .tr0 файла, подобного примеру.
 * Парсит на глаз, спецификацию не читал, только координаты достает
 */
class Parser
{
public:
    Parser();
    //TODO продумать что будет возвращать
    TransientAnalysisEntity parse(QString toParse);
private:
    QRegularExpression *headerRegular;
    QRegularExpression *valuesRegular;

    TransientAnalysisEntity parseHeader(TransientAnalysisEntity entity, QStringRef header);
    TransientAnalysisEntity parseValues(TransientAnalysisEntity entity, QStringRef values);
};

#endif // PARSER_H

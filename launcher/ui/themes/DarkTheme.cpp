
#include "DarkTheme.h"

QString DarkTheme::id()
{
    return "dark";
}

QString DarkTheme::name()
{
    return QObject::tr("BLADEX Dark");
}

bool DarkTheme::hasColorScheme()
{
    return true;
}

QPalette DarkTheme::colorScheme()
{
    QPalette darkPalette;

    darkPalette.setColor(QPalette::Window, QColor("#101216"));
    darkPalette.setColor(QPalette::WindowText, Qt::white);

    darkPalette.setColor(QPalette::Base, QColor("#171A20"));
    darkPalette.setColor(QPalette::AlternateBase, QColor("#20242B"));

    darkPalette.setColor(QPalette::ToolTipBase, QColor("#FFC928"));
    darkPalette.setColor(QPalette::ToolTipText, QColor("#101216"));

    darkPalette.setColor(QPalette::Text, Qt::white);

    darkPalette.setColor(QPalette::Button, QColor("#242932"));
    darkPalette.setColor(QPalette::ButtonText, Qt::white);

    darkPalette.setColor(QPalette::BrightText, Qt::red);
    darkPalette.setColor(QPalette::Link, QColor("#FFC928"));
    darkPalette.setColor(QPalette::Highlight, QColor("#FFC928"));
    darkPalette.setColor(QPalette::HighlightedText, Qt::black);

    return fadeInactive(darkPalette, fadeAmount(), fadeColor());
}

double DarkTheme::fadeAmount()
{
    return 0.5;
}

QColor DarkTheme::fadeColor()
{
    return QColor("#101216");
}

bool DarkTheme::hasStyleSheet()
{
    return true;
}

QString DarkTheme::appStyleSheet()
{
    return "QToolTip { color: #101216; background-color: #FFC928; border: 1px solid #FFFFFF; padding: 5px; }";
}

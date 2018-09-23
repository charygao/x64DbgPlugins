#include "QtPlugin.h"

//#include "pluginmain.h"
#include "PluginTabWidget.h"

static PluginTabWidget* pluginTabWidget;

static QWidget* getParent()
{
    return QWidget::find((WId)Plugin::hwndDlg);
}

void QtPlugin::Init()
{
}

void QtPlugin::Setup()
{
    QWidget* parent = getParent();
    pluginTabWidget = new PluginTabWidget(parent);
}

void QtPlugin::Stop()
{
    delete pluginTabWidget;
}

void QtPlugin::ShowTab()
{
}

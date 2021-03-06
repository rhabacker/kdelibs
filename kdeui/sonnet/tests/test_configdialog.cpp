/**
 * test_configdialog.cpp
 *
 * Copyright (C)  2004  Zack Rusin <zack@kde.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301  USA
 */
#include "configdialog.h"
#include "speller.h"

#include <kapplication.h>
#include <kconfig.h>
#include <kcmdlineargs.h>
#include <kdebug.h>
using namespace Sonnet;

int main( int argc, char** argv )
{
    //KApplication::disableAutoDcopRegistration();
    KCmdLineArgs::init( argc, argv, "test_configdialog", 0, ki18n("test_configdialog"), 0);
    KApplication app; // with GUI

    KConfig config("sonnetrc");
    ConfigDialog *dialog = new ConfigDialog(&config, 0);

    dialog->show();

    return app.exec();
}

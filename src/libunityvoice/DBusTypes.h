/*
 * Copyright (C) 2013 Canonical, Ltd.
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 3, as published
 * by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranties of
 * MERCHANTABILITY, SATISFACTORY QUALITY, or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Pete Woods <pete.woods@canonical.com>
 */

#ifndef DBUSTYPES_H_
#define DBUSTYPES_H_

#include <QtDBus>
#include <QStringList>

typedef QList<QStringList> QListStringList;
Q_DECLARE_METATYPE(QListStringList)

namespace LibUnityVoice {

class Q_DECL_EXPORT DBusTypes {
public:
	Q_DECL_EXPORT
	static void registerMetaTypes();
};

}

#endif /* DBUSTYPES_H_ */
/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the QtGui module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or (at your option) the GNU General
** Public license version 3 or any later version approved by the KDE Free
** Qt Foundation. The licenses are as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL2 and LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-2.0.html and
** https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QEVDEVKEYBOARDHANDLER_DEFAULTMAP_P_H
#define QEVDEVKEYBOARDHANDLER_DEFAULTMAP_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include "qnamespace.h"
#ifdef Q_OS_FREEBSD
#include <dev/evdev/input.h>
#else
#include "linux/input.h"
#endif

// no QT_BEGIN_NAMESPACE, since we include it internally...

const QEvdevKeyboardMap::Mapping QEvdevKeyboardHandler::s_keymap_default[] = {
    { 1, 0xffff, 0x01000000, 0x00, 0x00, 0x0000 },
    { 2, 0x0031, 0x00000031, 0x00, 0x00, 0x0000 },
    { 2, 0x0021, 0x00000021, 0x01, 0x00, 0x0000 },
    { 3, 0x0032, 0x00000032, 0x00, 0x00, 0x0000 },
    { 3, 0x0040, 0x00000040, 0x01, 0x00, 0x0000 },
    { 3, 0x0040, 0x00000040, 0x02, 0x00, 0x0000 },
    { 4, 0x0033, 0x00000033, 0x00, 0x00, 0x0000 },
    { 4, 0x0023, 0x00000023, 0x01, 0x00, 0x0000 },
    { 4, 0xffff, 0x01000000, 0x04, 0x00, 0x0000 },
    { 5, 0x0034, 0x00000034, 0x00, 0x00, 0x0000 },
    { 5, 0x0024, 0x00000024, 0x01, 0x00, 0x0000 },
    { 5, 0x0024, 0x00000024, 0x02, 0x00, 0x0000 },
    { 5, 0x005c, 0x0400005c, 0x04, 0x00, 0x0000 },
    { 6, 0x0035, 0x00000035, 0x00, 0x00, 0x0000 },
    { 6, 0x0025, 0x00000025, 0x01, 0x00, 0x0000 },
    { 6, 0x005d, 0x0400005d, 0x04, 0x00, 0x0000 },
    { 7, 0x0036, 0x00000036, 0x00, 0x00, 0x0000 },
    { 7, 0x005e, 0x0000005e, 0x01, 0x00, 0x0000 },
    { 7, 0x005e, 0x01001252, 0x02, 0x01, 0x0000 },
    { 7, 0x005e, 0x0400005e, 0x04, 0x00, 0x0000 },
    { 8, 0x0037, 0x00000037, 0x00, 0x00, 0x0000 },
    { 8, 0x0026, 0x00000026, 0x01, 0x00, 0x0000 },
    { 8, 0x007b, 0x0000007b, 0x02, 0x00, 0x0000 },
    { 8, 0x005f, 0x0400005f, 0x04, 0x00, 0x0000 },
    { 9, 0x0038, 0x00000038, 0x00, 0x00, 0x0000 },
    { 9, 0x002a, 0x0000002a, 0x01, 0x00, 0x0000 },
    { 9, 0x005b, 0x0000005b, 0x02, 0x00, 0x0000 },
    { 9, 0xffff, 0x01000003, 0x04, 0x00, 0x0000 },
    { 10, 0x0039, 0x00000039, 0x00, 0x00, 0x0000 },
    { 10, 0x0028, 0x00000028, 0x01, 0x00, 0x0000 },
    { 10, 0x005d, 0x0000005d, 0x02, 0x00, 0x0000 },
    { 11, 0x0030, 0x00000030, 0x00, 0x00, 0x0000 },
    { 11, 0x0029, 0x00000029, 0x01, 0x00, 0x0000 },
    { 11, 0x007d, 0x0000007d, 0x02, 0x00, 0x0000 },
    { 12, 0x002d, 0x0000002d, 0x00, 0x00, 0x0000 },
    { 12, 0x005f, 0x0000005f, 0x01, 0x00, 0x0000 },
    { 12, 0x005c, 0x0000005c, 0x02, 0x00, 0x0000 },
    { 12, 0x005f, 0x0400005f, 0x04, 0x00, 0x0000 },
    { 12, 0x005f, 0x0400005f, 0x05, 0x00, 0x0000 },
    { 13, 0x003d, 0x0000003d, 0x00, 0x00, 0x0000 },
    { 13, 0x002b, 0x0000002b, 0x01, 0x00, 0x0000 },
    { 14, 0xffff, 0x01000003, 0x00, 0x00, 0x0000 },
    { 14, 0xffff, 0x01000000, 0x0c, 0x08, 0x0300 },
    { 15, 0xffff, 0x01000001, 0x00, 0x00, 0x0000 },
    { 16, 0x0071, 0x00000051, 0x00, 0x02, 0x0000 },
    { 16, 0x0051, 0x00000051, 0x01, 0x02, 0x0000 },
    { 16, 0x0071, 0x00000051, 0x02, 0x02, 0x0000 },
    { 16, 0x0051, 0x00000051, 0x03, 0x02, 0x0000 },
    { 16, 0x0071, 0x04000051, 0x04, 0x02, 0x0000 },
    { 16, 0x0071, 0x04000051, 0x05, 0x02, 0x0000 },
    { 16, 0x0071, 0x04000051, 0x06, 0x02, 0x0000 },
    { 16, 0x0071, 0x04000051, 0x07, 0x02, 0x0000 },
    { 16, 0x0071, 0x08000051, 0x08, 0x02, 0x0000 },
    { 16, 0x0071, 0x08000051, 0x09, 0x02, 0x0000 },
    { 16, 0x0071, 0x08000051, 0x0a, 0x02, 0x0000 },
    { 16, 0x0071, 0x08000051, 0x0b, 0x02, 0x0000 },
    { 16, 0x0071, 0x0c000051, 0x0c, 0x02, 0x0000 },
    { 16, 0x0071, 0x0c000051, 0x0d, 0x02, 0x0000 },
    { 16, 0x0071, 0x0c000051, 0x0e, 0x02, 0x0000 },
    { 16, 0x0071, 0x0c000051, 0x0f, 0x02, 0x0000 },
    { 17, 0x0077, 0x00000057, 0x00, 0x02, 0x0000 },
    { 17, 0x0057, 0x00000057, 0x01, 0x02, 0x0000 },
    { 17, 0x0077, 0x00000057, 0x02, 0x02, 0x0000 },
    { 17, 0x0057, 0x00000057, 0x03, 0x02, 0x0000 },
    { 17, 0x0077, 0x04000057, 0x04, 0x02, 0x0000 },
    { 17, 0x0077, 0x04000057, 0x05, 0x02, 0x0000 },
    { 17, 0x0077, 0x04000057, 0x06, 0x02, 0x0000 },
    { 17, 0x0077, 0x04000057, 0x07, 0x02, 0x0000 },
    { 17, 0x0077, 0x08000057, 0x08, 0x02, 0x0000 },
    { 17, 0x0077, 0x08000057, 0x09, 0x02, 0x0000 },
    { 17, 0x0077, 0x08000057, 0x0a, 0x02, 0x0000 },
    { 17, 0x0077, 0x08000057, 0x0b, 0x02, 0x0000 },
    { 17, 0x0077, 0x0c000057, 0x0c, 0x02, 0x0000 },
    { 17, 0x0077, 0x0c000057, 0x0d, 0x02, 0x0000 },
    { 17, 0x0077, 0x0c000057, 0x0e, 0x02, 0x0000 },
    { 17, 0x0077, 0x0c000057, 0x0f, 0x02, 0x0000 },
    { 18, 0x0065, 0x00000045, 0x00, 0x02, 0x0000 },
    { 18, 0x0045, 0x00000045, 0x01, 0x02, 0x0000 },
    { 18, 0x0065, 0x00000045, 0x02, 0x02, 0x0000 },
    { 18, 0x0045, 0x00000045, 0x03, 0x02, 0x0000 },
    { 18, 0x0065, 0x04000045, 0x04, 0x02, 0x0000 },
    { 18, 0x0065, 0x04000045, 0x05, 0x02, 0x0000 },
    { 18, 0x0065, 0x04000045, 0x06, 0x02, 0x0000 },
    { 18, 0x0065, 0x04000045, 0x07, 0x02, 0x0000 },
    { 18, 0x0065, 0x08000045, 0x08, 0x02, 0x0000 },
    { 18, 0x0065, 0x08000045, 0x09, 0x02, 0x0000 },
    { 18, 0x0065, 0x08000045, 0x0a, 0x02, 0x0000 },
    { 18, 0x0065, 0x08000045, 0x0b, 0x02, 0x0000 },
    { 18, 0x0065, 0x0c000045, 0x0c, 0x02, 0x0000 },
    { 18, 0x0065, 0x0c000045, 0x0d, 0x02, 0x0000 },
    { 18, 0x0065, 0x0c000045, 0x0e, 0x02, 0x0000 },
    { 18, 0x0065, 0x0c000045, 0x0f, 0x02, 0x0000 },
    { 19, 0x0072, 0x00000052, 0x00, 0x02, 0x0000 },
    { 19, 0x0052, 0x00000052, 0x01, 0x02, 0x0000 },
    { 19, 0x0072, 0x00000052, 0x02, 0x02, 0x0000 },
    { 19, 0x0052, 0x00000052, 0x03, 0x02, 0x0000 },
    { 19, 0x0072, 0x04000052, 0x04, 0x02, 0x0000 },
    { 19, 0x0072, 0x04000052, 0x05, 0x02, 0x0000 },
    { 19, 0x0072, 0x04000052, 0x06, 0x02, 0x0000 },
    { 19, 0x0072, 0x04000052, 0x07, 0x02, 0x0000 },
    { 19, 0x0072, 0x08000052, 0x08, 0x02, 0x0000 },
    { 19, 0x0072, 0x08000052, 0x09, 0x02, 0x0000 },
    { 19, 0x0072, 0x08000052, 0x0a, 0x02, 0x0000 },
    { 19, 0x0072, 0x08000052, 0x0b, 0x02, 0x0000 },
    { 19, 0x0072, 0x0c000052, 0x0c, 0x02, 0x0000 },
    { 19, 0x0072, 0x0c000052, 0x0d, 0x02, 0x0000 },
    { 19, 0x0072, 0x0c000052, 0x0e, 0x02, 0x0000 },
    { 19, 0x0072, 0x0c000052, 0x0f, 0x02, 0x0000 },
    { 20, 0x0074, 0x00000054, 0x00, 0x02, 0x0000 },
    { 20, 0x0054, 0x00000054, 0x01, 0x02, 0x0000 },
    { 20, 0x0074, 0x00000054, 0x02, 0x02, 0x0000 },
    { 20, 0x0054, 0x00000054, 0x03, 0x02, 0x0000 },
    { 20, 0x0074, 0x04000054, 0x04, 0x02, 0x0000 },
    { 20, 0x0074, 0x04000054, 0x05, 0x02, 0x0000 },
    { 20, 0x0074, 0x04000054, 0x06, 0x02, 0x0000 },
    { 20, 0x0074, 0x04000054, 0x07, 0x02, 0x0000 },
    { 20, 0x0074, 0x08000054, 0x08, 0x02, 0x0000 },
    { 20, 0x0074, 0x08000054, 0x09, 0x02, 0x0000 },
    { 20, 0x0074, 0x08000054, 0x0a, 0x02, 0x0000 },
    { 20, 0x0074, 0x08000054, 0x0b, 0x02, 0x0000 },
    { 20, 0x0074, 0x0c000054, 0x0c, 0x02, 0x0000 },
    { 20, 0x0074, 0x0c000054, 0x0d, 0x02, 0x0000 },
    { 20, 0x0074, 0x0c000054, 0x0e, 0x02, 0x0000 },
    { 20, 0x0074, 0x0c000054, 0x0f, 0x02, 0x0000 },
    { 21, 0x0079, 0x00000059, 0x00, 0x02, 0x0000 },
    { 21, 0x0059, 0x00000059, 0x01, 0x02, 0x0000 },
    { 21, 0x0079, 0x00000059, 0x02, 0x02, 0x0000 },
    { 21, 0x0059, 0x00000059, 0x03, 0x02, 0x0000 },
    { 21, 0x0079, 0x04000059, 0x04, 0x02, 0x0000 },
    { 21, 0x0079, 0x04000059, 0x05, 0x02, 0x0000 },
    { 21, 0x0079, 0x04000059, 0x06, 0x02, 0x0000 },
    { 21, 0x0079, 0x04000059, 0x07, 0x02, 0x0000 },
    { 21, 0x0079, 0x08000059, 0x08, 0x02, 0x0000 },
    { 21, 0x0079, 0x08000059, 0x09, 0x02, 0x0000 },
    { 21, 0x0079, 0x08000059, 0x0a, 0x02, 0x0000 },
    { 21, 0x0079, 0x08000059, 0x0b, 0x02, 0x0000 },
    { 21, 0x0079, 0x0c000059, 0x0c, 0x02, 0x0000 },
    { 21, 0x0079, 0x0c000059, 0x0d, 0x02, 0x0000 },
    { 21, 0x0079, 0x0c000059, 0x0e, 0x02, 0x0000 },
    { 21, 0x0079, 0x0c000059, 0x0f, 0x02, 0x0000 },
    { 22, 0x0075, 0x00000055, 0x00, 0x02, 0x0000 },
    { 22, 0x0055, 0x00000055, 0x01, 0x02, 0x0000 },
    { 22, 0x0075, 0x00000055, 0x02, 0x02, 0x0000 },
    { 22, 0x0055, 0x00000055, 0x03, 0x02, 0x0000 },
    { 22, 0x0075, 0x04000055, 0x04, 0x02, 0x0000 },
    { 22, 0x0075, 0x04000055, 0x05, 0x02, 0x0000 },
    { 22, 0x0075, 0x04000055, 0x06, 0x02, 0x0000 },
    { 22, 0x0075, 0x04000055, 0x07, 0x02, 0x0000 },
    { 22, 0x0075, 0x08000055, 0x08, 0x02, 0x0000 },
    { 22, 0x0075, 0x08000055, 0x09, 0x02, 0x0000 },
    { 22, 0x0075, 0x08000055, 0x0a, 0x02, 0x0000 },
    { 22, 0x0075, 0x08000055, 0x0b, 0x02, 0x0000 },
    { 22, 0x0075, 0x0c000055, 0x0c, 0x02, 0x0000 },
    { 22, 0x0075, 0x0c000055, 0x0d, 0x02, 0x0000 },
    { 22, 0x0075, 0x0c000055, 0x0e, 0x02, 0x0000 },
    { 22, 0x0075, 0x0c000055, 0x0f, 0x02, 0x0000 },
    { 23, 0x0069, 0x00000049, 0x00, 0x02, 0x0000 },
    { 23, 0x0049, 0x00000049, 0x01, 0x02, 0x0000 },
    { 23, 0x0069, 0x00000049, 0x02, 0x02, 0x0000 },
    { 23, 0x0049, 0x00000049, 0x03, 0x02, 0x0000 },
    { 23, 0x0069, 0x04000049, 0x04, 0x02, 0x0000 },
    { 23, 0x0069, 0x04000049, 0x05, 0x02, 0x0000 },
    { 23, 0x0069, 0x04000049, 0x06, 0x02, 0x0000 },
    { 23, 0x0069, 0x04000049, 0x07, 0x02, 0x0000 },
    { 23, 0x0069, 0x08000049, 0x08, 0x02, 0x0000 },
    { 23, 0x0069, 0x08000049, 0x09, 0x02, 0x0000 },
    { 23, 0x0069, 0x08000049, 0x0a, 0x02, 0x0000 },
    { 23, 0x0069, 0x08000049, 0x0b, 0x02, 0x0000 },
    { 23, 0x0069, 0x0c000049, 0x0c, 0x02, 0x0000 },
    { 23, 0x0069, 0x0c000049, 0x0d, 0x02, 0x0000 },
    { 23, 0x0069, 0x0c000049, 0x0e, 0x02, 0x0000 },
    { 23, 0x0069, 0x0c000049, 0x0f, 0x02, 0x0000 },
    { 24, 0x006f, 0x0000004f, 0x00, 0x02, 0x0000 },
    { 24, 0x004f, 0x0000004f, 0x01, 0x02, 0x0000 },
    { 24, 0x006f, 0x0000004f, 0x02, 0x02, 0x0000 },
    { 24, 0x004f, 0x0000004f, 0x03, 0x02, 0x0000 },
    { 24, 0x006f, 0x0400004f, 0x04, 0x02, 0x0000 },
    { 24, 0x006f, 0x0400004f, 0x05, 0x02, 0x0000 },
    { 24, 0x006f, 0x0400004f, 0x06, 0x02, 0x0000 },
    { 24, 0x006f, 0x0400004f, 0x07, 0x02, 0x0000 },
    { 24, 0x006f, 0x0800004f, 0x08, 0x02, 0x0000 },
    { 24, 0x006f, 0x0800004f, 0x09, 0x02, 0x0000 },
    { 24, 0x006f, 0x0800004f, 0x0a, 0x02, 0x0000 },
    { 24, 0x006f, 0x0800004f, 0x0b, 0x02, 0x0000 },
    { 24, 0x006f, 0x0c00004f, 0x0c, 0x02, 0x0000 },
    { 24, 0x006f, 0x0c00004f, 0x0d, 0x02, 0x0000 },
    { 24, 0x006f, 0x0c00004f, 0x0e, 0x02, 0x0000 },
    { 24, 0x006f, 0x0c00004f, 0x0f, 0x02, 0x0000 },
    { 25, 0x0070, 0x00000050, 0x00, 0x02, 0x0000 },
    { 25, 0x0050, 0x00000050, 0x01, 0x02, 0x0000 },
    { 25, 0x0070, 0x00000050, 0x02, 0x02, 0x0000 },
    { 25, 0x0050, 0x00000050, 0x03, 0x02, 0x0000 },
    { 25, 0x0070, 0x04000050, 0x04, 0x02, 0x0000 },
    { 25, 0x0070, 0x04000050, 0x05, 0x02, 0x0000 },
    { 25, 0x0070, 0x04000050, 0x06, 0x02, 0x0000 },
    { 25, 0x0070, 0x04000050, 0x07, 0x02, 0x0000 },
    { 25, 0x0070, 0x08000050, 0x08, 0x02, 0x0000 },
    { 25, 0x0070, 0x08000050, 0x09, 0x02, 0x0000 },
    { 25, 0x0070, 0x08000050, 0x0a, 0x02, 0x0000 },
    { 25, 0x0070, 0x08000050, 0x0b, 0x02, 0x0000 },
    { 25, 0x0070, 0x0c000050, 0x0c, 0x02, 0x0000 },
    { 25, 0x0070, 0x0c000050, 0x0d, 0x02, 0x0000 },
    { 25, 0x0070, 0x0c000050, 0x0e, 0x02, 0x0000 },
    { 25, 0x0070, 0x0c000050, 0x0f, 0x02, 0x0000 },
    { 26, 0x005b, 0x0000005b, 0x00, 0x00, 0x0000 },
    { 26, 0x007b, 0x0000007b, 0x01, 0x00, 0x0000 },
    { 26, 0xffff, 0x01000000, 0x04, 0x00, 0x0000 },
    { 27, 0x005d, 0x0000005d, 0x00, 0x00, 0x0000 },
    { 27, 0x007d, 0x0000007d, 0x01, 0x00, 0x0000 },
    { 27, 0x007e, 0x0000007e, 0x02, 0x00, 0x0000 },
    { 27, 0x005d, 0x0400005d, 0x04, 0x00, 0x0000 },
    { 28, 0xffff, 0x01000004, 0x00, 0x00, 0x0000 },
    { 28, 0x006d, 0x0c00004d, 0x08, 0x00, 0x0000 },
    { 29, 0xffff, 0x01000021, 0x00, 0x04, 0x0004 },
    { 30, 0x0061, 0x00000041, 0x00, 0x02, 0x0000 },
    { 30, 0x0041, 0x00000041, 0x01, 0x02, 0x0000 },
    { 30, 0x0061, 0x00000041, 0x02, 0x02, 0x0000 },
    { 30, 0x0041, 0x00000041, 0x03, 0x02, 0x0000 },
    { 30, 0x0061, 0x04000041, 0x04, 0x02, 0x0000 },
    { 30, 0x0061, 0x04000041, 0x05, 0x02, 0x0000 },
    { 30, 0x0061, 0x04000041, 0x06, 0x02, 0x0000 },
    { 30, 0x0061, 0x04000041, 0x07, 0x02, 0x0000 },
    { 30, 0x0061, 0x08000041, 0x08, 0x02, 0x0000 },
    { 30, 0x0061, 0x08000041, 0x09, 0x02, 0x0000 },
    { 30, 0x0061, 0x08000041, 0x0a, 0x02, 0x0000 },
    { 30, 0x0061, 0x08000041, 0x0b, 0x02, 0x0000 },
    { 30, 0x0061, 0x0c000041, 0x0c, 0x02, 0x0000 },
    { 30, 0x0061, 0x0c000041, 0x0d, 0x02, 0x0000 },
    { 30, 0x0061, 0x0c000041, 0x0e, 0x02, 0x0000 },
    { 30, 0x0061, 0x0c000041, 0x0f, 0x02, 0x0000 },
    { 31, 0x0073, 0x00000053, 0x00, 0x02, 0x0000 },
    { 31, 0x0053, 0x00000053, 0x01, 0x02, 0x0000 },
    { 31, 0x0073, 0x00000053, 0x02, 0x02, 0x0000 },
    { 31, 0x0053, 0x00000053, 0x03, 0x02, 0x0000 },
    { 31, 0x0073, 0x04000053, 0x04, 0x02, 0x0000 },
    { 31, 0x0073, 0x04000053, 0x05, 0x02, 0x0000 },
    { 31, 0x0073, 0x04000053, 0x06, 0x02, 0x0000 },
    { 31, 0x0073, 0x04000053, 0x07, 0x02, 0x0000 },
    { 31, 0x0073, 0x08000053, 0x08, 0x02, 0x0000 },
    { 31, 0x0073, 0x08000053, 0x09, 0x02, 0x0000 },
    { 31, 0x0073, 0x08000053, 0x0a, 0x02, 0x0000 },
    { 31, 0x0073, 0x08000053, 0x0b, 0x02, 0x0000 },
    { 31, 0x0073, 0x0c000053, 0x0c, 0x02, 0x0000 },
    { 31, 0x0073, 0x0c000053, 0x0d, 0x02, 0x0000 },
    { 31, 0x0073, 0x0c000053, 0x0e, 0x02, 0x0000 },
    { 31, 0x0073, 0x0c000053, 0x0f, 0x02, 0x0000 },
    { 32, 0x0064, 0x00000044, 0x00, 0x02, 0x0000 },
    { 32, 0x0044, 0x00000044, 0x01, 0x02, 0x0000 },
    { 32, 0x0064, 0x00000044, 0x02, 0x02, 0x0000 },
    { 32, 0x0044, 0x00000044, 0x03, 0x02, 0x0000 },
    { 32, 0x0064, 0x04000044, 0x04, 0x02, 0x0000 },
    { 32, 0x0064, 0x04000044, 0x05, 0x02, 0x0000 },
    { 32, 0x0064, 0x04000044, 0x06, 0x02, 0x0000 },
    { 32, 0x0064, 0x04000044, 0x07, 0x02, 0x0000 },
    { 32, 0x0064, 0x08000044, 0x08, 0x02, 0x0000 },
    { 32, 0x0064, 0x08000044, 0x09, 0x02, 0x0000 },
    { 32, 0x0064, 0x08000044, 0x0a, 0x02, 0x0000 },
    { 32, 0x0064, 0x08000044, 0x0b, 0x02, 0x0000 },
    { 32, 0x0064, 0x0c000044, 0x0c, 0x02, 0x0000 },
    { 32, 0x0064, 0x0c000044, 0x0d, 0x02, 0x0000 },
    { 32, 0x0064, 0x0c000044, 0x0e, 0x02, 0x0000 },
    { 32, 0x0064, 0x0c000044, 0x0f, 0x02, 0x0000 },
    { 33, 0x0066, 0x00000046, 0x00, 0x02, 0x0000 },
    { 33, 0x0046, 0x00000046, 0x01, 0x02, 0x0000 },
    { 33, 0x0066, 0x00000046, 0x02, 0x02, 0x0000 },
    { 33, 0x0046, 0x00000046, 0x03, 0x02, 0x0000 },
    { 33, 0x0066, 0x04000046, 0x04, 0x02, 0x0000 },
    { 33, 0x0066, 0x04000046, 0x05, 0x02, 0x0000 },
    { 33, 0x0066, 0x04000046, 0x06, 0x02, 0x0000 },
    { 33, 0x0066, 0x04000046, 0x07, 0x02, 0x0000 },
    { 33, 0x0066, 0x08000046, 0x08, 0x02, 0x0000 },
    { 33, 0x0066, 0x08000046, 0x09, 0x02, 0x0000 },
    { 33, 0x0066, 0x08000046, 0x0a, 0x02, 0x0000 },
    { 33, 0x0066, 0x08000046, 0x0b, 0x02, 0x0000 },
    { 33, 0x0066, 0x0c000046, 0x0c, 0x02, 0x0000 },
    { 33, 0x0066, 0x0c000046, 0x0d, 0x02, 0x0000 },
    { 33, 0x0066, 0x0c000046, 0x0e, 0x02, 0x0000 },
    { 33, 0x0066, 0x0c000046, 0x0f, 0x02, 0x0000 },
    { 34, 0x0067, 0x00000047, 0x00, 0x02, 0x0000 },
    { 34, 0x0047, 0x00000047, 0x01, 0x02, 0x0000 },
    { 34, 0x0067, 0x00000047, 0x02, 0x02, 0x0000 },
    { 34, 0x0047, 0x00000047, 0x03, 0x02, 0x0000 },
    { 34, 0x0067, 0x04000047, 0x04, 0x02, 0x0000 },
    { 34, 0x0067, 0x04000047, 0x05, 0x02, 0x0000 },
    { 34, 0x0067, 0x04000047, 0x06, 0x02, 0x0000 },
    { 34, 0x0067, 0x04000047, 0x07, 0x02, 0x0000 },
    { 34, 0x0067, 0x08000047, 0x08, 0x02, 0x0000 },
    { 34, 0x0067, 0x08000047, 0x09, 0x02, 0x0000 },
    { 34, 0x0067, 0x08000047, 0x0a, 0x02, 0x0000 },
    { 34, 0x0067, 0x08000047, 0x0b, 0x02, 0x0000 },
    { 34, 0x0067, 0x0c000047, 0x0c, 0x02, 0x0000 },
    { 34, 0x0067, 0x0c000047, 0x0d, 0x02, 0x0000 },
    { 34, 0x0067, 0x0c000047, 0x0e, 0x02, 0x0000 },
    { 34, 0x0067, 0x0c000047, 0x0f, 0x02, 0x0000 },
    { 35, 0x0068, 0x00000048, 0x00, 0x02, 0x0000 },
    { 35, 0x0048, 0x00000048, 0x01, 0x02, 0x0000 },
    { 35, 0x0068, 0x00000048, 0x02, 0x02, 0x0000 },
    { 35, 0x0048, 0x00000048, 0x03, 0x02, 0x0000 },
    { 35, 0x0068, 0x04000048, 0x04, 0x02, 0x0000 },
    { 35, 0x0068, 0x04000048, 0x05, 0x02, 0x0000 },
    { 35, 0x0068, 0x04000048, 0x06, 0x02, 0x0000 },
    { 35, 0x0068, 0x04000048, 0x07, 0x02, 0x0000 },
    { 35, 0x0068, 0x08000048, 0x08, 0x02, 0x0000 },
    { 35, 0x0068, 0x08000048, 0x09, 0x02, 0x0000 },
    { 35, 0x0068, 0x08000048, 0x0a, 0x02, 0x0000 },
    { 35, 0x0068, 0x08000048, 0x0b, 0x02, 0x0000 },
    { 35, 0x0068, 0x0c000048, 0x0c, 0x02, 0x0000 },
    { 35, 0x0068, 0x0c000048, 0x0d, 0x02, 0x0000 },
    { 35, 0x0068, 0x0c000048, 0x0e, 0x02, 0x0000 },
    { 35, 0x0068, 0x0c000048, 0x0f, 0x02, 0x0000 },
    { 36, 0x006a, 0x0000004a, 0x00, 0x02, 0x0000 },
    { 36, 0x004a, 0x0000004a, 0x01, 0x02, 0x0000 },
    { 36, 0x006a, 0x0000004a, 0x02, 0x02, 0x0000 },
    { 36, 0x004a, 0x0000004a, 0x03, 0x02, 0x0000 },
    { 36, 0x006a, 0x0400004a, 0x04, 0x02, 0x0000 },
    { 36, 0x006a, 0x0400004a, 0x05, 0x02, 0x0000 },
    { 36, 0x006a, 0x0400004a, 0x06, 0x02, 0x0000 },
    { 36, 0x006a, 0x0400004a, 0x07, 0x02, 0x0000 },
    { 36, 0x006a, 0x0800004a, 0x08, 0x02, 0x0000 },
    { 36, 0x006a, 0x0800004a, 0x09, 0x02, 0x0000 },
    { 36, 0x006a, 0x0800004a, 0x0a, 0x02, 0x0000 },
    { 36, 0x006a, 0x0800004a, 0x0b, 0x02, 0x0000 },
    { 36, 0x006a, 0x0c00004a, 0x0c, 0x02, 0x0000 },
    { 36, 0x006a, 0x0c00004a, 0x0d, 0x02, 0x0000 },
    { 36, 0x006a, 0x0c00004a, 0x0e, 0x02, 0x0000 },
    { 36, 0x006a, 0x0c00004a, 0x0f, 0x02, 0x0000 },
    { 37, 0x006b, 0x0000004b, 0x00, 0x02, 0x0000 },
    { 37, 0x004b, 0x0000004b, 0x01, 0x02, 0x0000 },
    { 37, 0x006b, 0x0000004b, 0x02, 0x02, 0x0000 },
    { 37, 0x004b, 0x0000004b, 0x03, 0x02, 0x0000 },
    { 37, 0x006b, 0x0400004b, 0x04, 0x02, 0x0000 },
    { 37, 0x006b, 0x0400004b, 0x05, 0x02, 0x0000 },
    { 37, 0x006b, 0x0400004b, 0x06, 0x02, 0x0000 },
    { 37, 0x006b, 0x0400004b, 0x07, 0x02, 0x0000 },
    { 37, 0x006b, 0x0800004b, 0x08, 0x02, 0x0000 },
    { 37, 0x006b, 0x0800004b, 0x09, 0x02, 0x0000 },
    { 37, 0x006b, 0x0800004b, 0x0a, 0x02, 0x0000 },
    { 37, 0x006b, 0x0800004b, 0x0b, 0x02, 0x0000 },
    { 37, 0x006b, 0x0c00004b, 0x0c, 0x02, 0x0000 },
    { 37, 0x006b, 0x0c00004b, 0x0d, 0x02, 0x0000 },
    { 37, 0x006b, 0x0c00004b, 0x0e, 0x02, 0x0000 },
    { 37, 0x006b, 0x0c00004b, 0x0f, 0x02, 0x0000 },
    { 38, 0x006c, 0x0000004c, 0x00, 0x02, 0x0000 },
    { 38, 0x004c, 0x0000004c, 0x01, 0x02, 0x0000 },
    { 38, 0x006c, 0x0000004c, 0x02, 0x02, 0x0000 },
    { 38, 0x004c, 0x0000004c, 0x03, 0x02, 0x0000 },
    { 38, 0x006c, 0x0400004c, 0x04, 0x02, 0x0000 },
    { 38, 0x006c, 0x0400004c, 0x05, 0x02, 0x0000 },
    { 38, 0x006c, 0x0400004c, 0x06, 0x02, 0x0000 },
    { 38, 0x006c, 0x0400004c, 0x07, 0x02, 0x0000 },
    { 38, 0x006c, 0x0800004c, 0x08, 0x02, 0x0000 },
    { 38, 0x006c, 0x0800004c, 0x09, 0x02, 0x0000 },
    { 38, 0x006c, 0x0800004c, 0x0a, 0x02, 0x0000 },
    { 38, 0x006c, 0x0800004c, 0x0b, 0x02, 0x0000 },
    { 38, 0x006c, 0x0c00004c, 0x0c, 0x02, 0x0000 },
    { 38, 0x006c, 0x0c00004c, 0x0d, 0x02, 0x0000 },
    { 38, 0x006c, 0x0c00004c, 0x0e, 0x02, 0x0000 },
    { 38, 0x006c, 0x0c00004c, 0x0f, 0x02, 0x0000 },
    { 39, 0x003b, 0x0000003b, 0x00, 0x00, 0x0000 },
    { 39, 0x003a, 0x0000003a, 0x01, 0x00, 0x0000 },
    { 40, 0x0027, 0x00000027, 0x00, 0x00, 0x0000 },
    { 40, 0x0022, 0x00000022, 0x01, 0x00, 0x0000 },
    { 40, 0x0027, 0x01001251, 0x02, 0x01, 0x0000 },
    { 40, 0x0022, 0x01001257, 0x03, 0x01, 0x0000 },
    { 40, 0x0067, 0x04000047, 0x04, 0x00, 0x0000 },
    { 41, 0x0060, 0x00000060, 0x00, 0x00, 0x0000 },
    { 41, 0x007e, 0x0000007e, 0x01, 0x00, 0x0000 },
    { 41, 0x0060, 0x01001250, 0x02, 0x01, 0x0000 },
    { 41, 0x007e, 0x01001253, 0x03, 0x01, 0x0000 },
    { 42, 0xffff, 0x01000020, 0x00, 0x04, 0x0001 },
    { 43, 0x005c, 0x0000005c, 0x00, 0x00, 0x0000 },
    { 43, 0x007c, 0x0000007c, 0x01, 0x00, 0x0000 },
    { 43, 0x005c, 0x0400005c, 0x04, 0x00, 0x0000 },
    { 44, 0x007a, 0x0000005a, 0x00, 0x02, 0x0000 },
    { 44, 0x005a, 0x0000005a, 0x01, 0x02, 0x0000 },
    { 44, 0x007a, 0x0000005a, 0x02, 0x02, 0x0000 },
    { 44, 0x005a, 0x0000005a, 0x03, 0x02, 0x0000 },
    { 44, 0x007a, 0x0400005a, 0x04, 0x02, 0x0000 },
    { 44, 0x007a, 0x0400005a, 0x05, 0x02, 0x0000 },
    { 44, 0x007a, 0x0400005a, 0x06, 0x02, 0x0000 },
    { 44, 0x007a, 0x0400005a, 0x07, 0x02, 0x0000 },
    { 44, 0x007a, 0x0800005a, 0x08, 0x02, 0x0000 },
    { 44, 0x007a, 0x0800005a, 0x09, 0x02, 0x0000 },
    { 44, 0x007a, 0x0800005a, 0x0a, 0x02, 0x0000 },
    { 44, 0x007a, 0x0800005a, 0x0b, 0x02, 0x0000 },
    { 44, 0x007a, 0x0c00005a, 0x0c, 0x02, 0x0000 },
    { 44, 0x007a, 0x0c00005a, 0x0d, 0x02, 0x0000 },
    { 44, 0x007a, 0x0c00005a, 0x0e, 0x02, 0x0000 },
    { 44, 0x007a, 0x0c00005a, 0x0f, 0x02, 0x0000 },
    { 45, 0x0078, 0x00000058, 0x00, 0x02, 0x0000 },
    { 45, 0x0058, 0x00000058, 0x01, 0x02, 0x0000 },
    { 45, 0x0078, 0x00000058, 0x02, 0x02, 0x0000 },
    { 45, 0x0058, 0x00000058, 0x03, 0x02, 0x0000 },
    { 45, 0x0078, 0x04000058, 0x04, 0x02, 0x0000 },
    { 45, 0x0078, 0x04000058, 0x05, 0x02, 0x0000 },
    { 45, 0x0078, 0x04000058, 0x06, 0x02, 0x0000 },
    { 45, 0x0078, 0x04000058, 0x07, 0x02, 0x0000 },
    { 45, 0x0078, 0x08000058, 0x08, 0x02, 0x0000 },
    { 45, 0x0078, 0x08000058, 0x09, 0x02, 0x0000 },
    { 45, 0x0078, 0x08000058, 0x0a, 0x02, 0x0000 },
    { 45, 0x0078, 0x08000058, 0x0b, 0x02, 0x0000 },
    { 45, 0x0078, 0x0c000058, 0x0c, 0x02, 0x0000 },
    { 45, 0x0078, 0x0c000058, 0x0d, 0x02, 0x0000 },
    { 45, 0x0078, 0x0c000058, 0x0e, 0x02, 0x0000 },
    { 45, 0x0078, 0x0c000058, 0x0f, 0x02, 0x0000 },
    { 46, 0x0063, 0x00000043, 0x00, 0x02, 0x0000 },
    { 46, 0x0043, 0x00000043, 0x01, 0x02, 0x0000 },
    { 46, 0x0063, 0x00000043, 0x02, 0x02, 0x0000 },
    { 46, 0x0043, 0x00000043, 0x03, 0x02, 0x0000 },
    { 46, 0x0063, 0x04000043, 0x04, 0x02, 0x0000 },
    { 46, 0x0063, 0x04000043, 0x05, 0x02, 0x0000 },
    { 46, 0x0063, 0x04000043, 0x06, 0x02, 0x0000 },
    { 46, 0x0063, 0x04000043, 0x07, 0x02, 0x0000 },
    { 46, 0x0063, 0x08000043, 0x08, 0x02, 0x0000 },
    { 46, 0x0063, 0x08000043, 0x09, 0x02, 0x0000 },
    { 46, 0x0063, 0x08000043, 0x0a, 0x02, 0x0000 },
    { 46, 0x0063, 0x08000043, 0x0b, 0x02, 0x0000 },
    { 46, 0x0063, 0x0c000043, 0x0c, 0x02, 0x0000 },
    { 46, 0x0063, 0x0c000043, 0x0d, 0x02, 0x0000 },
    { 46, 0x0063, 0x0c000043, 0x0e, 0x02, 0x0000 },
    { 46, 0x0063, 0x0c000043, 0x0f, 0x02, 0x0000 },
    { 47, 0x0076, 0x00000056, 0x00, 0x02, 0x0000 },
    { 47, 0x0056, 0x00000056, 0x01, 0x02, 0x0000 },
    { 47, 0x0076, 0x00000056, 0x02, 0x02, 0x0000 },
    { 47, 0x0056, 0x00000056, 0x03, 0x02, 0x0000 },
    { 47, 0x0076, 0x04000056, 0x04, 0x02, 0x0000 },
    { 47, 0x0076, 0x04000056, 0x05, 0x02, 0x0000 },
    { 47, 0x0076, 0x04000056, 0x06, 0x02, 0x0000 },
    { 47, 0x0076, 0x04000056, 0x07, 0x02, 0x0000 },
    { 47, 0x0076, 0x08000056, 0x08, 0x02, 0x0000 },
    { 47, 0x0076, 0x08000056, 0x09, 0x02, 0x0000 },
    { 47, 0x0076, 0x08000056, 0x0a, 0x02, 0x0000 },
    { 47, 0x0076, 0x08000056, 0x0b, 0x02, 0x0000 },
    { 47, 0x0076, 0x0c000056, 0x0c, 0x02, 0x0000 },
    { 47, 0x0076, 0x0c000056, 0x0d, 0x02, 0x0000 },
    { 47, 0x0076, 0x0c000056, 0x0e, 0x02, 0x0000 },
    { 47, 0x0076, 0x0c000056, 0x0f, 0x02, 0x0000 },
    { 48, 0x0062, 0x00000042, 0x00, 0x02, 0x0000 },
    { 48, 0x0042, 0x00000042, 0x01, 0x02, 0x0000 },
    { 48, 0x0062, 0x00000042, 0x02, 0x02, 0x0000 },
    { 48, 0x0042, 0x00000042, 0x03, 0x02, 0x0000 },
    { 48, 0x0062, 0x04000042, 0x04, 0x02, 0x0000 },
    { 48, 0x0062, 0x04000042, 0x05, 0x02, 0x0000 },
    { 48, 0x0062, 0x04000042, 0x06, 0x02, 0x0000 },
    { 48, 0x0062, 0x04000042, 0x07, 0x02, 0x0000 },
    { 48, 0x0062, 0x08000042, 0x08, 0x02, 0x0000 },
    { 48, 0x0062, 0x08000042, 0x09, 0x02, 0x0000 },
    { 48, 0x0062, 0x08000042, 0x0a, 0x02, 0x0000 },
    { 48, 0x0062, 0x08000042, 0x0b, 0x02, 0x0000 },
    { 48, 0x0062, 0x0c000042, 0x0c, 0x02, 0x0000 },
    { 48, 0x0062, 0x0c000042, 0x0d, 0x02, 0x0000 },
    { 48, 0x0062, 0x0c000042, 0x0e, 0x02, 0x0000 },
    { 48, 0x0062, 0x0c000042, 0x0f, 0x02, 0x0000 },
    { 49, 0x006e, 0x0000004e, 0x00, 0x02, 0x0000 },
    { 49, 0x004e, 0x0000004e, 0x01, 0x02, 0x0000 },
    { 49, 0x006e, 0x0000004e, 0x02, 0x02, 0x0000 },
    { 49, 0x004e, 0x0000004e, 0x03, 0x02, 0x0000 },
    { 49, 0x006e, 0x0400004e, 0x04, 0x02, 0x0000 },
    { 49, 0x006e, 0x0400004e, 0x05, 0x02, 0x0000 },
    { 49, 0x006e, 0x0400004e, 0x06, 0x02, 0x0000 },
    { 49, 0x006e, 0x0400004e, 0x07, 0x02, 0x0000 },
    { 49, 0x006e, 0x0800004e, 0x08, 0x02, 0x0000 },
    { 49, 0x006e, 0x0800004e, 0x09, 0x02, 0x0000 },
    { 49, 0x006e, 0x0800004e, 0x0a, 0x02, 0x0000 },
    { 49, 0x006e, 0x0800004e, 0x0b, 0x02, 0x0000 },
    { 49, 0x006e, 0x0c00004e, 0x0c, 0x02, 0x0000 },
    { 49, 0x006e, 0x0c00004e, 0x0d, 0x02, 0x0000 },
    { 49, 0x006e, 0x0c00004e, 0x0e, 0x02, 0x0000 },
    { 49, 0x006e, 0x0c00004e, 0x0f, 0x02, 0x0000 },
    { 50, 0x006d, 0x0000004d, 0x00, 0x02, 0x0000 },
    { 50, 0x004d, 0x0000004d, 0x01, 0x02, 0x0000 },
    { 50, 0x006d, 0x0000004d, 0x02, 0x02, 0x0000 },
    { 50, 0x004d, 0x0000004d, 0x03, 0x02, 0x0000 },
    { 50, 0x006d, 0x0400004d, 0x04, 0x02, 0x0000 },
    { 50, 0x006d, 0x0400004d, 0x05, 0x02, 0x0000 },
    { 50, 0x006d, 0x0400004d, 0x06, 0x02, 0x0000 },
    { 50, 0x006d, 0x0400004d, 0x07, 0x02, 0x0000 },
    { 50, 0x006d, 0x0800004d, 0x08, 0x02, 0x0000 },
    { 50, 0x006d, 0x0800004d, 0x09, 0x02, 0x0000 },
    { 50, 0x006d, 0x0800004d, 0x0a, 0x02, 0x0000 },
    { 50, 0x006d, 0x0800004d, 0x0b, 0x02, 0x0000 },
    { 50, 0x006d, 0x0c00004d, 0x0c, 0x02, 0x0000 },
    { 50, 0x006d, 0x0c00004d, 0x0d, 0x02, 0x0000 },
    { 50, 0x006d, 0x0c00004d, 0x0e, 0x02, 0x0000 },
    { 50, 0x006d, 0x0c00004d, 0x0f, 0x02, 0x0000 },
    { 51, 0x002c, 0x0000002c, 0x00, 0x00, 0x0000 },
    { 51, 0x003c, 0x0000003c, 0x01, 0x00, 0x0000 },
    { 51, 0x002c, 0x0100125b, 0x02, 0x01, 0x0000 },
    { 52, 0x002e, 0x0000002e, 0x00, 0x00, 0x0000 },
    { 52, 0x003e, 0x0000003e, 0x01, 0x00, 0x0000 },
    { 52, 0xffff, 0x01001120, 0x02, 0x00, 0x0000 },
    { 53, 0x002f, 0x0000002f, 0x00, 0x00, 0x0000 },
    { 53, 0x003f, 0x0000003f, 0x01, 0x00, 0x0000 },
    { 53, 0xffff, 0x01000003, 0x04, 0x00, 0x0000 },
    { 54, 0xffff, 0x01000020, 0x00, 0x04, 0x0001 },
    { 55, 0x002a, 0x2000002a, 0x00, 0x00, 0x0000 },
    { 56, 0xffff, 0x01000023, 0x00, 0x04, 0x0008 },
    { 57, 0x0020, 0x00000020, 0x00, 0x00, 0x0000 },
    { 58, 0xffff, 0x01000024, 0x00, 0x00, 0x0000 },
    { 59, 0xffff, 0x01000030, 0x00, 0x00, 0x0000 },
    { 59, 0xffff, 0x0100003c, 0x01, 0x00, 0x0000 },
    { 59, 0xffff, 0x01000048, 0x04, 0x00, 0x0000 },
    { 59, 0xffff, 0x01000000, 0x0c, 0x08, 0x0100 },
    { 60, 0xffff, 0x01000031, 0x00, 0x00, 0x0000 },
    { 60, 0xffff, 0x0100003d, 0x01, 0x00, 0x0000 },
    { 60, 0xffff, 0x01000049, 0x04, 0x00, 0x0000 },
    { 60, 0xffff, 0x01000000, 0x0c, 0x08, 0x0101 },
    { 61, 0xffff, 0x01000032, 0x00, 0x00, 0x0000 },
    { 61, 0xffff, 0x0100003e, 0x01, 0x00, 0x0000 },
    { 61, 0xffff, 0x0100004a, 0x04, 0x00, 0x0000 },
    { 61, 0xffff, 0x01000000, 0x0c, 0x08, 0x0102 },
    { 62, 0xffff, 0x01000033, 0x00, 0x00, 0x0000 },
    { 62, 0xffff, 0x0100003f, 0x01, 0x00, 0x0000 },
    { 62, 0xffff, 0x0100004b, 0x04, 0x00, 0x0000 },
    { 62, 0xffff, 0x01000000, 0x0c, 0x08, 0x0103 },
    { 63, 0xffff, 0x01000034, 0x00, 0x00, 0x0000 },
    { 63, 0xffff, 0x01000040, 0x01, 0x00, 0x0000 },
    { 63, 0xffff, 0x0100004c, 0x04, 0x00, 0x0000 },
    { 63, 0xffff, 0x01000000, 0x0c, 0x08, 0x0104 },
    { 64, 0xffff, 0x01000035, 0x00, 0x00, 0x0000 },
    { 64, 0xffff, 0x01000041, 0x01, 0x00, 0x0000 },
    { 64, 0xffff, 0x0100004d, 0x04, 0x00, 0x0000 },
    { 64, 0xffff, 0x01000000, 0x0c, 0x08, 0x0105 },
    { 65, 0xffff, 0x01000036, 0x00, 0x00, 0x0000 },
    { 65, 0xffff, 0x01000042, 0x01, 0x00, 0x0000 },
    { 65, 0xffff, 0x0100004e, 0x04, 0x00, 0x0000 },
    { 65, 0xffff, 0x01000000, 0x0c, 0x08, 0x0106 },
    { 66, 0xffff, 0x01000037, 0x00, 0x00, 0x0000 },
    { 66, 0xffff, 0x01000043, 0x01, 0x00, 0x0000 },
    { 66, 0xffff, 0x0100004f, 0x04, 0x00, 0x0000 },
    { 66, 0xffff, 0x01000000, 0x0c, 0x08, 0x0107 },
    { 67, 0xffff, 0x01000038, 0x00, 0x00, 0x0000 },
    { 67, 0xffff, 0x01000044, 0x01, 0x00, 0x0000 },
    { 67, 0xffff, 0x01000050, 0x04, 0x00, 0x0000 },
    { 67, 0xffff, 0x01000000, 0x0c, 0x08, 0x0108 },
    { 68, 0xffff, 0x01000039, 0x00, 0x00, 0x0000 },
    { 68, 0xffff, 0x01000045, 0x01, 0x00, 0x0000 },
    { 68, 0xffff, 0x01000051, 0x04, 0x00, 0x0000 },
    { 68, 0xffff, 0x01000000, 0x0c, 0x08, 0x0109 },
    { 69, 0xffff, 0x01000025, 0x00, 0x00, 0x0000 },
    { 70, 0xffff, 0x01000026, 0x00, 0x00, 0x0000 },
    { 70, 0xffff, 0x01000026, 0x08, 0x00, 0x0000 },
    { 71, 0x0037, 0x20000037, 0x00, 0x00, 0x0000 },
    { 72, 0x0038, 0x20000038, 0x00, 0x00, 0x0000 },
    { 73, 0x0039, 0x20000039, 0x00, 0x00, 0x0000 },
    { 74, 0x002d, 0x2000002d, 0x00, 0x00, 0x0000 },
    { 75, 0x0034, 0x20000034, 0x00, 0x00, 0x0000 },
    { 76, 0x0035, 0x20000035, 0x00, 0x00, 0x0000 },
    { 77, 0x0036, 0x20000036, 0x00, 0x00, 0x0000 },
    { 78, 0x002b, 0x2000002b, 0x00, 0x00, 0x0000 },
    { 79, 0x0031, 0x20000031, 0x00, 0x00, 0x0000 },
    { 80, 0x0032, 0x20000032, 0x00, 0x00, 0x0000 },
    { 81, 0x0033, 0x20000033, 0x00, 0x00, 0x0000 },
    { 82, 0x0030, 0x20000030, 0x00, 0x00, 0x0000 },
    { 83, 0x002e, 0x2000002e, 0x00, 0x00, 0x0000 },
    { 83, 0xffff, 0x01000000, 0x06, 0x08, 0x0200 },
    { 83, 0xffff, 0x01000000, 0x0c, 0x08, 0x0200 },
    { 86, 0x003c, 0x0000003c, 0x00, 0x00, 0x0000 },
    { 86, 0x003e, 0x0000003e, 0x01, 0x00, 0x0000 },
    { 86, 0x007c, 0x0000007c, 0x02, 0x00, 0x0000 },
    { 87, 0xffff, 0x0100003a, 0x00, 0x00, 0x0000 },
    { 87, 0xffff, 0x01000046, 0x01, 0x00, 0x0000 },
    { 87, 0xffff, 0x01000052, 0x04, 0x00, 0x0000 },
    { 87, 0xffff, 0x01000000, 0x0c, 0x08, 0x010a },
    { 88, 0xffff, 0x0100003b, 0x00, 0x00, 0x0000 },
    { 88, 0xffff, 0x01000047, 0x01, 0x00, 0x0000 },
    { 88, 0xffff, 0x01000000, 0x0c, 0x08, 0x010b },
    { 96, 0xffff, 0x21000005, 0x00, 0x00, 0x0000 },
    { 97, 0xffff, 0x01000021, 0x00, 0x04, 0x0004 },
    { 98, 0x002f, 0x2000002f, 0x00, 0x00, 0x0000 },
    { 99, 0x005c, 0x0400005c, 0x00, 0x00, 0x0000 },
    { 100, 0xffff, 0x01001103, 0x00, 0x04, 0x0002 },
    { 102, 0xffff, 0x01000010, 0x00, 0x00, 0x0000 },
    { 103, 0xffff, 0x01000013, 0x00, 0x00, 0x0000 },
    { 104, 0xffff, 0x01000016, 0x00, 0x00, 0x0000 },
    { 105, 0xffff, 0x01000012, 0x00, 0x00, 0x0000 },
    { 105, 0xffff, 0x01000000, 0x0c, 0x08, 0x0180 },
    { 106, 0xffff, 0x01000014, 0x00, 0x00, 0x0000 },
    { 106, 0xffff, 0x01000000, 0x0c, 0x08, 0x0181 },
    { 107, 0xffff, 0x01000011, 0x00, 0x00, 0x0000 },
    { 108, 0xffff, 0x01000015, 0x00, 0x00, 0x0000 },
    { 109, 0xffff, 0x01000017, 0x00, 0x00, 0x0000 },
    { 110, 0xffff, 0x01000006, 0x00, 0x00, 0x0000 },
    { 111, 0xffff, 0x01000007, 0x00, 0x00, 0x0000 },
    { 111, 0xffff, 0x01000000, 0x06, 0x08, 0x0200 },
    { 111, 0xffff, 0x01000000, 0x0c, 0x08, 0x0200 },

    // 113 -> 248
    { KEY_MUTE, 0xffff, Qt::Key_VolumeMute, 0x00, 0x00, 0x0000 },
    { KEY_VOLUMEDOWN, 0xffff, Qt::Key_VolumeDown, 0x00, 0x00, 0x0000 },
    { KEY_VOLUMEUP, 0xffff, Qt::Key_VolumeUp, 0x00, 0x00, 0x0000 },
    { KEY_POWER, 0xffff, Qt::Key_PowerOff, 0x00, 0x00, 0x0000 },
    { KEY_PAUSE, 0xffff, Qt::Key_Pause, 0x00, 0x00, 0x0000 },
    { KEY_STOP, 0xffff, Qt::Key_Stop, 0x00, 0x00, 0x0000 },
    { KEY_SETUP, 0xffff, Qt::Key_Settings, 0x00, 0x00, 0x0000 },
    { KEY_RECORD, 0xffff, Qt::Key_MediaRecord, 0x00, 0x00, 0x0000 },
    { KEY_REWIND, 0xffff, Qt::Key_AudioRewind, 0x00, 0x00, 0x0000 },
    { KEY_PLAYPAUSE, 0xffff, Qt::Key_MediaTogglePlayPause, 0x00, 0x00, 0x0000 },
    { KEY_PLAY, 0xffff, Qt::Key_MediaPlay, 0x00, 0x00, 0x0000 },
    { KEY_FASTFORWARD, 0xffff, Qt::Key_AudioForward, 0x00, 0x00, 0x0000 },
    { KEY_CANCEL, 0xffff, Qt::Key_Cancel, 0x00, 0x00, 0x0000 },
    { 248, 0xffff, Qt::Key_MicMute, 0x00, 0x00, 0x0000 },
    // 0x160 ->
    { KEY_SELECT, 0xffff, Qt::Key_Select, 0x00, 0x00, 0x0000 },
    { KEY_CLEAR, 0xffff, Qt::Key_Clear, 0x00, 0x00, 0x0000 },
    { KEY_EXIT, 0xffff, Qt::Key_Exit, 0x00, 0x00, 0x0000 },
    { KEY_INFO, 0xffff, Qt::Key_Info, 0x00, 0x00, 0x0000 },
    { KEY_PROGRAM, 0xffff, Qt::Key_Guide, 0x00, 0x00, 0x0000 },
    { KEY_CALENDAR, 0xffff, Qt::Key_Calendar, 0x00, 0x00, 0x0000 },
    { KEY_RED, 0xffff, Qt::Key_Red, 0x00, 0x00, 0x0000 },
    { KEY_GREEN, 0xffff, Qt::Key_Green, 0x00, 0x00, 0x0000 },
    { KEY_YELLOW, 0xffff, Qt::Key_Yellow, 0x00, 0x00, 0x0000 },
    { KEY_BLUE, 0xffff, Qt::Key_Blue, 0x00, 0x00, 0x0000 },
    { KEY_CHANNELUP, 0xffff, Qt::Key_ChannelUp, 0x00, 0x00, 0x0000 },
    { KEY_CHANNELDOWN, 0xffff, Qt::Key_ChannelDown, 0x00, 0x00, 0x0000 },
};

const QEvdevKeyboardMap::Composing QEvdevKeyboardHandler::s_keycompose_default[] = {
    { 0x0060, 0x0041, 0x00c0 },
    { 0x0060, 0x0061, 0x00e0 },
    { 0x0027, 0x0041, 0x00c1 },
    { 0x0027, 0x0061, 0x00e1 },
    { 0x005e, 0x0041, 0x00c2 },
    { 0x005e, 0x0061, 0x00e2 },
    { 0x007e, 0x0041, 0x00c3 },
    { 0x007e, 0x0061, 0x00e3 },
    { 0x0022, 0x0041, 0x00c4 },
    { 0x0022, 0x0061, 0x00e4 },
    { 0x002d, 0x0061, 0x00aa },
    { 0x002d, 0x0041, 0x00aa },
    { 0x004f, 0x0041, 0x00c5 },
    { 0x006f, 0x0061, 0x00e5 },
    { 0x0030, 0x0041, 0x00c5 },
    { 0x0030, 0x0061, 0x00e5 },
    { 0x0041, 0x0041, 0x00c5 },
    { 0x0061, 0x0061, 0x00e5 },
    { 0x00b0, 0x0041, 0x00c5 },
    { 0x00b0, 0x0061, 0x00e5 },
    { 0x0041, 0x0045, 0x00c6 },
    { 0x0061, 0x0065, 0x00e6 },
    { 0x002c, 0x0043, 0x00c7 },
    { 0x002c, 0x0063, 0x00e7 },
    { 0x005e, 0x0043, 0x00c7 },
    { 0x005e, 0x0063, 0x00e7 },
    { 0x0060, 0x0045, 0x00c8 },
    { 0x0060, 0x0065, 0x00e8 },
    { 0x0027, 0x0045, 0x00c9 },
    { 0x0027, 0x0065, 0x00e9 },
    { 0x005e, 0x0045, 0x00ca },
    { 0x005e, 0x0065, 0x00ea },
    { 0x0022, 0x0045, 0x00cb },
    { 0x0022, 0x0065, 0x00eb },
    { 0x0060, 0x0049, 0x00cc },
    { 0x0060, 0x0069, 0x00ec },
    { 0x0027, 0x0049, 0x00cd },
    { 0x0027, 0x0069, 0x00ed },
    { 0x005e, 0x0049, 0x00ce },
    { 0x005e, 0x0069, 0x00ee },
    { 0x0022, 0x0049, 0x00cf },
    { 0x0022, 0x0069, 0x00ef },
    { 0x002d, 0x0044, 0x00d0 },
    { 0x002d, 0x0064, 0x00f0 },
    { 0x005e, 0x0044, 0x00d0 },
    { 0x005e, 0x0064, 0x00f0 },
    { 0x007e, 0x004e, 0x00d1 },
    { 0x007e, 0x006e, 0x00f1 },
    { 0x005e, 0x004e, 0x00d1 },
    { 0x005e, 0x006e, 0x00f1 },
    { 0x0060, 0x004f, 0x00d2 },
    { 0x0060, 0x006f, 0x00f2 },
    { 0x0027, 0x004f, 0x00d3 },
    { 0x0027, 0x006f, 0x00f3 },
    { 0x005e, 0x004f, 0x00d4 },
    { 0x005e, 0x006f, 0x00f4 },
    { 0x007e, 0x004f, 0x00d5 },
    { 0x007e, 0x006f, 0x00f5 },
    { 0x0022, 0x004f, 0x00d6 },
    { 0x0022, 0x006f, 0x00f6 },
    { 0x002f, 0x004f, 0x00d8 },
    { 0x002f, 0x006f, 0x00f8 },
    { 0x002d, 0x006f, 0x00ba },
    { 0x002d, 0x004f, 0x00ba },
    { 0x0060, 0x0055, 0x00d9 },
    { 0x0060, 0x0075, 0x00f9 },
    { 0x0027, 0x0055, 0x00da },
    { 0x0027, 0x0075, 0x00fa },
    { 0x005e, 0x0055, 0x00db },
    { 0x005e, 0x0075, 0x00fb },
    { 0x0022, 0x0055, 0x00dc },
    { 0x0022, 0x0075, 0x00fc },
    { 0x0027, 0x0059, 0x00dd },
    { 0x0027, 0x0079, 0x00fd },
    { 0x0054, 0x0048, 0x00de },
    { 0x0074, 0x0068, 0x00fe },
    { 0x0073, 0x0073, 0x00df },
    { 0x0022, 0x0079, 0x00ff },
    { 0x0073, 0x007a, 0x00df },
    { 0x006e, 0x006e, 0x00f1 },
    { 0x006e, 0x0068, 0x00f1 },
    { 0x004e, 0x0059, 0x00d1 },
    { 0x004e, 0x004e, 0x00d1 },
    { 0x004e, 0x0048, 0x00d1 },
    { 0x004e, 0x0079, 0x00d1 },
    { 0x004e, 0x006e, 0x00d1 },
    { 0x004e, 0x0068, 0x00d1 },
    { 0x002d, 0x004c, 0x00a3 },
    { 0x003c, 0x003c, 0x00ab },
    { 0x003e, 0x003e, 0x00bb },
    { 0x003f, 0x003f, 0x00bf },
    { 0x005e, 0x003f, 0x00bf },
    { 0x0021, 0x0021, 0x00a1 },
    { 0x005e, 0x0021, 0x00a1 },
    { 0x005e, 0x0031, 0x00b9 },
    { 0x005e, 0x0032, 0x00b2 },
    { 0x005e, 0x0033, 0x00b3 },
    { 0x002b, 0x002d, 0x00b1 },
    { 0x0063, 0x003d, 0x00a2 },
    { 0x0063, 0x002f, 0x00a2 },
    { 0x002f, 0x0063, 0x00a2 },
    { 0x002d, 0x0063, 0x00a2 },
    { 0x002d, 0x0043, 0x00a2 },
    { 0x004c, 0x003d, 0x00a3 },
    { 0x002d, 0x004c, 0x00a3 },
    { 0x002d, 0x006c, 0x00a3 },
    { 0x005e, 0x002a, 0x00d7 },
    { 0x005e, 0x0078, 0x00d7 },
    { 0x0078, 0x0078, 0x00d7 },
    { 0x005e, 0x002e, 0x00b7 },
    { 0x002e, 0x002e, 0x00b7 },
    { 0x005e, 0x002f, 0x00f7 },
    { 0x005e, 0x003a, 0x00f7 },
    { 0x002d, 0x003a, 0x00f7 },
    { 0x003a, 0x002d, 0x00f7 },
    { 0x0059, 0x003d, 0x00a5 },
    { 0x002d, 0x0059, 0x00a5 },
    { 0x002d, 0x006c, 0x00a5 },
    { 0x0028, 0x0063, 0x00a9 },
    { 0x0022, 0x0063, 0x00a9 },
    { 0x002d, 0x0061, 0x00aa },
    { 0x002d, 0x0041, 0x00aa },
    { 0x002d, 0x006f, 0x00ba },
    { 0x002d, 0x004f, 0x00ba },
    { 0x0028, 0x0072, 0x00ae },
    { 0x0022, 0x0072, 0x00ae },
    { 0x006d, 0x0075, 0x00b5 },
    { 0x0031, 0x0034, 0x0152 },
    { 0x0031, 0x0032, 0x0153 },
    { 0x0033, 0x0034, 0x0178 },
    { 0x0065, 0x003d, 0x20ac },
    { 0x002d, 0x0065, 0x20ac },
    { 0x002d, 0x0045, 0x20ac },
    { 0x0076, 0x0053, 0x0160 },
    { 0x005e, 0x0053, 0x0160 },
    { 0x0076, 0x0073, 0x0161 },
    { 0x005e, 0x0073, 0x0161 },
    { 0x0076, 0x005a, 0x017d },
    { 0x005e, 0x005a, 0x017d },
    { 0x0076, 0x007a, 0x017e },
    { 0x005e, 0x007a, 0x017e },
    { 0x004f, 0x0045, 0x0152 },
    { 0x004f, 0x0065, 0x0152 },
    { 0x006f, 0x0065, 0x0153 },
    { 0x0022, 0x0059, 0x0178 },
    { 0x0069, 0x006a, 0x00ff },
    { 0x0049, 0x004a, 0x0178 },
};

#endif // QEVDEVKEYBOARDHANDLER_DEFAULTMAP_P_H

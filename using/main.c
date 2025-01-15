// Author                 : Seityagiya Terlekchi
// Contacts               : terlekchiseityaya@gmail.com
// Creation Date          : 2024.10
// License Link           : https://spdx.org/licenses/LGPL-2.1-or-later.html
// SPDX-License-Identifier: LGPL-2.1-or-later
// Copyright © 2024-2025 Seityagiya Terlekchi. All rights reserved.

#include "my_math.h"
#include "stdio.h"

int main(int argc, char* argv[]) {
    (void)(argc);
    (void)(argv);

    printf("%s\n", "Hello, World!");

    int a = my_mul(1, my_dif(4, 3));
    printf("%d\n", a);
    return 0;
}

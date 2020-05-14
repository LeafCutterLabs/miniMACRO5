#pragma once

#include "quantum.h"

#define LAYOUT_ortho_1x6( \
    k01, k02, k03, k04, k05, k06\
  ) { \
    { k01, k02, k03, k04, k05, k06 } \
}

#define LAYOUT LAYOUT_ortho_1x6 

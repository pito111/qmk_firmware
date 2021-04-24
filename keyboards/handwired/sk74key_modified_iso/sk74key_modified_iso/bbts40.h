#ifndef HANDWIRED_SK74KEY_MODIFIED_ISO_SK74KEY_MODIFIED_ISO_H
#define HANDWIRED_SK74KEY_MODIFIED_ISO_SK74KEY_MODIFIED_ISO_H
// clang-format off

#include "quantum.h"

#define ___ KC_NO

#define LAYOUT(                                                     \
	k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B,          \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B,          \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B,          \
                                                                k3C,     \
                                                                    k4D  \
) {                                                                 \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, ___, ___ }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, ___, ___ }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, ___, ___ }, \
    { ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, k3C, ___ }, \
    { ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, k4D }, \
}

// This a shortcut to help you visually see your layout.
// The first section contains all of the arguments as on the physical keyboard
// The second converts the arguments into the 2-D scanned array
// clang-format off

// TODO: why does LAYOUT_pretty exist?
// can we remove it?

#define LAYOUT_pretty(                                              \
	k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B,          \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B,          \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B,          \
                                                                k3C,     \
                                                                    k4D  \
) {                                                                 \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, ___, ___ }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, ___, ___ }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, ___, ___ }, \
    { ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, k3C, ___ }, \
    { ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, k4D }, \
}

// clang-format on

typedef struct {
    uint32_t start;
    uint32_t sof;
    uint32_t report;
} measurement_t;

extern volatile measurement_t measurement;

#endif

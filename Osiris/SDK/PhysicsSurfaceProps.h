#pragma once

#include <cstddef>

#include "VirtualMethod.h"

struct SurfaceData {
    std::byte pad[80];
    float maxspeedfactor;
    float jumpfactor;
    float penetrationmodifier;
    float damagemodifier;
    short material;
    bool climbable;
};

class PhysicsSurfaceProps {
public:
    VIRTUAL_METHOD(SurfaceData*, getSurfaceData, 5, (int index), (this, index))
};

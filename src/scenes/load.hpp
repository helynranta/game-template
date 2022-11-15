#pragma once

#include <engine.hxx>

namespace lerppana
{
    struct load : core::scene
    {
        explicit load() :
          core::scene("fs1://scenes/load.scene")
        {}
    };
}

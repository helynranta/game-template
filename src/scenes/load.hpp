#pragma once

#include <engine.hxx>

namespace lerppana
{
    struct [[le::scene]] load : core::scene
    {
        explicit load() :
          core::scene("fs1://scenes/load.scene")
        {}
    };
}

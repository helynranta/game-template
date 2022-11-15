#pragma once

#include "template_export.h"

// editor
#include <plugin.hpp>
#include <core/scene.hpp>
#include <core/system.hpp>
#include <vk/imgui_context.hpp>

#ifdef ENGINE_ENABLE_EDITOR
#include <editor/tag_editor.hpp>
#include <editor/group_editor.hpp>
#endif

// 3rd party
#include <Hypodermic/Container.h>

// STL
#include <memory>

// global usings
using namespace engine;

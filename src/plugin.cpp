#include "generated/reflection.generated.hxx"
#include "tags.hpp"

#include <engine.hxx>

using namespace engine;
using namespace lerppana;

struct TEMPLATE_EXPORT template_plugin : engine::plugin
{
    void addRegistrations(std::shared_ptr<Hypodermic::ContainerBuilder> builder) final
    {
        builder->addRegistrations(lerppana::generated::generated_builder{});
    }

    void setupContainer(std::shared_ptr<Hypodermic::Container> container) final
    {
        engine::vk::imgui_context::set_shared_imgui_context();

#if ENGINE_ENABLE_EDITOR
        container->resolve<engine::editor::tag_editor>()->register_tags<lerppana::tags>();
#endif
    }
};

extern "C" TEMPLATE_EXPORT template_plugin plugin;
template_plugin plugin;
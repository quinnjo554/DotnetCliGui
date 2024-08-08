#include "DotnetDashboard.h"
#include <ftxui/component/component.hpp>
#include <ftxui/component/component_base.hpp>
#include <ftxui/dom/elements.hpp>
#include <memory>
DotnetDashboard::DotnetDashboard() {
  // shared pointers help manage liftimes
  this->package_list_box = std::make_shared<PackageList>();
  container = ftxui::Container::Horizontal(
      {package_list_box->Render(),
       ftxui::Renderer([] { return ftxui::text("Main Content Area"); })});
}

ftxui::Component DotnetDashboard::Render() { return container; }

#include "DotnetDashboard.h"
#include <ftxui/component/component.hpp>
#include <ftxui/component/screen_interactive.hpp>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>

using namespace ftxui;

int main() {
  auto dashboard = std::make_shared<DotnetDashboard>();
  auto screen = ScreenInteractive::Fullscreen();
  screen.Loop(dashboard->Render());
  return 0;
}

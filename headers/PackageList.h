#include <ftxui/component/component.hpp>
#include <ftxui/component/component_base.hpp>
#include <ftxui/dom/elements.hpp>
#include <vector>
class PackageList {
private:
  ftxui::Component package_list; // chose one
  ftxui::Component Menu;
  ftxui::Component search_input;
  ftxui::Component container;
  ftxui::Element Window;

  int selected_package = 0;
  std::string search;

  std::vector<std::string> package_labels;
  std::vector<bool> package_state;

public:
  PackageList();
  ftxui::Component Render();
  void populate_package_labels();
};

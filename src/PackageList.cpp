#include "PackageList.h"
#include <ftxui/component/component_base.hpp>
#include <ftxui/dom/elements.hpp>

PackageList::PackageList() {
  populate_package_labels();
  search_input = ftxui::Input(&search, "Search");
  package_list = ftxui::Menu(&package_labels, &selected_package);
  container = ftxui::Container::Vertical({search_input, package_list});
}

void PackageList::populate_package_labels() {
  this->package_labels = {"label1", "label2", "label3"};
  this->package_state = {false};
}

ftxui::Component PackageList::Render() {
  search_input = ftxui::Input(&search, "Search");
  package_list = ftxui::Menu(&package_labels, &selected_package);

  return container;
}

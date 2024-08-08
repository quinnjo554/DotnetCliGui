
#include "PackageList.h"
#include <ftxui/component/component_base.hpp>
#include <memory>
class DotnetDashboard {

public:
  DotnetDashboard();
  ftxui::Component Render();

private:
  std::shared_ptr<PackageList> package_list_box;
  ftxui::Component container;
};

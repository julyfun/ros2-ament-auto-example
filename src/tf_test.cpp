#include <tf2/LinearMath/Quaternion.h>

#include <rclcpp/logging.hpp>
#include <rclcpp/qos.hpp>
#include <rclcpp/utilities.hpp>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>

// C++ system
#include <cstdint>
#include <functional>
#include <map>
#include <memory>
#include <string>
#include <vector>

#include "tf_test/tf_test.hpp"

namespace tf_test
{
TfTest::TfTest(const rclcpp::NodeOptions & options)
: Node("tf_test", options) // 这边是啥
{
  RCLCPP_INFO(this->get_logger(), "%s节点已经启动.", "comptime");
}

TfTest::~TfTest() {}

}  // namespace rm_serial_driver

#include "rclcpp_components/register_node_macro.hpp"

// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
RCLCPP_COMPONENTS_REGISTER_NODE(tf_test::TfTest)

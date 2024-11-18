// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_robot_controller_msgs:msg/GetPWMServoCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_robot_controller_msgs/msg/detail/get_pwm_servo_cmd__rosidl_typesupport_introspection_c.h"
#include "ros_robot_controller_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_robot_controller_msgs/msg/detail/get_pwm_servo_cmd__functions.h"
#include "ros_robot_controller_msgs/msg/detail/get_pwm_servo_cmd__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ros_robot_controller_msgs__msg__GetPWMServoCmd__rosidl_typesupport_introspection_c__GetPWMServoCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_robot_controller_msgs__msg__GetPWMServoCmd__init(message_memory);
}

void ros_robot_controller_msgs__msg__GetPWMServoCmd__rosidl_typesupport_introspection_c__GetPWMServoCmd_fini_function(void * message_memory)
{
  ros_robot_controller_msgs__msg__GetPWMServoCmd__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_robot_controller_msgs__msg__GetPWMServoCmd__rosidl_typesupport_introspection_c__GetPWMServoCmd_message_member_array[3] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_robot_controller_msgs__msg__GetPWMServoCmd, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "get_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_robot_controller_msgs__msg__GetPWMServoCmd, get_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "get_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_robot_controller_msgs__msg__GetPWMServoCmd, get_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_robot_controller_msgs__msg__GetPWMServoCmd__rosidl_typesupport_introspection_c__GetPWMServoCmd_message_members = {
  "ros_robot_controller_msgs__msg",  // message namespace
  "GetPWMServoCmd",  // message name
  3,  // number of fields
  sizeof(ros_robot_controller_msgs__msg__GetPWMServoCmd),
  ros_robot_controller_msgs__msg__GetPWMServoCmd__rosidl_typesupport_introspection_c__GetPWMServoCmd_message_member_array,  // message members
  ros_robot_controller_msgs__msg__GetPWMServoCmd__rosidl_typesupport_introspection_c__GetPWMServoCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_robot_controller_msgs__msg__GetPWMServoCmd__rosidl_typesupport_introspection_c__GetPWMServoCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_robot_controller_msgs__msg__GetPWMServoCmd__rosidl_typesupport_introspection_c__GetPWMServoCmd_message_type_support_handle = {
  0,
  &ros_robot_controller_msgs__msg__GetPWMServoCmd__rosidl_typesupport_introspection_c__GetPWMServoCmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_robot_controller_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_robot_controller_msgs, msg, GetPWMServoCmd)() {
  if (!ros_robot_controller_msgs__msg__GetPWMServoCmd__rosidl_typesupport_introspection_c__GetPWMServoCmd_message_type_support_handle.typesupport_identifier) {
    ros_robot_controller_msgs__msg__GetPWMServoCmd__rosidl_typesupport_introspection_c__GetPWMServoCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_robot_controller_msgs__msg__GetPWMServoCmd__rosidl_typesupport_introspection_c__GetPWMServoCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

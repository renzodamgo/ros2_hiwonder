// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_robot_controller_msgs:msg/SetBusServoState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_robot_controller_msgs/msg/detail/set_bus_servo_state__rosidl_typesupport_introspection_c.h"
#include "ros_robot_controller_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_robot_controller_msgs/msg/detail/set_bus_servo_state__functions.h"
#include "ros_robot_controller_msgs/msg/detail/set_bus_servo_state__struct.h"


// Include directives for member types
// Member `state`
#include "ros_robot_controller_msgs/msg/bus_servo_state.h"
// Member `state`
#include "ros_robot_controller_msgs/msg/detail/bus_servo_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_robot_controller_msgs__msg__SetBusServoState__rosidl_typesupport_introspection_c__SetBusServoState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_robot_controller_msgs__msg__SetBusServoState__init(message_memory);
}

void ros_robot_controller_msgs__msg__SetBusServoState__rosidl_typesupport_introspection_c__SetBusServoState_fini_function(void * message_memory)
{
  ros_robot_controller_msgs__msg__SetBusServoState__fini(message_memory);
}

size_t ros_robot_controller_msgs__msg__SetBusServoState__rosidl_typesupport_introspection_c__size_function__SetBusServoState__state(
  const void * untyped_member)
{
  const ros_robot_controller_msgs__msg__BusServoState__Sequence * member =
    (const ros_robot_controller_msgs__msg__BusServoState__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_robot_controller_msgs__msg__SetBusServoState__rosidl_typesupport_introspection_c__get_const_function__SetBusServoState__state(
  const void * untyped_member, size_t index)
{
  const ros_robot_controller_msgs__msg__BusServoState__Sequence * member =
    (const ros_robot_controller_msgs__msg__BusServoState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_robot_controller_msgs__msg__SetBusServoState__rosidl_typesupport_introspection_c__get_function__SetBusServoState__state(
  void * untyped_member, size_t index)
{
  ros_robot_controller_msgs__msg__BusServoState__Sequence * member =
    (ros_robot_controller_msgs__msg__BusServoState__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_robot_controller_msgs__msg__SetBusServoState__rosidl_typesupport_introspection_c__fetch_function__SetBusServoState__state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_robot_controller_msgs__msg__BusServoState * item =
    ((const ros_robot_controller_msgs__msg__BusServoState *)
    ros_robot_controller_msgs__msg__SetBusServoState__rosidl_typesupport_introspection_c__get_const_function__SetBusServoState__state(untyped_member, index));
  ros_robot_controller_msgs__msg__BusServoState * value =
    (ros_robot_controller_msgs__msg__BusServoState *)(untyped_value);
  *value = *item;
}

void ros_robot_controller_msgs__msg__SetBusServoState__rosidl_typesupport_introspection_c__assign_function__SetBusServoState__state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_robot_controller_msgs__msg__BusServoState * item =
    ((ros_robot_controller_msgs__msg__BusServoState *)
    ros_robot_controller_msgs__msg__SetBusServoState__rosidl_typesupport_introspection_c__get_function__SetBusServoState__state(untyped_member, index));
  const ros_robot_controller_msgs__msg__BusServoState * value =
    (const ros_robot_controller_msgs__msg__BusServoState *)(untyped_value);
  *item = *value;
}

bool ros_robot_controller_msgs__msg__SetBusServoState__rosidl_typesupport_introspection_c__resize_function__SetBusServoState__state(
  void * untyped_member, size_t size)
{
  ros_robot_controller_msgs__msg__BusServoState__Sequence * member =
    (ros_robot_controller_msgs__msg__BusServoState__Sequence *)(untyped_member);
  ros_robot_controller_msgs__msg__BusServoState__Sequence__fini(member);
  return ros_robot_controller_msgs__msg__BusServoState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros_robot_controller_msgs__msg__SetBusServoState__rosidl_typesupport_introspection_c__SetBusServoState_message_member_array[2] = {
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_robot_controller_msgs__msg__SetBusServoState, state),  // bytes offset in struct
    NULL,  // default value
    ros_robot_controller_msgs__msg__SetBusServoState__rosidl_typesupport_introspection_c__size_function__SetBusServoState__state,  // size() function pointer
    ros_robot_controller_msgs__msg__SetBusServoState__rosidl_typesupport_introspection_c__get_const_function__SetBusServoState__state,  // get_const(index) function pointer
    ros_robot_controller_msgs__msg__SetBusServoState__rosidl_typesupport_introspection_c__get_function__SetBusServoState__state,  // get(index) function pointer
    ros_robot_controller_msgs__msg__SetBusServoState__rosidl_typesupport_introspection_c__fetch_function__SetBusServoState__state,  // fetch(index, &value) function pointer
    ros_robot_controller_msgs__msg__SetBusServoState__rosidl_typesupport_introspection_c__assign_function__SetBusServoState__state,  // assign(index, value) function pointer
    ros_robot_controller_msgs__msg__SetBusServoState__rosidl_typesupport_introspection_c__resize_function__SetBusServoState__state  // resize(index) function pointer
  },
  {
    "duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_robot_controller_msgs__msg__SetBusServoState, duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_robot_controller_msgs__msg__SetBusServoState__rosidl_typesupport_introspection_c__SetBusServoState_message_members = {
  "ros_robot_controller_msgs__msg",  // message namespace
  "SetBusServoState",  // message name
  2,  // number of fields
  sizeof(ros_robot_controller_msgs__msg__SetBusServoState),
  ros_robot_controller_msgs__msg__SetBusServoState__rosidl_typesupport_introspection_c__SetBusServoState_message_member_array,  // message members
  ros_robot_controller_msgs__msg__SetBusServoState__rosidl_typesupport_introspection_c__SetBusServoState_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_robot_controller_msgs__msg__SetBusServoState__rosidl_typesupport_introspection_c__SetBusServoState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_robot_controller_msgs__msg__SetBusServoState__rosidl_typesupport_introspection_c__SetBusServoState_message_type_support_handle = {
  0,
  &ros_robot_controller_msgs__msg__SetBusServoState__rosidl_typesupport_introspection_c__SetBusServoState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_robot_controller_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_robot_controller_msgs, msg, SetBusServoState)() {
  ros_robot_controller_msgs__msg__SetBusServoState__rosidl_typesupport_introspection_c__SetBusServoState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_robot_controller_msgs, msg, BusServoState)();
  if (!ros_robot_controller_msgs__msg__SetBusServoState__rosidl_typesupport_introspection_c__SetBusServoState_message_type_support_handle.typesupport_identifier) {
    ros_robot_controller_msgs__msg__SetBusServoState__rosidl_typesupport_introspection_c__SetBusServoState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_robot_controller_msgs__msg__SetBusServoState__rosidl_typesupport_introspection_c__SetBusServoState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from interfaces:msg/Pose2D.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__POSE2_D__FUNCTIONS_H_
#define INTERFACES__MSG__DETAIL__POSE2_D__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "interfaces/msg/detail/pose2_d__struct.h"

/// Initialize msg/Pose2D message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * interfaces__msg__Pose2D
 * )) before or use
 * interfaces__msg__Pose2D__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
bool
interfaces__msg__Pose2D__init(interfaces__msg__Pose2D * msg);

/// Finalize msg/Pose2D message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
void
interfaces__msg__Pose2D__fini(interfaces__msg__Pose2D * msg);

/// Create msg/Pose2D message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * interfaces__msg__Pose2D__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
interfaces__msg__Pose2D *
interfaces__msg__Pose2D__create();

/// Destroy msg/Pose2D message.
/**
 * It calls
 * interfaces__msg__Pose2D__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
void
interfaces__msg__Pose2D__destroy(interfaces__msg__Pose2D * msg);

/// Check for msg/Pose2D message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
bool
interfaces__msg__Pose2D__are_equal(const interfaces__msg__Pose2D * lhs, const interfaces__msg__Pose2D * rhs);

/// Copy a msg/Pose2D message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
bool
interfaces__msg__Pose2D__copy(
  const interfaces__msg__Pose2D * input,
  interfaces__msg__Pose2D * output);

/// Initialize array of msg/Pose2D messages.
/**
 * It allocates the memory for the number of elements and calls
 * interfaces__msg__Pose2D__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
bool
interfaces__msg__Pose2D__Sequence__init(interfaces__msg__Pose2D__Sequence * array, size_t size);

/// Finalize array of msg/Pose2D messages.
/**
 * It calls
 * interfaces__msg__Pose2D__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
void
interfaces__msg__Pose2D__Sequence__fini(interfaces__msg__Pose2D__Sequence * array);

/// Create array of msg/Pose2D messages.
/**
 * It allocates the memory for the array and calls
 * interfaces__msg__Pose2D__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
interfaces__msg__Pose2D__Sequence *
interfaces__msg__Pose2D__Sequence__create(size_t size);

/// Destroy array of msg/Pose2D messages.
/**
 * It calls
 * interfaces__msg__Pose2D__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
void
interfaces__msg__Pose2D__Sequence__destroy(interfaces__msg__Pose2D__Sequence * array);

/// Check for msg/Pose2D message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
bool
interfaces__msg__Pose2D__Sequence__are_equal(const interfaces__msg__Pose2D__Sequence * lhs, const interfaces__msg__Pose2D__Sequence * rhs);

/// Copy an array of msg/Pose2D messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
bool
interfaces__msg__Pose2D__Sequence__copy(
  const interfaces__msg__Pose2D__Sequence * input,
  interfaces__msg__Pose2D__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__POSE2_D__FUNCTIONS_H_

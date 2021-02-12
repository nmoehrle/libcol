#ifndef COL_DEFINES_HEADER
#define COL_DEFINES_HEADER

#include <type_traits>

#define COL_NAMESPACE_BEGIN namespace col {
#define COL_NAMESPACE_END }
#define MAPS_NAMESPACE_BEGIN namespace maps {
#define MAPS_NAMESPACE_END }
#define SRGB_NAMESPACE_BEGIN namespace srgb {
#define SRGB_NAMESPACE_END }
#define LIN_NAMESPACE_BEGIN namespace lin {
#define LIN_NAMESPACE_END }

COL_NAMESPACE_BEGIN

typedef const std::array<std::array<float, 3>, 256>& Map;

COL_NAMESPACE_END

#endif /* COL_DEFINES_HEADER */

#ifndef THIRD_PARTY_UPB_UPB_GENERATOR_C_NAMES_H_
#define THIRD_PARTY_UPB_UPB_GENERATOR_C_NAMES_H_

#include <string>

#include "absl/strings/string_view.h"

namespace upb {
namespace generator {

// Note: these names are not currently exported, in hopes that no code
// generators outside of the protobuf repo will ever use the generated C API.

// Maps: foo/bar/baz.proto -> foo/bar/baz.upb.h
std::string CApiHeaderFilename(absl::string_view proto_filename);

// The foo.upb.h file defines far more symbols than we currently enumerate here.
// We do the bare minimum by by defining the type name for messages and enums,
// which also forms the symbol prefix for associated functions.
//
//   typedef struct { /* ... */ } <MessageType>;
//   typedef enum { <EnumValue> = X, ... } <EnumType>;
//
// Oneofs and extensions have a base name that forms the prefix for associated
// functions.

std::string CApiMessageType(absl::string_view full_name);
std::string CApiEnumType(absl::string_view full_name);
std::string CApiEnumValueSymbol(absl::string_view full_name);
std::string CApiExtensionIdentBase(absl::string_view full_name);
std::string CApiOneofIdentBase(absl::string_view full_name);

}  // namespace generator
}  // namespace upb

#endif  // THIRD_PARTY_UPB_UPB_GENERATOR_C_NAMES_H_

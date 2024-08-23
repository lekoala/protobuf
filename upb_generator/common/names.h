// This file contains common functionality used by names.h in other code
// generators.

#ifndef THIRD_PARTY_UPB_UPB_GENERATOR_COMMON_NAMES_H_
#define THIRD_PARTY_UPB_UPB_GENERATOR_COMMON_NAMES_H_

#include <string>

#include "absl/strings/string_view.h"

namespace upb {
namespace generator {

bool IsDescriptorProto(absl::string_view filename);
std::string StripExtension(absl::string_view fname);
std::string IncludeGuard(absl::string_view filename);
std::string FileWarning(absl::string_view filename);
std::string PadPrefix(absl::string_view tag);

}  // namespace generator
}  // namespace upb

#endif  // THIRD_PARTY_UPB_UPB_GENERATOR_COMMON_NAMES_H_

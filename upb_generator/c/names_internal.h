#ifndef THIRD_PARTY_UPB_UPB_GENERATOR_C_NAMES_INTERNAL_H_
#define THIRD_PARTY_UPB_UPB_GENERATOR_C_NAMES_INTERNAL_H_

#include <string>

#include "absl/strings/string_view.h"

namespace upb {
namespace generator {

// Like the public CApiHeaderFilename, but also handles the case where we are
// generating a bootstrap header.
std::string CApiHeaderFilename(absl::string_view proto_filename,
                               bool bootstrap);

}  // namespace generator
}  // namespace upb

#endif  // THIRD_PARTY_UPB_UPB_GENERATOR_C_NAMES_INTERNAL_H_

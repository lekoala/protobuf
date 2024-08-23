#include "upb_generator/c/names.h"

#include <string>
#include <vector>

#include "absl/strings/str_join.h"
#include "absl/strings/str_replace.h"
#include "absl/strings/str_split.h"
#include "absl/strings/string_view.h"
#include "upb_generator/c/names_internal.h"

namespace upb {
namespace generator {

namespace {

std::string ToCIdent(absl::string_view str) {
  return absl::StrReplaceAll(str, {{".", "_"}, {"/", "_"}, {"-", "_"}});
}

}  // namespace

std::string CApiHeaderFilename(absl::string_view proto_filename) {
  return CApiHeaderFilename(proto_filename, false);
}

std::string CApiMessageType(absl::string_view full_name) {
  return ToCIdent(full_name);
}

std::string CApiEnumType(absl::string_view full_name) {
  return ToCIdent(full_name);
}

std::string CApiEnumValueSymbol(absl::string_view full_name) {
  return ToCIdent(full_name);
}

std::string CApiExtensionIdentBase(absl::string_view full_name) {
  std::vector<std::string> parts = absl::StrSplit(full_name, '.');
  parts.pop_back();
  return ToCIdent(absl::StrJoin(parts, "."));
}

std::string CApiOneofIdentBase(absl::string_view full_name) {
  return ToCIdent(full_name);
}

}  // namespace generator
}  // namespace upb

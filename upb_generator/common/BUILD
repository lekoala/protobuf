# Note: this library should not depend on upb reflection or C++ proto
# reflection. It is intended to be a lightweight target that can be used by
# other code generators without pulling in reflection of either library.
cc_library(
    name = "names",
    srcs = ["names.cc"],
    hdrs = ["names.h"],
    compatible_with = ["//buildenv/target:non_prod"],
    visibility = ["//upb_generator:__subpackages__"],
    deps = [
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/strings:string_view",
    ],
)

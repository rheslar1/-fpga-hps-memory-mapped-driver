#include <array>
#include <cassert>
#include <string_view>

class IReadinessRule {
 public:
  virtual ~IReadinessRule() = default;
  virtual bool passes(std::string_view evidenceTarget) const = 0;
};

class RequiredEvidenceRule final : public IReadinessRule {
 public:
  bool passes(std::string_view evidenceTarget) const override {
    return !evidenceTarget.empty();
  }
};

struct ProjectProfile {
  std::string_view title;
  std::string_view summary;
  std::string_view evidenceTarget;
  std::array<std::string_view, 9> tags;
};

constexpr ProjectProfile profile{
  "FPGA to HPS Memory-Mapped Hardware Driver",
  "Intel SoC project that maps FPGA logic into Linux user space through the HPS-to-FPGA bridge and toggles hardware registers with mmap().",
  "Hardware co-processing, memory-mapped register control, FPGA/Linux integration, and low-level driver reasoning.",
  {
    "C++17",
    "C++ Design Patterns",
    "SOLID",
    "FPGA",
    "HPS bridge",
    "mmap",
    "Verilog",
    "SystemVerilog",
    "Register map"
  }
};

int main() {
  const RequiredEvidenceRule rule;
  assert(!profile.title.empty());
  assert(!profile.summary.empty());
  assert(rule.passes(profile.evidenceTarget));
  assert(profile.tags[0] == "C++17");
  return 0;
}

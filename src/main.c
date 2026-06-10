#include <stdio.h>
#include <stddef.h>

typedef struct {
  const char *title;
  const char *summary;
  const char *evidence_target;
  const char *tags[8];
  size_t tag_count;
} project_profile_t;

static const project_profile_t profile = {
  "FPGA to HPS Memory-Mapped Hardware Driver",
  "Intel SoC project that maps FPGA logic into Linux user space through the HPS-to-FPGA bridge and toggles hardware registers with mmap().",
  "Hardware co-processing, memory-mapped register control, FPGA/Linux integration, and low-level driver reasoning.",
  {
  "FPGA",
  "HPS bridge",
  "mmap",
  "Verilog",
  "SystemVerilog",
  "Register map"
  },
  6u
};

int main(void) {
  printf("%s\n", profile.title);
  printf("Summary: %s\n", profile.summary);
  printf("Evidence target: %s\n", profile.evidence_target);
  printf("Stack:");

  for (size_t index = 0; index < profile.tag_count; ++index) {
    printf(" %s%s", profile.tags[index], index + 1u == profile.tag_count ? "" : ",");
  }

  printf("\n");
  return 0;
}

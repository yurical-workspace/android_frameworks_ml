// Generated from avg_pool_float_5.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::avg_pool_float_5 {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::avg_pool_float_5

namespace android::hardware::neuralnetworks::V1_2::generated_tests::avg_pool_float_5 {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, avg_pool_float_5) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::avg_pool_float_5::get_examples());
}

TEST_F(ValidationTest, avg_pool_float_5) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::avg_pool_float_5::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::avg_pool_float_5

namespace generated_tests::avg_pool_float_5 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::avg_pool_float_5

namespace android::hardware::neuralnetworks::V1_2::generated_tests::avg_pool_float_5 {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, avg_pool_float_5_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::avg_pool_float_5::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, avg_pool_float_5_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::avg_pool_float_5::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::avg_pool_float_5


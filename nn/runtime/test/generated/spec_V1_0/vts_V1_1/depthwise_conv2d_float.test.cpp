// Generated from depthwise_conv2d_float.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::depthwise_conv2d_float {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::depthwise_conv2d_float

namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv2d_float {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_float) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::depthwise_conv2d_float::get_examples());
}

TEST_F(ValidationTest, depthwise_conv2d_float) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_float::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv2d_float

namespace generated_tests::depthwise_conv2d_float {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_float

namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv2d_float {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_float_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_float::get_examples_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_float_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_float::get_examples_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv2d_float

namespace generated_tests::depthwise_conv2d_float {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_float

namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv2d_float {

Model createTestModel_all_tensors_as_inputs();
bool is_ignored_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_float_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_all_tensors_as_inputs,
          is_ignored_all_tensors_as_inputs,
          ::generated_tests::depthwise_conv2d_float::get_examples_all_tensors_as_inputs());
}

TEST_F(ValidationTest, depthwise_conv2d_float_all_tensors_as_inputs) {
  const Model model = createTestModel_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_float::get_examples_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv2d_float

namespace generated_tests::depthwise_conv2d_float {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_float

namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv2d_float {

Model createTestModel_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_float_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_float::get_examples_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_float_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_float::get_examples_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv2d_float


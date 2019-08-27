// Generated from batch_to_space.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::batch_to_space {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::batch_to_space

namespace android::hardware::neuralnetworks::V1_1::generated_tests::batch_to_space {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::batch_to_space::get_examples());
}

TEST_F(ValidationTest, batch_to_space) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::batch_to_space

namespace generated_tests::batch_to_space {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::batch_to_space

namespace android::hardware::neuralnetworks::V1_1::generated_tests::batch_to_space {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::batch_to_space::get_examples_all_inputs_as_internal());
}

TEST_F(ValidationTest, batch_to_space_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space::get_examples_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::batch_to_space

namespace generated_tests::batch_to_space {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs();

} // namespace generated_tests::batch_to_space

namespace android::hardware::neuralnetworks::V1_1::generated_tests::batch_to_space {

Model createTestModel_all_tensors_as_inputs();
bool is_ignored_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_all_tensors_as_inputs,
          is_ignored_all_tensors_as_inputs,
          ::generated_tests::batch_to_space::get_examples_all_tensors_as_inputs());
}

TEST_F(ValidationTest, batch_to_space_all_tensors_as_inputs) {
  const Model model = createTestModel_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space::get_examples_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::batch_to_space

namespace generated_tests::batch_to_space {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::batch_to_space

namespace android::hardware::neuralnetworks::V1_1::generated_tests::batch_to_space {

Model createTestModel_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::batch_to_space::get_examples_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, batch_to_space_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space::get_examples_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::batch_to_space


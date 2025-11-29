@class NSDictionary;

@interface XNetInferenceModelDescription : NSObject {
    struct ModelDesc { struct map<std::string, xnet::dnn::DnnInferenceModelBase::TensorDesc, std::less<std::string>, std::allocator<std::pair<const std::string, xnet::dnn::DnnInferenceModelBase::TensorDesc>>> { struct __tree<std::__value_type<std::string, xnet::dnn::DnnInferenceModelBase::TensorDesc>, std::__map_value_compare<std::string, std::__value_type<std::string, xnet::dnn::DnnInferenceModelBase::TensorDesc>, std::less<std::string>>, std::allocator<std::__value_type<std::string, xnet::dnn::DnnInferenceModelBase::TensorDesc>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, xnet::dnn::DnnInferenceModelBase::TensorDesc>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, xnet::dnn::DnnInferenceModelBase::TensorDesc>, std::less<std::string>>> { unsigned long long __value_; } __pair3_; } __tree_; } inputDescs; struct map<std::string, xnet::dnn::DnnInferenceModelBase::TensorDesc, std::less<std::string>, std::allocator<std::pair<const std::string, xnet::dnn::DnnInferenceModelBase::TensorDesc>>> { struct __tree<std::__value_type<std::string, xnet::dnn::DnnInferenceModelBase::TensorDesc>, std::__map_value_compare<std::string, std::__value_type<std::string, xnet::dnn::DnnInferenceModelBase::TensorDesc>, std::less<std::string>>, std::allocator<std::__value_type<std::string, xnet::dnn::DnnInferenceModelBase::TensorDesc>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, xnet::dnn::DnnInferenceModelBase::TensorDesc>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, xnet::dnn::DnnInferenceModelBase::TensorDesc>, std::less<std::string>>> { unsigned long long __value_; } __pair3_; } __tree_; } outputDescs; } _underlying;
}

@property (readonly, nonatomic) NSDictionary *inputs;
@property (readonly, nonatomic) NSDictionary *outputs;

- (id)initWithUnderlying:(const void *)a0;
- (const void *)underlying;
- (id)initWithInputs:(id)a0 outputs:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

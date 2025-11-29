@interface XNetInferenceSession : NSObject {
    struct shared_ptr<xnet::InferenceSession> { struct InferenceSession *__ptr_; struct __shared_weak_count *__cntrl_; } _session;
}

+ (id)GetXNetSDKVersion;

- (id)initWithPath:(id)a0 error:(id *)a1;
- (id)initWithPath:(id)a0 options:(id)a1 error:(id *)a2;
- (id)inference:(id)a0 error:(id *)a1;
- (id)convertCpp2ObjCTensors:(const void *)a0;
- (struct map<std::string, xnet::Tensor<xnet::Storage<DeviceKindCPU, ResourceKindBuffer>>, std::less<std::string>, std::allocator<std::pair<const std::string, xnet::Tensor<xnet::Storage<DeviceKindCPU, ResourceKindBuffer>>>>> { struct __tree<std::__value_type<std::string, xnet::Tensor<xnet::Storage<DeviceKindCPU, ResourceKindBuffer>>>, std::__map_value_compare<std::string, std::__value_type<std::string, xnet::Tensor<xnet::Storage<DeviceKindCPU, ResourceKindBuffer>>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, xnet::Tensor<xnet::Storage<DeviceKindCPU, ResourceKindBuffer>>>>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, xnet::Tensor<xnet::Storage<DeviceKindCPU, ResourceKindBuffer>>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, xnet::Tensor<xnet::Storage<DeviceKindCPU, ResourceKindBuffer>>>, std::less<std::string>>> { unsigned long long x0; } x2; } x0; })convertObjC2CppTensors:(id)a0;
- (id)modelDescriptionWithError:(id *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

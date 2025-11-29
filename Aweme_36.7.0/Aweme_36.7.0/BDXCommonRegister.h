@interface BDXCommonRegister : NSObject {
    struct unordered_map<std::string, std::vector<BDXRegister::BDXRegisterConfig>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::vector<BDXRegister::BDXRegisterConfig>>>> { struct __hash_table<std::__hash_value_type<std::string, std::vector<BDXRegister::BDXRegisterConfig>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::vector<BDXRegister::BDXRegisterConfig>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::vector<BDXRegister::BDXRegisterConfig>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::vector<BDXRegister::BDXRegisterConfig>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<BDXRegister::BDXRegisterConfig>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<BDXRegister::BDXRegisterConfig>>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<BDXRegister::BDXRegisterConfig>>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<BDXRegister::BDXRegisterConfig>>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } registerInfoMap;
}

+ (id)shared;

- (id)registerInfoListWithClz:(Class)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

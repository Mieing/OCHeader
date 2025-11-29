@interface WVMDummyObject : NSObject {
    struct unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { struct __hash_table<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::string, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } objcInfo;
}

@property (nonatomic) int count;

- (void).cxx_destruct;
- (id).cxx_construct;

@end

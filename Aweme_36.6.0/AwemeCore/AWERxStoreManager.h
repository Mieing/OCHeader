@interface AWERxStoreManager : NSObject {
    struct unordered_map<AWERxModule *, id<AWERxStoreProtocol>, RxModuleHash, RxModuleEqual, std::allocator<std::pair<AWERxModule *const, id<AWERxStoreProtocol>>>> { struct __hash_table<std::__hash_value_type<AWERxModule *, id<AWERxStoreProtocol>>, std::__unordered_map_hasher<AWERxModule *, std::__hash_value_type<AWERxModule *, id<AWERxStoreProtocol>>, RxModuleHash, RxModuleEqual>, std::__unordered_map_equal<AWERxModule *, std::__hash_value_type<AWERxModule *, id<AWERxStoreProtocol>>, RxModuleEqual, RxModuleHash>, std::allocator<std::__hash_value_type<AWERxModule *, id<AWERxStoreProtocol>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<AWERxModule *, id<AWERxStoreProtocol>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<AWERxModule *, id<AWERxStoreProtocol>>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<AWERxModule *, id<AWERxStoreProtocol>>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<AWERxModule *, id<AWERxStoreProtocol>>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } m_map;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } m_lock;
}

+ (id)registerStore:(id)a0 forModule:(id)a1;
+ (id)storeOfModule:(id)a0;

- (void).cxx_destruct;
- (id).cxx_construct;

@end

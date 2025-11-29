@class AWERxDisposable, __cap_, __end_;

@interface AWERxData : NSObject {
    struct vector<AWERxDisposable *, std::allocator<AWERxDisposable *>> { __end_ **__begin_; __cap_ **x0; id *x1; } m_disposables;
    struct unordered_map<NSString *, AWERxDisposable *, OCStrHash, OCStrEqual, std::allocator<std::pair<NSString *const, AWERxDisposable *>>> { struct __hash_table<std::__hash_value_type<NSString *, AWERxDisposable *>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, AWERxDisposable *>, OCStrHash, OCStrEqual>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, AWERxDisposable *>, OCStrEqual, OCStrHash>, std::allocator<std::__hash_value_type<NSString *, AWERxDisposable *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, AWERxDisposable *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, AWERxDisposable *>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, AWERxDisposable *>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, AWERxDisposable *>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } m_disposables_map;
}

@property (retain, nonatomic) AWERxDisposable *steamDisposable;

- (void).cxx_destruct;
- (id).cxx_construct;

@end

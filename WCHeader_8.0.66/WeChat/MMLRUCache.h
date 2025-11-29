@class __end_cap_, __end_;

@interface MMLRUCache : NSObject {
    unsigned int m_capacity;
    BOOL m_alwaysCache;
    struct unordered_map<NSString *, id, KeyHasher, KeyEqualer, std::allocator<std::pair<NSString *const, id>>> { struct __hash_table<std::__hash_value_type<NSString *, id>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, id>, KeyHasher, KeyEqualer>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, id>, KeyEqualer, KeyHasher>, std::allocator<std::__hash_value_type<NSString *, id>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, id>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, id>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, id>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, id>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, id>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, id>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, id>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, id>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, id>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, id>, KeyHasher, KeyEqualer>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, id>, KeyEqualer, KeyHasher>> { float __value_; } __p3_; } __table_; } m_dic;
    struct vector<NSString *__unsafe_unretained, std::allocator<NSString *__unsafe_unretained>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<NSString *__unsafe_unretained *, std::allocator<NSString *__unsafe_unretained>> { id *__value_; } x1; } m_vector;
}

- (id)initWithCapacity:(unsigned int)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (void)removeAllObjects;
- (unsigned int)capacity;
- (unsigned long long)count;
- (id)allKeys;
- (id)allObjects;
- (id)allKeysAndObjects;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

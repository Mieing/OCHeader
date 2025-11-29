@class MMBaseService;

@interface MMServiceWrapper : NSProxy {
    MMBaseService *m_service;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_setLock;
    struct unordered_map<SEL *, NSMethodSignature *, std::hash<SEL *>, std::equal_to<SEL *>, std::allocator<std::pair<SEL *const, NSMethodSignature *>>> { struct __hash_table<std::__hash_value_type<SEL *, NSMethodSignature *>, std::__unordered_map_hasher<SEL *, std::__hash_value_type<SEL *, NSMethodSignature *>, std::hash<SEL *>, std::equal_to<SEL *>>, std::__unordered_map_equal<SEL *, std::__hash_value_type<SEL *, NSMethodSignature *>, std::equal_to<SEL *>, std::hash<SEL *>>, std::allocator<std::__hash_value_type<SEL *, NSMethodSignature *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SEL *, NSMethodSignature *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SEL *, NSMethodSignature *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SEL *, NSMethodSignature *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SEL *, NSMethodSignature *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SEL *, NSMethodSignature *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SEL *, NSMethodSignature *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SEL *, NSMethodSignature *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<SEL *, NSMethodSignature *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<SEL *, NSMethodSignature *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<SEL *, std::__hash_value_type<SEL *, NSMethodSignature *>, std::hash<SEL *>, std::equal_to<SEL *>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<SEL *, std::__hash_value_type<SEL *, NSMethodSignature *>, std::equal_to<SEL *>, std::hash<SEL *>>> { float __value_; } __p3_; } __table_; } m_hookSet;
}

- (id)weakContextObject;
- (id)weakContextObjectWithContext:(id)a0;
- (id)strongContextObject;
- (id)strongContextObjectWithContext:(id)a0;
- (id)initWithServiceObj:(id)a0;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (Class)superclass;
- (Class)class;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)isProxy;
- (id)description;
- (id)debugDescription;
- (id)unsafeUnwrap;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

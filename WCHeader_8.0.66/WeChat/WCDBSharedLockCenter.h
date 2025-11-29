@interface WCDBSharedLockCenter : NSObject {
    struct map<NSString *, std::weak_ptr<WCDBSharedLock>, WCDBStringComparator, std::allocator<std::pair<NSString *const, std::weak_ptr<WCDBSharedLock>>>> { struct __tree<std::__value_type<NSString *, std::weak_ptr<WCDBSharedLock>>, std::__map_value_compare<NSString *, std::__value_type<NSString *, std::weak_ptr<WCDBSharedLock>>, WCDBStringComparator>, std::allocator<std::__value_type<NSString *, std::weak_ptr<WCDBSharedLock>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<NSString *, std::weak_ptr<WCDBSharedLock>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<NSString *, std::__value_type<NSString *, std::weak_ptr<WCDBSharedLock>>, WCDBStringComparator>> { unsigned long long __value_; } __pair3_; } __tree_; } m_locks;
    struct shared_ptr<WCDBSharedLock> { struct WCDBSharedLock *__ptr_; struct __shared_weak_count *__cntrl_; } m_inner;
}

- (id)init;
- (struct shared_ptr<WCDBSharedLock> { struct WCDBSharedLock *x0; struct __shared_weak_count *x1; })lockWithName:(id)a0;
- (void)purge;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

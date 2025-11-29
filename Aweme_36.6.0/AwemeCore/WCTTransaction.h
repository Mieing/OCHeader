@interface WCTTransaction : WCTInterface {
    struct Error { int m_code; int m_type; struct map<WCDB::Error::Key, WCDB::ErrorValue, std::less<WCDB::Error::Key>, std::allocator<std::pair<const WCDB::Error::Key, WCDB::ErrorValue>>> { struct __tree<std::__value_type<WCDB::Error::Key, WCDB::ErrorValue>, std::__map_value_compare<WCDB::Error::Key, std::__value_type<WCDB::Error::Key, WCDB::ErrorValue>, std::less<WCDB::Error::Key>>, std::allocator<std::__value_type<WCDB::Error::Key, WCDB::ErrorValue>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<WCDB::Error::Key, WCDB::ErrorValue>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<WCDB::Error::Key, std::__value_type<WCDB::Error::Key, WCDB::ErrorValue>, std::less<WCDB::Error::Key>>> { unsigned long long __value_; } __pair3_; } __tree_; } m_infos; } _error;
    void *_transaction;
    struct shared_ptr<WCDB::Ticker> { struct Ticker *__ptr_; struct __shared_weak_count *__cntrl_; } _ticker;
    int _changes;
}

- (BOOL)runTransaction:(id /* block */)a0;
- (void)setStatisticsEnabled:(BOOL)a0;
- (id)initWithCore:(const void *)a0;
- (BOOL)runTransaction:(id /* block */)a0 event:(id /* block */)a1;
- (void).cxx_destruct;
- (int)changes;
- (id)error;
- (double)cost;
- (BOOL)rollback;
- (BOOL)commit;
- (id).cxx_construct;
- (BOOL)begin;

@end

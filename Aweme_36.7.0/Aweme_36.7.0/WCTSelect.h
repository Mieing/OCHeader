@interface WCTSelect : WCTSelectBase {
    struct WCTResultList { struct __list_node_base<WCTResult, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<WCTResult, void *>>> { unsigned long long __value_; } __size_alloc_; BOOL m_distinct; } _resultList;
    Class _cls;
}

- (id)initWithCore:(const void *)a0 andResults:(const void *)a1 fromTable:(id)a2;
- (id)p_allObjectsNew;
- (id)p_allObjectsOld;
- (id)p_nextObjectNew;
- (id)p_nextObjectOld;
- (void).cxx_destruct;
- (id)nextObject;
- (id).cxx_construct;
- (id)allObjects;

@end

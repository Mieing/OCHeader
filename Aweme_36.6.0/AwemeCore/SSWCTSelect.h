@interface SSWCTSelect : SSWCTSelectable {
    struct SyntaxList<SSWCTResultColumn> { void /* function */ **_vptr$_SyntaxList; struct __list_node_base<SSWCTResultColumn, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<SSWCTResultColumn, void *>>> { unsigned long long __value_; } __size_alloc_; } _resultColumns;
    Class m_class;
}

- (id)p_allObjectsNew;
- (id)p_allObjectsOld;
- (id)onResultColumns:(const void *)a0;
- (id)p_firstObjectNew;
- (id)p_firstObjectOld;
- (id)fromTable:(id)a0;
- (id)ofClass:(Class)a0;
- (void)willPrepare:(void *)a0;
- (id)firstObject;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)allObjects;

@end

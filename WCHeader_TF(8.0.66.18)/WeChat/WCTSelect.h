@interface WCTSelect : WCTSelectable {
    struct SyntaxList<WCTResultColumn> { void /* function */ **_vptr$_SyntaxList; struct __list_node_base<WCTResultColumn, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<WCTResultColumn, void *>>> { unsigned long long __value_; } __size_alloc_; } _resultColumns;
    Class m_class;
}

- (void)willPrepare:(void *)a0;
- (id)fromTable:(id)a0;
- (id)onResultColumns:(const void *)a0;
- (id)ofClass:(Class)a0;
- (id)allObjects;
- (id)firstObject;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

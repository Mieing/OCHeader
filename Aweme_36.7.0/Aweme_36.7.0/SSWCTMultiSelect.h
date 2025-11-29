@interface SSWCTMultiSelect : SSWCTSelectable {
    struct SyntaxList<SSWCTResultColumn> { void /* function */ **_vptr$_SyntaxList; struct __list_node_base<SSWCTResultColumn, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<SSWCTResultColumn, void *>>> { unsigned long long __value_; } __size_alloc_; } _resultColumns;
}

- (id)fromTables:(id)a0;
- (id)firstMultiObject;
- (id)allMultiObjects;
- (id)onResultColumns:(const void *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

@interface WCTUpdate : WCTChainCall {
    struct StatementUpdate { void /* function */ **_vptr$Statement; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } m_description; BOOL m_set; } _statement;
    struct WCTPropertyList { struct __list_node_base<WCTProperty, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<WCTProperty, void *>>> { unsigned long long __value_; } __size_alloc_; } _propertyList;
    int _changes;
}

- (id)where:(const void *)a0;
- (id)orderBy:(const void *)a0;
- (id)limit:(const void *)a0;
- (BOOL)p_executeWithObjectNew:(id)a0;
- (BOOL)p_executeWithObjectOld:(id)a0;
- (BOOL)p_executeWithRowNew:(id)a0;
- (BOOL)p_executeWithRowOld:(id)a0;
- (id)initWithCore:(const void *)a0 andProperties:(const void *)a1 andTableName:(id)a2;
- (BOOL)executeWithObject:(id)a0;
- (BOOL)executeWithRow:(id)a0;
- (void).cxx_destruct;
- (int)changes;
- (id).cxx_construct;
- (id)offset:(const void *)a0;

@end

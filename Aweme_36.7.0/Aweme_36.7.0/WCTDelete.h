@interface WCTDelete : WCTChainCall {
    struct StatementDelete { void /* function */ **_vptr$Statement; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } m_description; } _statement;
    int _changes;
}

- (BOOL)p_executeNew;
- (BOOL)p_executeOld;
- (id)initWithCore:(const void *)a0 andTableName:(id)a1;
- (id)where:(const void *)a0;
- (id)orderBy:(const void *)a0;
- (id)limit:(const void *)a0;
- (void).cxx_destruct;
- (int)changes;
- (BOOL)execute;
- (id).cxx_construct;
- (id)offset:(const void *)a0;

@end

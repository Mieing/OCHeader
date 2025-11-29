@interface WCTSelectBase : WCTChainCall {
    BOOL _prepared;
    struct RecyclableStatement { struct RecyclableHandle { struct shared_ptr<WCDB::HandleWrap> { struct HandleWrap *__ptr_; struct __shared_weak_count *__cntrl_; } m_value; struct Recyclable<std::shared_ptr<WCDB::HandleWrap>> { struct shared_ptr<WCDB::HandleWrap> { struct HandleWrap *__ptr_; struct __shared_weak_count *__cntrl_; } m_value; void *m_reference; struct function<void (std::shared_ptr<WCDB::HandleWrap> &)> { struct __value_func<void (std::shared_ptr<WCDB::HandleWrap> &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } m_onRecycled; } m_recyclable; } m_handle; struct shared_ptr<WCDB::StatementHandle> { struct StatementHandle *__ptr_; struct __shared_weak_count *__cntrl_; } m_statementHandle; } _statementHandle;
    struct StatementSelect { void /* function */ **_vptr$Statement; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } m_description; } _statement;
}

- (id)initWithCore:(const void *)a0;
- (BOOL)extractValueToRow:(id)a0;
- (id)extractValue;
- (BOOL)extractPropertyToObject:(id)a0 atIndex:(int)a1 withColumnBinding:(const void *)a2;
- (id)initWithResultList:(const void *)a0 fromTables:(id)a1;
- (BOOL)lazyPrepare;
- (id)where:(const void *)a0;
- (id)orderBy:(const void *)a0;
- (id)limit:(const void *)a0;
- (id)having:(const void *)a0;
- (void).cxx_destruct;
- (void)finalize;
- (BOOL)next;
- (id).cxx_construct;
- (const void *)statement;
- (id)groupBy:(const void *)a0;
- (id)offset:(const void *)a0;

@end

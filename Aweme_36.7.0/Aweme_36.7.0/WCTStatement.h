@interface WCTStatement : WCTCore {
    struct RecyclableStatement { struct RecyclableHandle { struct shared_ptr<WCDB::HandleWrap> { struct HandleWrap *__ptr_; struct __shared_weak_count *__cntrl_; } m_value; struct Recyclable<std::shared_ptr<WCDB::HandleWrap>> { struct shared_ptr<WCDB::HandleWrap> { struct HandleWrap *__ptr_; struct __shared_weak_count *__cntrl_; } m_value; void *m_reference; struct function<void (std::shared_ptr<WCDB::HandleWrap> &)> { struct __value_func<void (std::shared_ptr<WCDB::HandleWrap> &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } m_onRecycled; } m_recyclable; } m_handle; struct shared_ptr<WCDB::StatementHandle> { struct StatementHandle *__ptr_; struct __shared_weak_count *__cntrl_; } m_statementHandle; } _statementHandle;
}

- (int)getIndexByColumnName:(id)a0;
- (BOOL)bindValue:(id)a0 toIndex:(int)a1;
- (id)getValueAtIndex:(int)a0;
- (int)getTypeAtIndex:(int)a0;
- (id)initWithCore:(const void *)a0 andStatementHandle:(void *)a1;
- (BOOL)bindValue:(id)a0 byColumnName:(id)a1;
- (id)getValueByColumnName:(id)a0;
- (int)getTypeByColumnName:(id)a0;
- (id)getColumnNameAtIndex:(int)a0;
- (id)getTableNameAtIndex:(int)a0;
- (void).cxx_destruct;
- (void)finalize;
- (id)getError;
- (id).cxx_construct;
- (void)reset;
- (BOOL)step;
- (int)getColumnCount;

@end

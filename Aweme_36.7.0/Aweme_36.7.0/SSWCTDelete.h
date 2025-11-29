@interface SSWCTDelete : SSWCTChainCall {
    struct StatementDelete { void /* function */ **_vptr$SQL; struct Identifier *m_syntaxPtr; struct shared_ptr<SSWCDB::StringView> { struct StringView *__ptr_; struct __shared_weak_count *__cntrl_; } m_description; BOOL m_hasDescription; struct Shadow<SSWCDB::Syntax::Identifier> { struct shared_ptr<SSWCDB::Syntax::Identifier> { struct Identifier *__ptr_; struct __shared_weak_count *__cntrl_; } m_payload; BOOL m_isPrivate; } m_syntax; } _statement;
}

- (BOOL)p_executeNew;
- (BOOL)p_executeOld;
- (id)where:(const void *)a0;
- (id)limit:(const void *)a0;
- (id)fromTable:(id)a0;
- (id)orders:(const void *)a0;
- (id)initWithHandle:(id)a0;
- (void).cxx_destruct;
- (BOOL)execute;
- (id).cxx_construct;
- (void *)statement;
- (id)offset:(const void *)a0;

@end

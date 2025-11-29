@interface WCTDelete : WCTChainCall {
    struct StatementDelete { void /* function */ **_vptr$SQL; struct Identifier *m_syntaxPtr; struct shared_ptr<WCDB::StringView> { struct StringView *__ptr_; struct __shared_weak_count *__cntrl_; } m_description; BOOL m_hasDescription; struct Shadow<WCDB::Syntax::Identifier> { struct shared_ptr<WCDB::Syntax::Identifier> { struct Identifier *__ptr_; struct __shared_weak_count *__cntrl_; } m_payload; BOOL m_isPrivate; } m_syntax; } _statement;
}

- (id)initWithHandle:(id)a0;
- (void *)statement;
- (id)fromTable:(id)a0;
- (id)where:(const void *)a0;
- (id)orders:(const void *)a0;
- (id)limit:(const void *)a0;
- (id)offset:(const void *)a0;
- (BOOL)execute;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

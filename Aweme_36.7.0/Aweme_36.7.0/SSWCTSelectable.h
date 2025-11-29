@interface SSWCTSelectable : SSWCTChainCall {
    struct StatementSelect { void /* function */ **_vptr$SQL; struct Identifier *m_syntaxPtr; struct shared_ptr<SSWCDB::StringView> { struct StringView *__ptr_; struct __shared_weak_count *__cntrl_; } m_description; BOOL m_hasDescription; struct Shadow<SSWCDB::Syntax::Identifier> { struct shared_ptr<SSWCDB::Syntax::Identifier> { struct Identifier *__ptr_; struct __shared_weak_count *__cntrl_; } m_payload; BOOL m_isPrivate; } m_syntax; } _statement;
}

- (BOOL)lazyPrepare;
- (id)where:(const void *)a0;
- (id)limit:(const void *)a0;
- (void)willPrepare:(void *)a0;
- (id)orders:(const void *)a0;
- (id)initWithHandle:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)statement;
- (id)group:(const void *)a0;
- (id)offset:(const void *)a0;

@end

@class NSObject;

@interface SSWCTUpdate : SSWCTChainCall {
    struct StatementUpdate { void /* function */ **_vptr$SQL; struct Identifier *m_syntaxPtr; struct shared_ptr<SSWCDB::StringView> { struct StringView *__ptr_; struct __shared_weak_count *__cntrl_; } m_description; BOOL m_hasDescription; struct Shadow<SSWCDB::Syntax::Identifier> { struct shared_ptr<SSWCDB::Syntax::Identifier> { struct Identifier *__ptr_; struct __shared_weak_count *__cntrl_; } m_payload; BOOL m_isPrivate; } m_syntax; } _statement;
    struct SyntaxList<SSWCTProperty> { void /* function */ **_vptr$_SyntaxList; struct __list_node_base<SSWCTProperty, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<SSWCTProperty, void *>>> { unsigned long long __value_; } __size_alloc_; } _properties;
    unsigned long long _type;
    NSObject *_value;
}

- (BOOL)p_executeNew;
- (BOOL)p_executeOld;
- (id)where:(const void *)a0;
- (id)limit:(const void *)a0;
- (id)orders:(const void *)a0;
- (id)table:(id)a0;
- (id)toObject:(id)a0;
- (id)toValue:(id)a0;
- (id)toRow:(id)a0;
- (id)initWithHandle:(id)a0;
- (void).cxx_destruct;
- (BOOL)execute;
- (id).cxx_construct;
- (id)set:(const void *)a0;
- (void *)statement;
- (id)offset:(const void *)a0;

@end

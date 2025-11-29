@interface AFDWCTConditionWrapper : AFDWCTExprWrapper

- (id)initWithConditionBlock:(id /* block */)a0;
- (struct list<WCDB::Order, std::allocator<WCDB::Order>> { struct __list_node_base<WCDB::Order, void *> { void *x0; void *x1; } x0; unsigned long long x1; })orderList;
- (struct WCTPropertyList { struct __list_node_base<WCTProperty, void *> { void *x0; void *x1; } x0; unsigned long long x1; })propertyList;
- (struct WCTExpr { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; Class x1; struct shared_ptr<WCTColumnBinding> { struct WCTColumnBinding *x0; struct __shared_weak_count *x1; } x2; Class x3; })condition;

@end

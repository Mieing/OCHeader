@class NSMutableArray;

@interface WCTMultiSelect : WCTReusableSelectBase {
    BOOL _statementBuilt;
    struct JoinClause { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } m_description; } _joinClause;
    NSMutableArray *_tableInfoList;
}

- (id)initWithCore:(const void *)a0 andResults:(const void *)a1 fromTable:(id)a2;
- (BOOL)lazyPrepare;
- (id)where:(const void *)a0;
- (id)orderBy:(const void *)a0;
- (id)limit:(const void *)a0;
- (id)having:(const void *)a0;
- (id)allMultiObjects;
- (id)leftJoinObjectsOfClass:(Class)a0 fromTable:(id)a1;
- (id)on:(const void *)a0;
- (id)initWithCore:(const void *)a0 andObjectClass:(Class)a1 fromTable:(id)a2;
- (Class)bindingClassForResults:(const void *)a0;
- (id)joinResults:(const void *)a0 fromTable:(id)a1 type:(int)a2;
- (id)leftJoinResults:(const void *)a0 fromTable:(id)a1;
- (id)innerJoinResults:(const void *)a0 fromTable:(id)a1;
- (id)crossJoinResults:(const void *)a0 fromTable:(id)a1;
- (void)lazyBuildStatement;
- (id)_currentMultiObject;
- (id)innerJoinObjectsOfClass:(Class)a0 fromTable:(id)a1;
- (id)crossJoinObjectsOfClass:(Class)a0 fromTable:(id)a1;
- (id)nextMultiObject;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)groupBy:(const void *)a0;
- (id)offset:(const void *)a0;

@end

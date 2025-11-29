@class NSString;

@interface WCTMultiSelectTableInfo : NSObject {
    struct WCTResultList { struct __list_node_base<WCTResult, void *> { void *__prev_; void *__next_; } __end_; unsigned long long __size_; BOOL m_distinct; } resultList;
    Class cls;
    NSString *tableName;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end

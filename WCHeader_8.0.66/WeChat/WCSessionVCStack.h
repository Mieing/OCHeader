@class NSMutableArray;

@interface WCSessionVCStack : MMObject {
    NSMutableArray *m_container;
}

- (id)init;
- (id)pop;
- (id)push:(id)a0;
- (id)peek;
- (BOOL)contains:(id)a0;
- (void)clear;
- (unsigned long long)count;
- (unsigned long long)search:(id)a0;
- (void).cxx_destruct;

@end

@class NSMutableArray;

@interface AmoebaSubstitutePageStack : NSObject {
    NSMutableArray *m_pageStack;
    NSMutableArray *m_subPages;
}

- (id)init;
- (id)getStackPageByObj:(id)a0 needCreate:(BOOL)a1;
- (id)getStackPageByHash:(unsigned long long)a0;
- (void)pushPageStack:(id)a0;
- (id)getTopPage;
- (id)getBottomPage;
- (id)getAfterStackPages:(id)a0;
- (id)getAllStackPages;
- (BOOL)isInStack:(id)a0;
- (id)popStackPage;
- (id)popStackPages:(id)a0;
- (id)popAllStackPages;
- (unsigned long long)getStackSize;
- (long long)getStackDeep:(id)a0;
- (void)addSubPage:(id)a0;
- (BOOL)removeStackPage:(id)a0;
- (id)printAllPageInfo;
- (void).cxx_destruct;

@end

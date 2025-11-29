@class _TtC6WeChat23WSSearchProcessReporter;

@interface _LocalJSEventHandler_getSearchData : AbstractWebSearchDataFetcher

@property (retain, nonatomic) _TtC6WeChat23WSSearchProcessReporter *processReporter;
@property (nonatomic) BOOL isFingertipSearch;

- (void)onRequestWillStart:(id)a0;
- (void)onRequestSuccess:(id)a0;
- (void)onRequestFail:(id)a0;
- (unsigned int)h5Version;
- (unsigned int)cgiNumber;
- (BOOL)useParallelRequest;
- (void)recordSearchHistory:(id)a0 params:(id)a1;
- (void)reportKV14457:(unsigned long long)a0;
- (BOOL)shouldCarryUserList:(id)a0 andScene:(unsigned int)a1 andBizType:(unsigned int)a2 isHomePage:(BOOL)a3;
- (BOOL)canModifySearchHistoryInSeachScene:(unsigned long long)a0;
- (id)searchContext;
- (void).cxx_destruct;

@end

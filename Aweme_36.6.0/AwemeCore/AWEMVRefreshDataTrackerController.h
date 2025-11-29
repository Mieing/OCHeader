@interface AWEMVRefreshDataTrackerController : AWEDCFeedBaseController

+ (id)resultStringWithError:(id)a0;

- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)onLoadMoreListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;

@end

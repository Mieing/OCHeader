@class NSDate;

@interface AWEUserWorkRequestTrackerController : AWEUserWorkController

@property (retain, nonatomic) NSDate *beginDate;

- (void)onFetchListDataStartWithReason:(unsigned long long)a0;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)onLoadMoreListDataStartWithReason:(unsigned long long)a0;
- (void)onLoadMoreListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)requestDataCompletionWithReason:(unsigned long long)a0 error:(id)a1 refresh:(BOOL)a2 response:(id)a3;
- (void).cxx_destruct;

@end

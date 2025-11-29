@interface AWESpeCategoryKit.FeedListRefreshMonitorComponent : AWESpeCategoryKit.FeedListBaseComponent {
    void /* unknown type, empty encoding */ refreshIndex;
    void /* unknown type, empty encoding */ refreshShowStartTime;
    void /* unknown type, empty encoding */ lastRefreshShowEndTime;
}

- (void)onFetchListDataStartWithReason:(long long)a0;
- (void)onFetchListDataEndWithReason:(long long)a0 success:(BOOL)a1 response:(id)a2 error:(id)a3;
- (void)onLoadMoreListDataEndWithReason:(long long)a0 success:(BOOL)a1 response:(id)a2 error:(id)a3;
- (id)init;

@end

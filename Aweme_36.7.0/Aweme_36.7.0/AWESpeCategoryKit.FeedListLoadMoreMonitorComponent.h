@interface AWESpeCategoryKit.FeedListLoadMoreMonitorComponent : AWESpeCategoryKit.FeedListBaseComponent {
    void /* unknown type, empty encoding */ loadMoreIndex;
    void /* unknown type, empty encoding */ loadMoreShowStartTime;
    void /* unknown type, empty encoding */ lastLoadMoreShowEndTime;
}

- (void)onLoadMoreListDataStartWithReason:(long long)a0;
- (void)onFetchListDataEndWithReason:(long long)a0 success:(BOOL)a1 response:(id)a2 error:(id)a3;
- (void)onLoadMoreListDataEndWithReason:(long long)a0 success:(BOOL)a1 response:(id)a2 error:(id)a3;
- (id)init;

@end

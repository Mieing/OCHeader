@interface MJRefreshBackFooter : MJRefreshFooter

@property (nonatomic) long long lastRefreshCount;
@property (nonatomic) double lastBottomDelta;

- (void)endRefreshingWithNoMoreData;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewContentSizeDidChange:(id)a0;
- (double)happenOffsetY;
- (double)heightForContentBreakView;
- (void)endRefreshing;
- (void)setState:(long long)a0;
- (void)willMoveToSuperview:(id)a0;

@end

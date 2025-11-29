@interface MJRefreshCustomTrailer : MJRefreshComponent

@property (nonatomic) long long lastRefreshCount;
@property (nonatomic) double lastRightDelta;
@property (nonatomic) double ignoredScrollViewContentInsetRight;

+ (id)trailerWithRefreshingBlock:(id /* block */)a0;
+ (id)trailerWithRefreshingTarget:(id)a0 refreshingAction:(SEL)a1;

- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewContentSizeDidChange:(id)a0;
- (double)happenOffsetX;
- (double)widthForContentBreakView;
- (void)setState:(long long)a0;
- (void)willMoveToSuperview:(id)a0;

@end

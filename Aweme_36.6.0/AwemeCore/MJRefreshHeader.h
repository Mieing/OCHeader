@class NSString, NSDate;

@interface MJRefreshHeader : MJRefreshComponent

@property (nonatomic) double insetTDelta;
@property (copy, nonatomic) NSString *lastUpdatedTimeKey;
@property (readonly, nonatomic) NSDate *lastUpdatedTime;
@property (nonatomic) double ignoredScrollViewContentInsetTop;
@property (nonatomic, getter=isFastRefresh) BOOL fastRefresh;

+ (id)headerWithRefreshingBlock:(id /* block */)a0;
+ (id)headerWithRefreshingTarget:(id)a0 refreshingAction:(SEL)a1;

- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void).cxx_destruct;
- (void)endRefreshing;
- (void)prepare;
- (void)setState:(long long)a0;
- (void)beginRefreshing;

@end

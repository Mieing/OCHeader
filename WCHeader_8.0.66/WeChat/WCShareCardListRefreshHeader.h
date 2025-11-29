@class MMUIActivityIndicatorView;

@interface WCShareCardListRefreshHeader : WCCardRefreshComponent

@property (nonatomic) double insetTDelta;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;

+ (id)headerWithRefreshingBlock:(id /* block */)a0;

- (void)prepare;
- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)setState:(long long)a0;
- (void)endRefreshing;
- (void)setPullingPercent:(double)a0;
- (void).cxx_destruct;

@end

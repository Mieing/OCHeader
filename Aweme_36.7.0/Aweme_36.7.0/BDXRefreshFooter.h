@class UIView;
@protocol BDXRefreshDelegate;

@interface BDXRefreshFooter : MJRefreshAutoFooter

@property (weak, nonatomic) id<BDXRefreshDelegate> delegate;
@property (retain, nonatomic) UIView *footerView;
@property (nonatomic) SEL releasedAction;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long triggerTimes;
@property (nonatomic) BOOL autoLoadMore;
@property (nonatomic) BOOL canRebound;
@property (nonatomic) BOOL canLoadMoreWhenScrollDisabled;

- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewContentSizeDidChange:(id)a0;
- (void)setPullingPercent:(double)a0;
- (void)scrollViewPanStateDidChange:(id)a0;
- (void)withReleasedAction:(SEL)a0;
- (void)setYPosition;
- (void)setInsetBottom:(double)a0;
- (BOOL)tryRefresh:(double)a0;
- (void)rebound;
- (void)footerRefreshingAction;
- (void)footerEndAction;
- (void).cxx_destruct;
- (id)init;
- (void)setState:(long long)a0;
- (void)willMoveToSuperview:(id)a0;

@end

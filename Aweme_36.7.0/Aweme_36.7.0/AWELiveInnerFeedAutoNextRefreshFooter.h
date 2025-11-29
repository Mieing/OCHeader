@class UILabel, DUXLoadingParticleView;

@interface AWELiveInnerFeedAutoNextRefreshFooter : MJRefreshFooter

@property (nonatomic) long long lastRefreshCount;
@property (nonatomic) double lastBottomDelta;
@property (nonatomic) double triggerPullPercent;
@property (nonatomic) double displayContentOffsetY;
@property (retain, nonatomic) UILabel *idleLabel;
@property (retain, nonatomic) UILabel *refreshingLabel;
@property (retain, nonatomic) UILabel *noMoreLabel;
@property (retain, nonatomic) DUXLoadingParticleView *loadingView;

- (void)endRefreshingWithNoMoreData;
- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewContentSizeDidChange:(id)a0;
- (void)startLoadingAnim;
- (id)createFooterLabel;
- (double)p_happenOffsetY;
- (double)p_heightForContentBreakView;
- (void)stopLoadingAnim;
- (BOOL)isDisplayRefreshing;
- (void)endDisplayRefreshing;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)setTitle:(id)a0 forState:(long long)a1;
- (void)endRefreshing;
- (void)prepare;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setState:(long long)a0;
- (void)willMoveToSuperview:(id)a0;
- (void)p_addObservers;

@end

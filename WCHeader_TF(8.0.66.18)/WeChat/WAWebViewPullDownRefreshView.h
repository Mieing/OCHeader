@class DotLoadingView, UIScrollView;
@protocol WAWebViewPullDownRefreshViewDelegate;

@interface WAWebViewPullDownRefreshView : UIView

@property (nonatomic) BOOL isRefreshing;
@property (retain, nonatomic) DotLoadingView *dotLoadingView;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) double animateDestY;
@property (nonatomic) BOOL isAppear;
@property (nonatomic) BOOL isDragging;
@property (nonatomic) double beginDragingY;
@property (nonatomic) BOOL waitGoPull;
@property (nonatomic) BOOL waitGoStop;
@property (nonatomic) double pullBeginTime;
@property (nonatomic) BOOL haveDotAnim;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) id<WAWebViewPullDownRefreshViewDelegate> delegate;

- (id)initWithScrollView:(id)a0 withMode:(long long)a1;
- (void)setMode:(long long)a0;
- (void)startRefreshing;
- (void)stopRefreshing;
- (void)clearWait;
- (BOOL)exeWait;
- (void)goPull;
- (void)goStop;
- (void)layoutSubviews;
- (double)getScrollViewY;
- (void)setScrollViewY:(double)a0 animated:(BOOL)a1;
- (void)onViewWillAppear;
- (void)onViewDidAppear;
- (void)onViewWillDisappear;
- (void)onViewDidDisappear;
- (void)onScrollViewWillBeginDragging;
- (void)onScrollViewDidScroll;
- (void)onScrollViewDidEndDraggingWillDecelerate:(BOOL)a0;
- (void)onScrollViewWillBeginDecelerating;
- (void)onScrollViewDidEndScrollingAnimation;
- (void).cxx_destruct;

@end

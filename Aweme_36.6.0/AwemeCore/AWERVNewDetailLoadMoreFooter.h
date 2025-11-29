@class UILabel, AWEUILoadingView, AWERVNewDetailSkeletonView;

@interface AWERVNewDetailLoadMoreFooter : MJRefreshBackFooter

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWERVNewDetailSkeletonView *skeletonView;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) BOOL isFirstAppear;

- (void)setLoadMoreLabelTextColor:(id)a0;
- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewContentSizeDidChange:(id)a0;
- (void)__addObservers;
- (BOOL)scrollViewContentHeightBiggerThanFrameHeight;
- (BOOL)scrollViewDidReachBottom;
- (BOOL)scrollViewDidScrollUp;
- (void)__removeObservers;
- (void)__startLoadingAnim;
- (void)__stopLoadingAnim;
- (void)resetIdleState;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)prepare;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setState:(long long)a0;
- (void)dealloc;

@end

@class UIScrollView, AWEUILoadingView;

@interface AWELiveSkylightSideRefreshView : UIView

@property (weak, nonatomic) AWEUILoadingView *loading;
@property (copy, nonatomic) id /* block */ refreshingBlock;
@property (nonatomic) double ignoredScrollViewContentInsetLeft;
@property (nonatomic) double insetLDelta;
@property (nonatomic) double originalInsetRight;
@property (nonatomic) double pullingPercent;
@property (nonatomic) double height;
@property (nonatomic) double headerHeight;
@property (nonatomic) long long direction;
@property (nonatomic) double contentWidth;
@property (nonatomic) long long state;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } scrollViewOriginalInset;
@property (readonly, weak, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) BOOL isRefreshing;
@property (nonatomic) double refreshInvokeThreshold;
@property (nonatomic) BOOL disableDragCancel;
@property (nonatomic) double animationTime;

+ (id)leftRefreshViewWithRefreshingBlock:(id /* block */)a0 height:(double)a1;
+ (id)refreshViewWithRefreshingBlock:(id /* block */)a0 height:(double)a1 direction:(long long)a2;

- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewContentSizeDidChange:(id)a0;
- (void)executeRefreshingCallback;
- (id)initWithHeaderHeight:(double)a0;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (void)endRefreshing;
- (void)prepare;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)beginRefreshing;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)a0;
- (void)addObservers;
- (void)removeObservers;

@end

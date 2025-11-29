@class UIScrollView, UIPanGestureRecognizer;

@interface WARefreshComponent : UIView

@property (retain, nonatomic) UIPanGestureRecognizer *pan;
@property (copy, nonatomic) id /* block */ refreshingBlock;
@property (copy, nonatomic) id /* block */ beginRefreshingCompletionBlock;
@property (copy, nonatomic) id /* block */ endRefreshingCompletionBlock;
@property (nonatomic) long long state;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } scrollViewOriginalInset;
@property (readonly, weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) double pullingPercent;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepare;
- (void)layoutSubviews;
- (void)placeSubviews;
- (void)willMoveToSuperview:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addObservers;
- (void)removeObservers;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewContentSizeDidChange:(id)a0;
- (void)scrollViewPanStateDidChange:(id)a0;
- (void)beginRefreshing;
- (void)beginRefreshingWithCompletionBlock:(id /* block */)a0;
- (void)endRefreshing;
- (void)endRefreshingWithCompletionBlock:(id /* block */)a0;
- (BOOL)isRefreshing;
- (void)executeRefreshingCallback;
- (void).cxx_destruct;

@end

@class UIScrollView, UIPanGestureRecognizer;

@interface MJRefreshComponent : UIView

@property (retain, nonatomic) UIPanGestureRecognizer *pan;
@property (copy, nonatomic) id /* block */ refreshingBlock;
@property (nonatomic, getter=isSafelyDispatch) BOOL safelyDispatch;
@property (weak, nonatomic) id refreshingTarget;
@property (nonatomic) SEL refreshingAction;
@property (copy, nonatomic) id /* block */ beginRefreshingCompletionBlock;
@property (copy, nonatomic) id /* block */ endRefreshingCompletionBlock;
@property (nonatomic) long long state;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } scrollViewOriginalInset;
@property (readonly, weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) double pullingPercent;
@property (nonatomic, getter=isAutoChangeAlpha) BOOL autoChangeAlpha;
@property (nonatomic, getter=isAutomaticallyChangeAlpha) BOOL automaticallyChangeAlpha;

+ (void)_aweLazyRegisterLoad_StateChecking;

- (void)placeSubviews;
- (void)beginRefreshingWithCompletionBlock:(id /* block */)a0;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewContentSizeDidChange:(id)a0;
- (void)executeRefreshingCallback;
- (void)scrollViewPanStateDidChange:(id)a0;
- (void)setRefreshingTarget:(id)a0 refreshingAction:(SEL)a1;
- (void)endRefreshingWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)endRefreshing;
- (void)prepare;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)beginRefreshing;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)a0;
- (BOOL)isRefreshing;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addObservers;
- (void)removeObservers;

@end

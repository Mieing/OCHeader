@class UIScrollView;

@interface WCCardRefreshComponent : UIView

@property (copy, nonatomic) id /* block */ refreshingBlock;
@property (copy, nonatomic) id /* block */ endRefreshingCompletionBlock;
@property (nonatomic) long long state;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } scrollViewOriginalInset;
@property (readonly, weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) double pullingPercent;
@property (nonatomic, getter=isAutomaticallyChangeAlpha) BOOL automaticallyChangeAlpha;

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
- (void)beginRefreshing;
- (void)endRefreshing;
- (BOOL)isRefreshing;
- (BOOL)isAutoChangeAlpha;
- (void)executeRefreshingCallback;
- (void).cxx_destruct;

@end

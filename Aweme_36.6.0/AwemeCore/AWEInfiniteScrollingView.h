@class UIScrollView;

@interface AWEInfiniteScrollingView : UIView

@property (nonatomic) BOOL isObserving;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) double originalBottomInset;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) id /* block */ infiniteScrollingHandler;
@property (nonatomic) struct CGSize { double width; double height; } originalContentSize;
@property (nonatomic) BOOL enabled;

- (void)resetScrollViewContentInset;
- (void)setScrollViewContentInsetForInfiniteScrolling;
- (void)setScrollViewContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)triggerRefresh;
- (void)resetOriginalContentSize;
- (void)stopAnimating;
- (void)startAnimating;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(struct CGPoint { double x0; double x1; })a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)willMoveToSuperview:(id)a0;

@end

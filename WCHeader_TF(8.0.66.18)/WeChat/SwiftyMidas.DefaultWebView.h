@interface SwiftyMidas.DefaultWebView : WKWebView <UIScrollViewDelegate>

@property (class, nonatomic, readonly) BOOL requiresConstraintBasedLayout;

- (id)viewForZoomingInScrollView:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (void)dealloc;

@end

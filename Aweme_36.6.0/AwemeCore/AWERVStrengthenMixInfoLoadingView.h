@class AWEShimmerView, AWERVDetailPageContext, UIView;

@interface AWERVStrengthenMixInfoLoadingView : UIView

@property (retain, nonatomic) UIView *fakeView;
@property (retain, nonatomic) AWEShimmerView *shimmerView;
@property (retain, nonatomic) AWERVDetailPageContext *pageContext;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pageContext:(id)a1;
- (void)stopWithCompletion:(id /* block */)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)start;
- (void)setupUI;

@end

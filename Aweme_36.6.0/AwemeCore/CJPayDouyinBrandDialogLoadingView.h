@class CJPayDouyinBrandLoadingView, UIView;

@interface CJPayDouyinBrandDialogLoadingView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) CJPayDouyinBrandLoadingView *brandLoadingView;

+ (id)sharedView;

- (void)p_startAnimation;
- (void)showLoadingWithTitle:(id)a0;
- (void)animateBeforeDismissing;
- (void)p_setupUI;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setLoadingTitle:(id)a0;
- (void)showLoading;

@end

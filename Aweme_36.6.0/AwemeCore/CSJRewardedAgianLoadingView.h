@class UIActivityIndicatorView, UIView;

@interface CSJRewardedAgianLoadingView : UIView

@property (retain, nonatomic) UIView *hudView;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;

- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)showInView:(id)a0;

@end

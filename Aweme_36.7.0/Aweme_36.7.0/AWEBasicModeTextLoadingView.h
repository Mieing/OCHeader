@class UILabel, AWEUILoadingView, UIView;

@interface AWEBasicModeTextLoadingView : UIView

@property (retain, nonatomic) UIView *hudView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *containerView;

+ (id)p_imageWithColor:(id)a0;
+ (id)sharedView;
+ (id)showLoadingOnView:(id)a0 title:(id)a1;

- (void)allowUserInteraction:(BOOL)a0;
- (void)stopAnimating;
- (void)startAnimating;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)setTitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

@class UILabel, AWEUILoadingView, UIView;

@interface AWETeenModeTextLoadingView : UIView

@property (retain, nonatomic) UIView *hudView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *containerView;

+ (void)dismissWindowLoadingWithAnimated:(BOOL)a0;
+ (id)showWindowLoadingWithTitle:(id)a0 animated:(BOOL)a1;
+ (void)dismissWindowLoading;
+ (id)showLoadingOnView:(id)a0 withTitle:(id)a1;
+ (id)showWindowLoadingWithTitle:(id)a0;
+ (id)showWindowLoadingWithTitle:(id)a0 animated:(BOOL)a1 afterDelay:(double)a2;
+ (id)showLoadingOnView:(id)a0 title:(id)a1 animated:(BOOL)a2;
+ (id)p_imageWithColor:(id)a0;
+ (id)sharedView;
+ (id)showLoadingOnView:(id)a0 title:(id)a1 animated:(BOOL)a2 afterDelay:(double)a3;

- (void)dismissWithAnimated:(BOOL)a0;
- (void)allowUserInteraction:(BOOL)a0;
- (void)p_showLoadingOnView:(id)a0 title:(id)a1 animated:(BOOL)a2;
- (void)p_showLoadingOnView:(id)a0;
- (void)stopAnimating;
- (void)startAnimating;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)setTitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateTitle:(id)a0;

@end

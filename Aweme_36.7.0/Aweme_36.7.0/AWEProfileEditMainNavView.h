@class UIButton, UIView;

@interface AWEProfileEditMainNavView : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIView *backBackgroundView;
@property (retain, nonatomic) UIButton *changeBackgroundButton;
@property (copy, nonatomic) id /* block */ backButtonBlock;
@property (copy, nonatomic) id /* block */ changeBackgroundButtonBlock;

- (void)p_setupSubviews;
- (void)observerScrollWith:(id)a0;
- (void)changeBackgroundButtonTapped:(id)a0;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)accessibilityElements;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)backButtonTapped:(id)a0;

@end

@class UIImageView, UILabel, UIView;

@interface ACCEditTextModeTemplateSwapIndicatorView : UIView

@property (retain, nonatomic) UIView *swapContainerView;
@property (retain, nonatomic) UIImageView *swapIconView;
@property (retain, nonatomic) UILabel *swapLabel;

- (void)showSwapView:(BOOL)a0;
- (void)rotateSwapIcon;
- (void)configIndicatorViewRadius:(double)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

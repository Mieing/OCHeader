@class UILabel, UIView;

@interface AWEEcomSearchGoodsMaskView : UIView

@property (retain, nonatomic) UIView *goodsMaskView;
@property (retain, nonatomic) UILabel *stateTextLabel;

- (void)p_setupWithText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 stateText:(id)a1;
- (void)addGradientLayer;
- (void).cxx_destruct;

@end

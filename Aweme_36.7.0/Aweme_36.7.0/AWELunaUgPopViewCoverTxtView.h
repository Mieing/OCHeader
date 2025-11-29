@class UILabel, CAGradientLayer, UIView;

@interface AWELunaUgPopViewCoverTxtView : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *customMaskView;
@property (retain, nonatomic) CAGradientLayer *maskLayer;

- (void)updateTxt:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end

@class UIImageView, CAGradientLayer, UILabel;

@interface AWEECShoppingAIGuideSwitchAgentItemView : UIView

@property (nonatomic) BOOL selected;
@property (nonatomic) long long index;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIImageView *titleImageView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UILabel *descLabel;
@property (copy, nonatomic) id /* block */ onTouchItemViewBlock;

- (void)buildConstraint;
- (void)onTapSwitchItemView:(id)a0;
- (void)addGradientBorderToView:(id)a0 withColors:(id)a1 lineWidth:(double)a2 cornerRadius:(double)a3;
- (void)configViewData:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

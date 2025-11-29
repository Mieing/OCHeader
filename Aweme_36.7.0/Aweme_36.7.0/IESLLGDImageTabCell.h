@class UILabel, CAGradientLayer, UIView;

@interface IESLLGDImageTabCell : UIView

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UILabel *tabTitleLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) BOOL selected;
@property (copy, nonatomic) id /* block */ selectAction;

- (void)onClickAction;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTitleText:(id)a0;
- (void)setupUI;

@end

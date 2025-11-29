@class UIImageView, UILabel, CAGradientLayer;

@interface AWECommentXiguaTipView : UIView

@property (nonatomic) BOOL isBGColorWhite;
@property (retain, nonatomic) UIImageView *xiguaIcon;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (copy, nonatomic) id /* block */ openXiguaBlock;

- (void)__setupUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isBGWhiteColor:(BOOL)a1;
- (void)openXigua;
- (void)setIsBGWhiteColor:(BOOL)a0;
- (void).cxx_destruct;
- (void)refreshUI;
- (void)layoutSubviews;

@end

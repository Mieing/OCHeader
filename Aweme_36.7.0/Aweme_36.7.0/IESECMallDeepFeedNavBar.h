@class IESECUIImageView, NSString, IESECGradientView, UIScrollView, UILabel, UIButton;

@interface IESECMallDeepFeedNavBar : UIView

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) IESECUIImageView *backButtonImageView;
@property (retain, nonatomic) UIButton *shopButton;
@property (retain, nonatomic) IESECUIImageView *shopIcon;
@property (retain, nonatomic) UIScrollView *shopLabelScrollView;
@property (retain, nonatomic) UILabel *shopLabel;
@property (retain, nonatomic) UIButton *cartButton;
@property (retain, nonatomic) IESECUIImageView *cartButtonImageView;
@property (retain, nonatomic) IESECGradientView *gradientView;
@property (nonatomic) BOOL animationCancelled;
@property (copy, nonatomic) NSString *shopImageUrl;
@property (copy, nonatomic) id /* block */ backBlock;
@property (copy, nonatomic) id /* block */ cartBlock;
@property (copy, nonatomic) id /* block */ enterShopBlock;

- (void)updateNavBarShopAlpha:(double)a0;
- (void)updateTitle:(id)a0 shopImageUrlList:(id)a1;
- (void)backButtonDidTap:(id)a0;
- (void)startAnimationWithLabelWidth:(double)a0;
- (void)cartButtonDidTap:(id)a0;
- (void)enterShopDidTap:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)resetAnimation;

@end

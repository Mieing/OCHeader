@class UIButton, UILabel, IESECUIImageView;

@interface IESECMallInnerFeedImmersionNavBar : UIView

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) IESECUIImageView *backButtonImageView;
@property (retain, nonatomic) IESECUIImageView *titleIcon;
@property (retain, nonatomic) UIButton *shareButton;
@property (retain, nonatomic) IESECUIImageView *shareButtonImageView;
@property (retain, nonatomic) UIButton *cartButton;
@property (retain, nonatomic) IESECUIImageView *cartButtonImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ backBlock;
@property (copy, nonatomic) id /* block */ shareBlock;
@property (copy, nonatomic) id /* block */ cartBlock;

- (void)backButtonDidTap:(id)a0;
- (void)cartButtonDidTap:(id)a0;
- (void)setIsInnerTheme:(BOOL)a0;
- (void)shareButtonDidTap:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateTitle:(id)a0;

@end

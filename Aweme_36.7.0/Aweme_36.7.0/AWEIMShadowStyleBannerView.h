@class UIImageView, UILabel, UIView, UIButton;

@interface AWEIMShadowStyleBannerView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *leftIcon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *rightView;
@property (retain, nonatomic) UIButton *actionButton;
@property (nonatomic) BOOL needTopAvatarMsgAvoidBanner;

- (void)initBannerSubView;
- (void)addBannerSubView;
- (void)updateTitle:(id)a0 image:(id)a1;
- (void)updateRightActionButton:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateSize:(struct CGSize { double x0; double x1; })a0;

@end

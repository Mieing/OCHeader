@class UIView, AWEDSDashLineView, DUXPluralAvatar, UIImageView, AWEIMDSHiHiGroupInviteFloatingViewModel, CAShapeLayer, MASConstraint, DUXButton, UILabel;

@interface AWEIMDSHiHiGroupInviteFloatingView : UIView

@property (retain, nonatomic) UIView *bView;
@property (retain, nonatomic) UIView *progressView;
@property (retain, nonatomic) UIView *innerWrapperView;
@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIImageView *progressTextImageView;
@property (retain, nonatomic) UILabel *progressTextLabel;
@property (retain, nonatomic) DUXPluralAvatar *avatarsWrapperView;
@property (retain, nonatomic) UIImageView *arrowButtonView;
@property (retain, nonatomic) AWEDSDashLineView *sepLine;
@property (retain, nonatomic) UILabel *mainTextLabel;
@property (retain, nonatomic) UILabel *subTextLabel;
@property (retain, nonatomic) DUXButton *claimGroupButton;
@property (retain, nonatomic) AWEIMDSHiHiGroupInviteFloatingViewModel *currentModel;
@property (retain, nonatomic) MASConstraint *bViewHeightMC;
@property (retain, nonatomic) MASConstraint *bViewFoldHeightMC;
@property (retain, nonatomic) CAShapeLayer *shadow1;
@property (retain, nonatomic) CAShapeLayer *shadow2;
@property (retain, nonatomic) UIView *progressMaskView;
@property (nonatomic) long long remainHour;
@property (copy, nonatomic) id /* block */ action;
@property (copy, nonatomic) id /* block */ toggleAction;
@property (nonatomic) BOOL isFold;

- (void)setupDoubleShadows;
- (void)updateCountDownWithHour:(long long)a0;
- (void)updateLayoutWithModel:(id)a0 withAnimation:(BOOL)a1;
- (id)createGradientLayerToView:(id)a0 fromColor:(id)a1 toColor:(id)a2;
- (void)toggleAnimation;
- (void)claimGroup;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupViews;
- (void)playAnimation;

@end

@class UIStackView, AWEShakeShareAwemeBottomBarItemView, IESEffectModel, AWERadarGameManager;

@interface AWEShakeShareAwemeBottomBar : UIView

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) AWEShakeShareAwemeBottomBarItemView *diceItemView;
@property (retain, nonatomic) AWEShakeShareAwemeBottomBarItemView *scanItemView;
@property (retain, nonatomic) AWEShakeShareAwemeBottomBarItemView *groupItemView;
@property (retain, nonatomic) AWEShakeShareAwemeBottomBarItemView *codeItemView;
@property (retain, nonatomic) AWERadarGameManager *gameManager;
@property (retain, nonatomic) IESEffectModel *diceGame;

- (void)initView;
- (void)diceButtonTapped;
- (void)scanButtonTapped;
- (void)groupButtonTapped;
- (void)codeButtonTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

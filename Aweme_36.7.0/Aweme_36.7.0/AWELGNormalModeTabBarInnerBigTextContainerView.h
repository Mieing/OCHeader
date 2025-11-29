@class UILabel, AWELGNormalModeTabBarFullAbilityViewUIConfig;

@interface AWELGNormalModeTabBarInnerBigTextContainerView : UIView <AWELGNormalModeTabBarFullAbilityInnerContainerViewProtocol>

@property (retain, nonatomic) AWELGNormalModeTabBarFullAbilityViewUIConfig *UIConfig;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) BOOL isInTitleChangedAnimation;

- (void)updateTitle:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (struct CGPoint { double x0; double x1; })badgeBasePosition;
- (id)currentTitleText;
- (id)initWithUIConfig:(id)a0;
- (void)p_loadView;
- (BOOL)forbidBadgeShow;
- (void)updateTitleColor;
- (id)adaptiveFont:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateTitle;
- (void)updateTitleFont;
- (void)updateTitle:(id)a0 animated:(BOOL)a1;
- (void)updateTitle:(id)a0;

@end

@class NSString, UIImageView, UIViewPropertyAnimator, UILabel, AWELGNormalModeTabBarFullAbilityViewUIConfig, AWELGNormalModeTabBarGradientView;

@interface AWELGNormalModeTabBarInnerImageTextContainerView : UIView <CAAnimationDelegate, AWELGNormalModeTabBarFullAbilityInnerContainerViewProtocol>

@property (retain, nonatomic) AWELGNormalModeTabBarFullAbilityViewUIConfig *UIConfig;
@property (retain, nonatomic) AWELGNormalModeTabBarGradientView *gradientView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *avatarIconImageView;
@property (retain, nonatomic) UIImageView *oldAvatarIconImageView;
@property (retain, nonatomic) UIViewPropertyAnimator *showImageViewAnimator;
@property (retain, nonatomic) UIViewPropertyAnimator *hideImageViewAnimator;
@property (retain, nonatomic) UIViewPropertyAnimator *showAvatarIconAnimator;
@property (retain, nonatomic) UIViewPropertyAnimator *hideAvatarIconAnimator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGPoint { double x0; double x1; })badgeBasePosition;
- (id)currentTitleText;
- (BOOL)showAvatarIconWithImage:(id)a0 animated:(BOOL)a1;
- (void)p_cancelAllAnimation;
- (void)p_hideAvatarIcon:(BOOL)a0;
- (void)p_showAvatarIconWithImage:(id)a0 animated:(BOOL)a1;
- (void)p_startHideAvatarIconAnimation;
- (void)p_startAvatarIconChangeAnimationWithImage:(id)a0;
- (void)p_startAvatarIconShowAnimationWithImage:(id)a0;
- (void)p_updateUI;
- (void)p_addObserver;
- (id)initWithUIConfig:(id)a0;
- (void)p_loadView;
- (BOOL)forbidBadgeShow;
- (void)updateTitleColor;
- (void)updateImageHeight;
- (void)refreshImage;
- (id)adaptiveFont:(id)a0;
- (void)p_updateImageViewImage;
- (void)p_updateImageViewAlphaState;
- (void)p_updateLabelText;
- (void)p_updateTextColor;
- (struct CGSize { double x0; double x1; })p_gradientViewSizeWithHeight:(double)a0;
- (BOOL)p_isDisplayingAvatarIcon;
- (id)p_avatarIconImageViewWithImage:(id)a0 center:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)layoutSubviews;
- (id)currentImage;
- (void)updateTitle;
- (void)updateTitleFont;

@end

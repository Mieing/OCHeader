@interface BDPLogoAnimation : NSObject

+ (void)resetAnimationParamsIfNeededWithSubViews:(id)a0 isBubbleAnimation:(BOOL)a1;
+ (id)welcomeButtonWithWhiteTheme:(BOOL)a0 title:(id)a1;
+ (void)showWelcomeToastAnimationWithWelcomeButton:(id)a0 leftItems:(id)a1 hide:(BOOL)a2 hasTitleView:(BOOL)a3 isCustomNavigationBar:(BOOL)a4;
+ (void)hideTitleLabelWithArray:(id)a0 hide:(BOOL)a1 hasTitleView:(BOOL)a2;
+ (void)showLogoShakeAnimationWithLeftItems:(id)a0;
+ (id)validLogoAnimationScenes;

@end

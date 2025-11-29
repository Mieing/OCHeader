@class UIImage, NSMutableDictionary, UIView;

@interface AWEIMInputVCBadgeButton : IESIMButton

@property (retain, nonatomic) UIView *badgeBgView;
@property (retain, nonatomic) UIView *badgeDotView;
@property (nonatomic) long long currentTheme;
@property (retain, nonatomic) NSMutableDictionary *imageMap;
@property (retain, nonatomic) UIImage *dynamicImage;
@property (nonatomic) BOOL constThemeColor;

- (void)startPlayEntryGuideAnimationWithImage:(id)a0 completion:(id /* block */)a1;
- (void)reloadButtonByTintColorWithTheme:(long long)a0;
- (void)setImage:(id)a0 forState:(unsigned long long)a1 withTheme:(long long)a2;
- (void)reloadButtonTheme:(long long)a0;
- (void)setImageName:(id)a0 forState:(unsigned long long)a1;
- (void)setImageName:(id)a0 forState:(unsigned long long)a1 withTheme:(long long)a2;
- (void)p_updateBadgeColorInDark:(BOOL)a0;
- (void)animateToOriginImage:(id)a0 completion:(id /* block */)a1;
- (void)animateToGuideImage:(id)a0 completion:(id /* block */)a1;
- (void)showBadge:(BOOL)a0;
- (id)initWithDefault;
- (void).cxx_destruct;
- (BOOL)hasBadge;
- (void)setEnabled:(BOOL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end

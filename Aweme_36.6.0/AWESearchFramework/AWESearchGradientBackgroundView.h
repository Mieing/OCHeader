@interface AWESearchGradientBackgroundView : UIView

@property (nonatomic) float scrollAlpha;
@property (nonatomic) BOOL shouldShown;

+ (Class)layerClass;

- (void)awe_themeReload;
- (void)forceHideBackground:(BOOL)a0;
- (void)renewThemeStyle;
- (void)updateGradientColor:(id)a0 centerColor:(id)a1;
- (void)updateFullScreenGradientColor:(id)a0 centerColor:(id)a1;
- (void)updateGradientColorForAd:(id)a0;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAlpha:(double)a0;

@end

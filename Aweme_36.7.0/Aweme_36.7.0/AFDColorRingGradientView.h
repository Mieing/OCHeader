@class AFDGradientViewDisplayConfig;

@interface AFDColorRingGradientView : UIView

@property (retain, nonatomic) AFDGradientViewDisplayConfig *config;

+ (id)ringViewWithConfig:(id)a0;
+ (id)ringViewWithConfigBlock:(id /* block */)a0;
+ (Class)layerClass;

- (void)awe_themeDidChange:(long long)a0;
- (BOOL)isUsingConicGradient;
- (id)createAngularGradientImage;
- (void)createRingMask;
- (void)setupAngularGradient;
- (void)setupLinearGradient;
- (void)removeAngularGradientLayer;
- (id)colorAtProgress:(double)a0;
- (id)interpolateColorFrom:(id)a0 to:(id)a1 progress:(double)a2;
- (void)createAngularGradientLayer;
- (void).cxx_destruct;
- (id)init;
- (void)updateView;
- (id)gradientLayer;
- (void)layoutSubviews;
- (id)initWithConfig:(id)a0;

@end

@class UITapGestureRecognizer, AFDStoryGradientConfig;

@interface AFDStoryGradientRingView : UIView

@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (retain, nonatomic) AFDStoryGradientConfig *config;
@property (copy, nonatomic) id /* block */ didTap;

+ (Class)layerClass;

- (void)awe_themeDidChange:(long long)a0;
- (void)p_updateView;
- (void)p_didTapColorRing:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })innerRectFor:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 border:(double)a1;
- (void).cxx_destruct;
- (id)init;
- (id)gradientLayer;
- (void)layoutSubviews;
- (id)initWithConfig:(id)a0;

@end

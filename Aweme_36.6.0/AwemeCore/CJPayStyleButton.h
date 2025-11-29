@class UIColor, NSObject;
@protocol OS_dispatch_source;

@interface CJPayStyleButton : CJPayLoadingButton

@property (retain, nonatomic) NSObject<OS_dispatch_source> *cjButtonFreezeTimer;
@property (nonatomic) BOOL isGradientNormalBackground;
@property (nonatomic) BOOL isGradientDisabledBackground;
@property (nonatomic) BOOL isGradientHighlightBackground;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *titleColor;
@property (nonatomic) double disabledAlpha;
@property (retain, nonatomic) UIColor *normalBackgroundColorStart;
@property (retain, nonatomic) UIColor *normalBackgroundColorEnd;
@property (retain, nonatomic) UIColor *disabledBackgroundColorStart;
@property (retain, nonatomic) UIColor *disabledBackgroundColorEnd;
@property (retain, nonatomic) UIColor *highlightColorStart;
@property (retain, nonatomic) UIColor *highlightColorEnd;
@property (nonatomic) BOOL isVerticalGradientFilling;
@property (nonatomic) BOOL isEnableHighlightColor;

+ (id)p_imageFromGradientColors:(id)a0 size:(struct CGSize { double x0; double x1; })a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endPoint:(struct CGPoint { double x0; double x1; })a3;

- (void)_UIAppearance_setHighlightColorEnd:(id)a0;
- (void)_UIAppearance_setHighlightColorStart:(id)a0;
- (void)_UIAppearance_setDisabledBackgroundColorEnd:(id)a0;
- (void)_UIAppearance_setDisabledBackgroundColorStart:(id)a0;
- (void)_UIAppearance_setNormalBackgroundColorEnd:(id)a0;
- (void)_UIAppearance_setNormalBackgroundColorStart:(id)a0;
- (void)_UIAppearance_setDisabledAlpha:(double)a0;
- (void)_UIAppearance_setTitleColor:(id)a0;
- (void)_UIAppearance_setCornerRadius:(double)a0;
- (void)p_installDefaultAppearance;
- (void)p_applyGradientStyleWithSize:(struct CGSize { double x0; double x1; })a0 startColor:(id)a1 endColor:(id)a2 forState:(unsigned long long)a3;
- (void)p_applyNormalBackground;
- (void)p_applyDisabledBackground;
- (void)p_applyHighlightColor;
- (void)p_applySolidColor:(id)a0 forState:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;

@end

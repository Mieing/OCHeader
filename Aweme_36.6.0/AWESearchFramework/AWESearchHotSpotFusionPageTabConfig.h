@interface AWESearchHotSpotFusionPageTabConfig : NSObject

+ (BOOL)p_systemThemeIsLight;
+ (id)p_getGrayColor:(id)a0;
+ (id)tabGradientColorsWithTheme:(unsigned long long)a0 usePureColor:(BOOL)a1;
+ (id)indicatorGradientColorsWithTheme:(unsigned long long)a0 isGray:(BOOL)a1;
+ (id)tabSelectedGradientColorsWithTheme:(unsigned long long)a0;
+ (id)tabSelectedImageWithTheme:(unsigned long long)a0 needGray:(BOOL)a1;
+ (id)tabTextColorWithTheme:(unsigned long long)a0 isSelected:(BOOL)a1;
+ (id)tabSeparatorColorWithTheme:(unsigned long long)a0;
+ (id)tabCurveColorWithTheme:(unsigned long long)a0;
+ (id)tabBlurEffectWithTheme:(unsigned long long)a0;
+ (id)borderColor;

@end

@interface AWELiveFontFineGrainedUtil : NSObject

+ (BOOL)preStreamFineGrainedEnable;
+ (double)lengthSwitchByFontModeWithNormal:(double)a0 middle:(double)a1 large:(double)a2;
+ (struct CGSize { double x0; double x1; })sizeSwitchByFontModeWithNormal:(struct CGSize { double x0; double x1; })a0 middle:(struct CGSize { double x0; double x1; })a1 large:(struct CGSize { double x0; double x1; })a2;
+ (struct CGSize { double x0; double x1; })sizeSwitchWithRatioAndFontModeWithOriginSize:(struct CGSize { double x0; double x1; })a0 normal:(double)a1 middle:(double)a2 large:(double)a3;
+ (double)lengthSwitchWithRatioAndFontModeWithOriginLength:(double)a0 normal:(double)a1 middle:(double)a2 large:(double)a3;

- (id)init;

@end

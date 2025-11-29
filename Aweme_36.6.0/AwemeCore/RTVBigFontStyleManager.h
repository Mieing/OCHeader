@interface RTVBigFontStyleManager : NSObject

+ (struct CGSize { double x0; double x1; })screenSizeWithTargetView:(id)a0;
+ (double)keepFloatValue:(double)a0;
+ (double)scaleFloatValue:(double)a0;
+ (unsigned long long)currentFontMode;
+ (BOOL)rtv_isBigFontStyle;
+ (BOOL)rtv_enableBigFontStyle;
+ (void)rtv_scaleControllerViewWithView:(id)a0 wrappedInContainerVC:(BOOL)a1 isInit:(BOOL)a2;
+ (double)rtv_scaleFactor;
+ (struct CGSize { double x0; double x1; })rtv_screenSize;
+ (double)rtv_fontScaleFactor;

@end

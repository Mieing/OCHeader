@interface WCFinderColorHelper : NSObject

+ (id)changeUIColorToRGBA:(id)a0;
+ (void)setGradientLayer:(id)a0 endColor:(id)a1 view:(id)a2;
+ (id)clipImage:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)mainColorOfImage:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
+ (double)contrastRatio:(id)a0 color2:(id)a1;
+ (double)luminance:(id)a0;
+ (double)adjustColor:(double)a0;
+ (id)getImageGradientColorBy:(id)a0;
+ (BOOL)isWhiteApartColor:(id)a0;
+ (BOOL)isBlackApartColor:(id)a0;
+ (id)checkColorContrast:(id)a0;
+ (id)colorAtPixel:(struct CGPoint { double x0; double x1; })a0 image:(id)a1;
+ (id)RGBValueFromUIColor:(id)a0;
+ (id)transitionColorWithStartColor:(id)a0 endColor:(id)a1 progress:(double)a2;
+ (id)dynamicColorWithHexString:(id)a0;
+ (id)colorWithFinderColor:(id)a0;
+ (id)getFinderLinkColor;

@end

@interface AWEFormatUIUtils : NSObject

+ (double)scaleSizeForProMax:(double)a0;
+ (double)scaleSizeForSmallScreen:(double)a0;
+ (double)scaleSizeForProMaxAndSmallScreen:(double)a0;
+ (BOOL)isProMax;
+ (id)scaleImage:(id)a0 WithSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)isSmallScreen;

@end

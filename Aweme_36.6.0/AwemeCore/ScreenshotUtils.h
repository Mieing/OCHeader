@interface ScreenshotUtils : NSObject

+ (id)getBackgroundColor:(id)a0;
+ (float)calculateScaleByWidth:(int)a0 height:(int)a1 maxWidth:(int)a2 maxHeight:(int)a3;
+ (id)scaleImage:(id)a0 toScale:(float)a1;
+ (id)encode:(id)a0 withQuality:(int)a1;
+ (id)getSnapshot:(id)a0;

@end

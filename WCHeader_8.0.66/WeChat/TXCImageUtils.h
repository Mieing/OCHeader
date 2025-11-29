@interface TXCImageUtils : NSObject

+ (struct CGImage { } *)cgImageFromImage:(id)a0;
+ (id)imageFromCgImage:(struct CGImage { } *)a0;
+ (BOOL)isMirrored:(unsigned int)a0;
+ (BOOL)isLandscape:(unsigned int)a0;
+ (id)createImageFromImage:(id)a0 withAngle:(double)a1;

@end

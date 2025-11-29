@interface BDQRCodeGenerator : NSObject

+ (id)codeImageWithConfig:(id)a0 error:(id *)a1;
+ (id)zxLevelFromErrorLevel:(unsigned long long)a0;
+ (id)scaledImageFromImage:(struct CGImage { } *)a0 targetSize:(double)a1;
+ (id)scaleCodeImage:(id)a0 toSize:(long long)a1;

@end

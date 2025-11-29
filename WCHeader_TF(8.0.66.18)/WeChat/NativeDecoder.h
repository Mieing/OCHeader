@interface NativeDecoder : NSObject

+ (struct CGColorSpace { } *)colorSpaceGetDeviceRGB;
+ (BOOL)CGImageContainsAlpha:(struct CGImage { } *)a0;
+ (unsigned long long)pixelFormatOfImageRef:(struct CGImage { } *)a0;
+ (id)createUIImage:(id)a0 maxWidth:(int)a1 maxHeight:(int)a2;
+ (int)Flutter_nativeDecoderCreate:(id)a0 maxWidth:(int)a1 maxHeight:(int)a2;
+ (int)Flutter_nativeDecoderGetFrameCount:(int)a0;
+ (struct { int x0; int x1; long long x2; long long x3; long long x4; int x5; int x6; } *)Flutter_nativeDecoderGetFrame:(int)a0 frameIndex:(int)a1;
+ (BOOL)Flutter_nativeDecoderReleaseFrameData:(int)a0 frameInfo:(struct { int x0; int x1; long long x2; long long x3; long long x4; int x5; int x6; } *)a1;
+ (BOOL)Flutter_nativeDecoderReleaseDecoder:(int)a0;
+ (void)lsof;

@end

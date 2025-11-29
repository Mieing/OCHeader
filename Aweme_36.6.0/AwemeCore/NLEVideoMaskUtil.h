@interface NLEVideoMaskUtil : NSObject

+ (struct CGSize { double x0; double x1; })maskAspectSizeWith:(struct CGSize { double x0; double x1; })a0 maskSize:(struct CGSize { double x0; double x1; })a1 aspectRatio:(double)a2;
+ (id)maskParamsWithMask:(const void *)a0 cropSize:(struct CGSize { double x0; double x1; })a1 newMaskSize:(struct CGSize { double x0; double x1; })a2;
+ (id)maskParamsWithMask:(const void *)a0 cropSize:(struct CGSize { double x0; double x1; })a1;

@end

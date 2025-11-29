@class VEFastcvRgb2Yuv;

@interface VEFastCropUnit : IESMMObject

@property (retain, nonatomic) VEFastcvRgb2Yuv *cropUnit;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (nonatomic) long long scaleMode;
@property (nonatomic) struct CGSize { double width; double height; } fitInAspectRatio;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCropWithInputSize:(struct CGSize { double x0; double x1; })a0 outputSize:(struct CGSize { double x0; double x1; })a1 scaleMode:(long long)a2;
- (struct __CVBuffer { } *)cropPixelBuffer:(struct __CVBuffer { } *)a0;
- (void).cxx_destruct;

@end

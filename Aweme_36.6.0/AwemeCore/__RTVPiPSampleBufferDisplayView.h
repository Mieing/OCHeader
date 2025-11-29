@class AVSampleBufferDisplayLayer;

@interface __RTVPiPSampleBufferDisplayView : UIView

@property (readonly, nonatomic) AVSampleBufferDisplayLayer *sampleBufferLayer;

+ (Class)layerClass;

- (void)updateWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct opaqueCMSampleBuffer { } *)__makeSampleBufferWithSize:(struct CGSize { double x0; double x1; })a0 time:(double)a1;
- (struct opaqueCMSampleBuffer { } *)__makeSampleBufferWithPixelBuffer:(struct __CVBuffer { } *)a0 time:(double)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

@interface ODSRenderViewIOSDisplay : UIView

+ (Class)layerClass;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (id)displayLayer;
- (void)displayPixelBuffer:(struct __CVBuffer { } *)a0 enableHDR:(BOOL)a1;
- (struct opaqueCMSampleBuffer { } *)createSampleBufferWithPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)displaySampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end

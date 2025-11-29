@class AVSampleBufferDisplayLayer;

@interface IESLiveScreencastMsgPushPiPSampleBufferDisplayView : UIView

@property (retain, nonatomic) AVSampleBufferDisplayLayer *sampleBufferLayer;

+ (Class)layerClass;

- (void)updateWithVideoSize:(struct CGSize { double x0; double x1; })a0;
- (struct opaqueCMSampleBuffer { } *)makeSampleBufferWithVideoSize:(struct CGSize { double x0; double x1; })a0 time:(double)a1;
- (struct opaqueCMSampleBuffer { } *)makeSampleBufferWithPixelBuffer:(struct __CVBuffer { } *)a0 time:(double)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

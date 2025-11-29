@class AVSampleBufferDisplayLayer;

@interface XSampleBufferDisplayView : UIView

@property (retain, nonatomic) AVSampleBufferDisplayLayer *displayLayer;

+ (Class)layerClass;

- (void)setVideoContentMode:(unsigned long long)a0;
- (BOOL)enqueueImage:(id)a0;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end

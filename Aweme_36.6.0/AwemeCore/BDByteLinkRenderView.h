@class AVSampleBufferDisplayLayer;

@interface BDByteLinkRenderView : UIImageView

@property (readonly, nonatomic) AVSampleBufferDisplayLayer *displayLayer;
@property (nonatomic) struct OpaqueCMTimebase { } *controlTimebase;

- (void)initializeDisplayLayer;
- (void)handleVideoBuffer:(struct opaqueCMSampleBuffer { } *)a0 pts:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;

@end

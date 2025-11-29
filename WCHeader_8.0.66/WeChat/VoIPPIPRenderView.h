@class AVSampleBufferDisplayLayer;

@interface VoIPPIPRenderView : UIView {
    struct __CVBuffer { } *_localImageBuffer;
}

@property (retain, nonatomic) AVSampleBufferDisplayLayer *customRenderLayer;

+ (id)viewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 avSampleBufferDisplayerLayer:(id)a1;
- (void)layoutSubviews;
- (void)clear;
- (void)drawPixelBufferRef:(struct __CVBuffer { } *)a0;
- (void).cxx_destruct;

@end

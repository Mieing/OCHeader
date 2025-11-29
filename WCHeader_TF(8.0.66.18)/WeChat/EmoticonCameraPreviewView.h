@class CAEAGLLayer;

@interface EmoticonCameraPreviewView : SightPreviewViewF2

@property (retain, nonatomic) CAEAGLLayer *previewLayer;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setVideoOuputSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateWithXEffectManager:(id)a0;
- (void).cxx_destruct;

@end

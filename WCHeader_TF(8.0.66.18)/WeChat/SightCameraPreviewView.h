@class CALayer;

@interface SightCameraPreviewView : SightPreviewViewF2

@property (retain, nonatomic) CALayer *previewLayer;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setVideoOuputSize:(struct CGSize { double x0; double x1; })a0;
- (void)updatePreviewLayer:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end

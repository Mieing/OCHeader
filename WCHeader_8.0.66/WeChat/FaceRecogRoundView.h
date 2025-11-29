@class UIImageView, CALayer, AVCaptureVideoPreviewLayer, UIView;

@interface FaceRecogRoundView : MMUIView

@property (weak, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;
@property (retain, nonatomic) UIImageView *facePositionBox;
@property (retain, nonatomic) CALayer *shapeLayer;
@property (retain, nonatomic) UIView *previewView;
@property (retain, nonatomic) UIView *blurBkView;
@property (retain, nonatomic) UIImageView *blurView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } faceRoundFrame;
@property (nonatomic) BOOL showFacePositionBox;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 FaceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)attachPreviewLayer:(id)a0;
- (void)showLoading:(BOOL)a0 image:(id)a1 scale:(double)a2 completion:(id /* block */)a3;
- (void)resetView;
- (void).cxx_destruct;

@end

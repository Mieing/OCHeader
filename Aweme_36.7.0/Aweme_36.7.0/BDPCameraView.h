@class UITapGestureRecognizer, AVCaptureVideoPreviewLayer, BDPCameraFocusView;
@protocol BDPCameraViewDelegate;

@interface BDPCameraView : UIView {
    BOOL _focusViewAnimating;
    AVCaptureVideoPreviewLayer *_previewLayer;
    BDPCameraFocusView *_focusView;
    UITapGestureRecognizer *_tapGesture;
}

@property (weak, nonatomic) id<BDPCameraViewDelegate> delegate;

- (void)setupCapturePreviewLayer:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)tapGestureRecognizerAction:(id)a0;

@end

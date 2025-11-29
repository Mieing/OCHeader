@class UIImageView, UIVisualEffectView, BDCTWaitingView;

@interface BDCTFaceVerifyHalfVC : BDCTFaceVerifyVC

@property (retain, nonatomic) UIImageView *faceImageView;
@property (retain, nonatomic) UIVisualEffectView *blurEffectView;
@property (retain, nonatomic) BDCTWaitingView *indicatorView;
@property (nonatomic) BOOL showBlurLoading;

- (void)layoutContentViews;
- (id)faceVerifyTipLabel;
- (void)showPixel:(struct __CVBuffer { } *)a0;
- (void)livenessTC:(id)a0 infoDetectWith:(struct __CVBuffer { } *)a1;
- (void)livenessTCEndInfoDetect:(id)a0;
- (void).cxx_destruct;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)viewDidLoad;
- (id)faceView;

@end

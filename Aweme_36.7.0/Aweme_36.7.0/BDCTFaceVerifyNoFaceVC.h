@class UIButton, UIImageView;

@interface BDCTFaceVerifyNoFaceVC : BDCTFaceVerifyVC

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *faceIcon;

- (void)layoutContentViews;
- (id)faceVerifyTipLabel;
- (void).cxx_destruct;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)viewDidLoad;
- (id)faceView;

@end

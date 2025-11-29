@class UIView, AVCaptureVideoPreviewLayer, NSString, UIImageView, AVCaptureSession, NSMutableArray, ScanLicenceBackgroundView, MMUILabel, UILabel, SequenceAnimationObject;
@protocol MMDetectIDCardViewControllerDelegate;

@interface MMDetectIDCardViewController : MMUIViewController <AVCaptureVideoDataOutputSampleBufferDelegate> {
    struct MyImage { int x0; int x1; int x2; int x3; int x4; struct MyRect { int x0; int x1; int x2; int x3; } x5; int x6; char *x7; BOOL x8; } *origImg;
    struct MyImage { int x0; int x1; int x2; int x3; int x4; struct MyRect { int x0; int x1; int x2; int x3; } x5; int x6; char *x7; BOOL x8; } *grayImg;
    int _edgeTh;
    BOOL _didHandledRotate;
    BOOL _didSetupUI;
}

@property (retain, nonatomic) AVCaptureSession *captureSession;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;
@property (retain, nonatomic) ScanLicenceBackgroundView *backgroundView;
@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *scanStatusView;
@property (retain, nonatomic) UIImageView *scanStatusIcon;
@property (retain, nonatomic) UILabel *scanStatusLabel;
@property (retain, nonatomic) NSString *scanStatus;
@property (nonatomic) long long edgeFailedCount;
@property (nonatomic) long long stableFailedCount;
@property (retain, nonatomic) NSMutableArray *frameStatusArray;
@property (retain, nonatomic) SequenceAnimationObject *animateObject;
@property (retain, nonatomic) UIView *topBarView;
@property (retain, nonatomic) UIView *bottomBarView;
@property (retain, nonatomic) UIView *leftBarView;
@property (retain, nonatomic) UIView *rightBarView;
@property (nonatomic) int cutImgVScreenHeight;
@property (nonatomic) int cutImgVScreenWidth;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned int frameCount;
@property (nonatomic) unsigned long long authScene;
@property (weak, nonatomic) id<MMDetectIDCardViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAuthScene:(unsigned long long)a0;
- (void)updateFrameArray;
- (void)dealloc;
- (void)viewDidLoad;
- (void)updateContainerView;
- (void)updateScanStatusView;
- (void)updateScanStatusIcon;
- (void)updateScanStatusLabel;
- (void)hideScanStatus;
- (void)animateScanStatus;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidTransitionToNewSize;
- (BOOL)useTransparentNavibar;
- (void)setupUI;
- (void)setGreenBarView;
- (void)setupTipLabel;
- (void)setupEngine;
- (void)setupInput;
- (void)setupScanSize;
- (BOOL)setupIDCardEngine;
- (void)setupImageBuffer;
- (void)setupVideoDataOutput;
- (void)onReturn;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewBounds;
- (float)getRotateRadius:(long long)a0;
- (void)handleVisible:(BOOL)a0 forView:(id)a1;
- (void)setBarViewToInvisible:(id)a0;
- (void)stopEngine;
- (void)continuousAutoFocus:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)useHighResolution;
- (void)startCapture;
- (void)stopCapture;
- (BOOL)addOutput:(id)a0;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)reportMode:(unsigned long long)a0 action:(unsigned long long)a1;
- (void).cxx_destruct;

@end

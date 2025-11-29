@class AVCaptureSession, NSString, ScanLicenceBackgroundView, UIView, AVCaptureVideoPreviewLayer, MMUILabel;
@protocol JSApiScanLicenceViewControllerDelegate;

@interface JSApiScanLicenceViewController : MMUIViewController <AVCaptureVideoDataOutputSampleBufferDelegate> {
    int _edgeTh;
    double _typeAspectRadio;
    int cutImgVScreenHeight;
    int cutImgVScreenWidth;
    struct MyImage { int x0; int x1; int x2; int x3; int x4; struct MyRect { int x0; int x1; int x2; int x3; } x5; int x6; char *x7; BOOL x8; } *origImg;
    struct MyImage { int x0; int x1; int x2; int x3; int x4; struct MyRect { int x0; int x1; int x2; int x3; } x5; int x6; char *x7; BOOL x8; } *grayImg;
    UIView *_topBarView;
    UIView *_bottomBarView;
    UIView *_leftBarView;
    UIView *_rightBarView;
    unsigned long long _scanType;
    ScanLicenceBackgroundView *m_backgroundView;
    MMUILabel *_tipsLabel;
    BOOL shouldStopCapture;
    BOOL _didHandledRotate;
    BOOL _didSetupUI;
    BOOL _canReturn;
}

@property (retain, nonatomic) AVCaptureSession *captureSession;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *prevLayer;
@property (weak, nonatomic) id<JSApiScanLicenceViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithType:(unsigned long long)a0;
- (void)dealloc;
- (void)onReturn;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidTransitionToNewSize;
- (float)getRotateRadius:(long long)a0;
- (void)stopEngine;
- (void)setupEngine;
- (void)setGreenBarView;
- (void)setupUI;
- (void)personTipsAction:(id)a0;
- (void)backAction:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewBounds;
- (void)printVersion;
- (void)startCapture;
- (void)stopCapture;
- (BOOL)addOutput:(id)a0;
- (void)continuousAutoFocus:(struct CGPoint { double x0; double x1; })a0;
- (void)finalizeCapture;
- (BOOL)useHighResolution;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)handleVisible:(BOOL)a0 forView:(id)a1;
- (void)setBarViewToInvisible:(id)a0;
- (void).cxx_destruct;

@end

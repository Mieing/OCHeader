@class AVCaptureSession, NSString, AVCaptureStillImageOutput, AVCaptureDeviceInput, UIView, AVCaptureDevice, AVCaptureVideoPreviewLayer;

@interface BDCTTakePhotoBaseViewController : UIViewController

@property (retain, nonatomic) UIView *overlayView;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *defaultCameraPosition;
@property (retain, nonatomic) AVCaptureSession *session;
@property (retain, nonatomic) AVCaptureStillImageOutput *captureOutput;
@property (retain, nonatomic) AVCaptureDevice *captureDevice;
@property (retain, nonatomic) AVCaptureDeviceInput *captureDeviceInput;
@property (retain, nonatomic) AVCaptureStillImageOutput *stillImageOutput;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *preview;
@property (retain, nonatomic) UIView *focusView;

- (void)switchCamera;
- (void)initSubViews;
- (void)focusGesture:(id)a0;
- (void)loadCaptureSession;
- (struct CGSize { double x0; double x1; })getScreenSize;
- (long long)avOrientationForDeviceOrientation:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropRectForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 image:(id)a1;
- (void)focusAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)showOverlayView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (id)cameraWithPosition:(long long)a0;

@end

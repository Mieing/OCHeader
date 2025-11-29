@class AVCaptureSession, AVCaptureDepthDataOutput, AVCaptureDataOutputSynchronizer, NSString, AVCaptureDevice, AVCaptureVideoDataOutput;

@interface BDCTBaseCameraViewController : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, AVCaptureDataOutputSynchronizerDelegate> {
    BOOL _isFirstAppear;
}

@property (retain, nonatomic) AVCaptureSession *cameraSession;
@property (nonatomic) BOOL isCameraSessionConfiguring;
@property (nonatomic) BOOL firstSampleCaptureOutput;
@property (retain, nonatomic) AVCaptureDevice *videoDevice;
@property (retain, nonatomic) AVCaptureVideoDataOutput *videoOutput;
@property (retain, nonatomic) AVCaptureDepthDataOutput *depthOutput;
@property (retain, nonatomic) AVCaptureDataOutputSynchronizer *synchronizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deviceOrientationDidChange;
- (void)updateUIWhenCaptureSessionStateChange:(id)a0;
- (void)cameraSessionDidStartRunning:(id)a0;
- (void)startCameraIfNeededAfterApplicationBecomeActive;
- (void)checkCameraPermission;
- (void)requestCameraPermissionIfNeeded;
- (void)requestAudioPermissionIfNeeded;
- (void)p_cameraPermissionDidReady;
- (void)createNewCameraSession;
- (void)stopCameraIfNeeded;
- (void)showToastAlertWithMessage:(id)a0;
- (void)p_didTapExitForPermissionError:(long long)a0;
- (long long)requirePermission;
- (void)didTapNavBackButton;
- (void)didTapExitForPermissionError:(long long)a0;
- (void)cameraDidSetupWithResult:(id)a0;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)applicationDidBecomeActive;
- (long long)preferredStatusBarStyle;
- (void)applicationWillResignActive;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)dataOutputSynchronizer:(id)a0 didOutputSynchronizedDataCollection:(id)a1;
- (void)setupCameraSession;

@end

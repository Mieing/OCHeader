@class NSTimer, AVCaptureVideoPreviewLayer, NSString, AWECardOCRScanView, AVCaptureSession, NSObject, AVCaptureDevice, AWECardOCRPageParams, AVCaptureVideoDataOutput, AWECardOCRConfig;
@protocol OS_dispatch_queue;

@interface AWEOCRBaseViewController : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate>

@property (retain, nonatomic) AVCaptureSession *session;
@property (retain, nonatomic) AVCaptureVideoDataOutput *videoDataOutput;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *videoDataOutputQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sessionControlQueue;
@property (retain, nonatomic) NSTimer *samplingTimer;
@property (retain, nonatomic) NSTimer *serverBackupTimer;
@property (nonatomic) long long alertLeftTime;
@property (nonatomic) BOOL haveFinishedCallback;
@property (nonatomic) BOOL hasShownNotDeterminedAlert;
@property (nonatomic) BOOL hasShownOCRPage;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) AVCaptureDevice *currentCaptureDevice;
@property (retain, nonatomic) AWECardOCRScanView *ocrScanView;
@property (nonatomic) BOOL recognizeEnable;
@property (nonatomic) BOOL forceFetchingframe;
@property (retain, nonatomic) NSTimer *alertTimer;
@property (retain, nonatomic) AWECardOCRPageParams *params;
@property (retain, nonatomic) AWECardOCRConfig *cardOCRConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)itemConfig;
- (void)p_initConfig;
- (BOOL)hasCameraPermission;
- (id)portraitLandscapeWithParams;
- (void)backEmptyWithStatus:(unsigned long long)a0;
- (BOOL)hasAlbumPermission;
- (void)startSessionAndScan:(BOOL)a0;
- (void)resetAlertTimer;
- (void)completionCallBackWithResult:(id)a0;
- (void)alertTimeOut;
- (void)p_addMask;
- (BOOL)isInPadMultiWindowState;
- (void)p_configSession;
- (void)p_configOrientationListen;
- (void)p_stopAllTimers;
- (void)p_handleDeviceOrientationDidChange;
- (void)p_driveToFocus:(long long)a0;
- (void)p_runSession;
- (void)notDeterminedAction;
- (void)restartAllTimers;
- (void)p_alertTimerRun;
- (void)p_sampleTimerRun;
- (long long)videoOrientation;
- (void).cxx_destruct;
- (void)stopSession;
- (id)initWithParams:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)viewDidLoad;
- (void)startSession;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;
- (void)back;

@end

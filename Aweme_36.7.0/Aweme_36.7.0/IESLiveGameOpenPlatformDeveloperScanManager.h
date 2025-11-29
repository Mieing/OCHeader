@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureMetadataOutput, NSString, AVCaptureVideoPreviewLayer, NSObject;
@protocol OS_dispatch_queue, IESLiveGameOpenPlatformDeveloperScanManagerDelegate;

@interface IESLiveGameOpenPlatformDeveloperScanManager : NSObject <AVCaptureMetadataOutputObjectsDelegate>

@property (retain, nonatomic) AVCaptureSession *session;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (retain, nonatomic) AVCaptureDeviceInput *deviceInput;
@property (retain, nonatomic) AVCaptureMetadataOutput *metadataOutput;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL enableScan;
@property (weak, nonatomic) id<IESLiveGameOpenPlatformDeveloperScanManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)setupSessionPreset:(id)a0 metadataObjectTypes:(id)a1 currentController:(id)a2;
- (void)addVideoPreviewLayerToView:(id)a0;
- (void)videoPreviewLayerRemoveFromSuperlayer;
- (void).cxx_destruct;
- (void)reset;
- (void)startRunning;
- (void)stopRunning;
- (void)captureOutput:(id)a0 didOutputMetadataObjects:(id)a1 fromConnection:(id)a2;

@end

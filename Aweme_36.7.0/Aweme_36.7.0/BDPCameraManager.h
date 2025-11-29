@class AVCaptureVideoPreviewLayer, NSRecursiveLock, AVCaptureOutput, BDPCameraInstanceConfig, AVCaptureSession, NSObject, AVCaptureDeviceInput, NSMapTable, AVCaptureVideoDataOutput;
@protocol OS_dispatch_queue;

@interface BDPCameraManager : NSObject {
    AVCaptureDeviceInput *_currentInput;
    AVCaptureOutput *_currentOutput;
    AVCaptureDeviceInput *_currentAudioInput;
    AVCaptureOutput *_currentAudioOutput;
    AVCaptureVideoDataOutput *_currentScanOutput;
    NSObject<OS_dispatch_queue> *_configQueue;
    BDPCameraInstanceConfig *_currentConfig;
}

@property (retain, nonatomic) AVCaptureSession *captureSession;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;
@property (retain, nonatomic) NSRecursiveLock *cameraRecordLock;
@property (retain, nonatomic) NSMapTable *cameraRecords;

+ (void)setupVideoOrientationAndMirroredForOutput:(id)a0 devicePosition:(long long)a1;
+ (float)setupDeviceFrameRateForInput:(id)a0;
+ (void)setCameraZoomFactorForInput:(id)a0 zoomFactor:(double)a1;
+ (BOOL)setupCameraFlashForInput:(id)a0 flashMode:(long long)a1;
+ (double)getMaxZoomFactorForInput:(id)a0;
+ (id)cameraRecordKey:(id)a0 pageID:(long long)a1;
+ (id)getCameraWithDevicePosition:(long long)a0;
+ (id)getInputWithDevicePosition:(long long)a0;
+ (void)setCameraFocusForInput:(id)a0 point:(struct CGPoint { double x0; double x1; })a1;
+ (id)sharedManager;

- (void)handleAppEnterBackground:(id)a0;
- (void)handleAppEnterForeground:(id)a0;
- (void)startInstanceConfig:(id)a0 completion:(id /* block */)a1;
- (void)updateInstanceConfig:(id)a0 completion:(id /* block */)a1;
- (void)stopInstanceConfig:(id)a0 completion:(id /* block */)a1;
- (void)runConfigOnConfigQueue:(id /* block */)a0 isSync:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)addCameraRecord:(id)a0 pageID:(long long)a1 config:(id)a2;
- (BOOL)removeCameraRecord:(id)a0 pageID:(long long)a1 config:(id)a2;
- (BOOL)hasCameraRecord:(id)a0 pageID:(long long)a1;
- (id)getPhotoSettingsWithOutput:(id)a0;
- (void).cxx_destruct;
- (void)removeNotificationObserver;
- (void)addInput:(id)a0;
- (id)init;
- (void)addNotificationObserver;

@end

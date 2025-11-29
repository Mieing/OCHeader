@class AVCaptureSession, NSString, AVCaptureDeviceInput, NSArray, NSObject, AVCaptureDevice;
@protocol OS_dispatch_queue, CameraVideoDeviceDelegate;

@interface CameraDevice : NSObject <YTAGReflectDeviceDelegate> {
    AVCaptureDevice *inputCamera;
    AVCaptureDeviceInput *videoInput;
    NSObject<OS_dispatch_queue> *deviceOperationQueue;
    NSArray *observers;
    BOOL cameraConfiguring;
    BOOL focusListening;
}

@property (weak, nonatomic) NSObject<CameraVideoDeviceDelegate> *delegate;
@property (retain, nonatomic) AVCaptureSession *session;
@property (nonatomic) BOOL running;
@property (nonatomic) BOOL pause;
@property (nonatomic) long long position;
@property (nonatomic) long long focusMode;
@property (nonatomic) struct CGPoint { double x; double y; } focusPoint;
@property (nonatomic) long long exposureMode;
@property (nonatomic) struct CGPoint { double x; double y; } exposurePoint;
@property (nonatomic) int flashMode;
@property (nonatomic) long long whiteBalanceMode;
@property (nonatomic) double DeviceISO;
@property (nonatomic) double Device_minISO;
@property (nonatomic) double Device_maxISO;
@property (nonatomic) double DeviceAperture;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } DeviceExposureDuration;
@property (nonatomic) BOOL isCustomExposureSupported;
@property (nonatomic) BOOL lowLightBoost;
@property (readonly, nonatomic) BOOL hasFlash;
@property (readonly, nonatomic) BOOL hasFront;
@property (retain, nonatomic) AVCaptureSession *captureSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)deviceDenied;

- (id)initWithSessionPreset:(id)a0 cameraPosition:(long long)a1;
- (void)dealloc;
- (id)getCaptureDevice;
- (void)setCameraSettings:(long long)a0 iso:(int)a1;
- (void)startDevice;
- (void)stopDevice;
- (id)deviceQueue;
- (void)beginConfiguration;
- (void)commitConfiguration;
- (void)restartDevcie;
- (id)deviceWithType:(id)a0 position:(long long)a1;
- (void)changeDevicePosition;
- (void)addFocusChangeListener;
- (void)removeFocusChangeListener;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end

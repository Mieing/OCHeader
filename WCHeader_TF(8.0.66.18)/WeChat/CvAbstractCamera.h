@class AVCaptureSession, NSString, UIView, AVCaptureVideoPreviewLayer, AVCaptureConnection;

@interface CvAbstractCamera : NSObject {
    long long currentDeviceOrientation;
    BOOL cameraAvailable;
}

@property (retain, nonatomic) AVCaptureVideoPreviewLayer *captureVideoPreviewLayer;
@property (retain, nonatomic) AVCaptureSession *captureSession;
@property (retain, nonatomic) AVCaptureConnection *videoCaptureConnection;
@property (readonly, nonatomic) BOOL running;
@property (readonly, nonatomic) BOOL captureSessionLoaded;
@property (nonatomic) int defaultFPS;
@property (nonatomic) long long defaultAVCaptureDevicePosition;
@property (nonatomic) long long defaultAVCaptureVideoOrientation;
@property (nonatomic) BOOL useAVCaptureVideoPreviewLayer;
@property (retain, nonatomic) NSString *defaultAVCaptureSessionPreset;
@property (nonatomic) int imageWidth;
@property (nonatomic) int imageHeight;
@property (retain, nonatomic) UIView *parentView;

- (id)init;
- (id)initWithParentView:(id)a0;
- (void)dealloc;
- (void)start;
- (void)pause;
- (void)stop;
- (void)switchCameras;
- (void)deviceOrientationDidChange:(id)a0;
- (void)createCaptureSession;
- (void)createCaptureDevice;
- (void)createVideoPreviewLayer;
- (void)setDesiredCameraPosition:(long long)a0;
- (void)startCaptureSession;
- (void)createCaptureOutput;
- (void)createCustomVideoPreview;
- (void)updateOrientation;
- (void)updateSize;
- (void)lockFocus;
- (void)unlockFocus;
- (void)lockExposure;
- (void)unlockExposure;
- (void)lockBalance;
- (void)unlockBalance;

@end

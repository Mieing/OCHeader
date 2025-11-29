@class NSObject, NSString, AVCaptureSession, SonicCameraConfig, SonicCameraDelegate, AVCaptureInput, AVCaptureDevice, AVCaptureVideoDataOutput;
@protocol OS_dispatch_queue;

@interface SonicDarwinCamera : NSObject <SonicCamera> {
    AVCaptureInput *videoInput_;
    AVCaptureVideoDataOutput *output_;
    SonicCameraConfig *config_;
    AVCaptureSession *session_;
    SonicCameraDelegate *delegate_;
    AVCaptureDevice *device_;
    NSObject<OS_dispatch_queue> *camera_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getCameraConfig;
- (id)requestCameraWithConfig:(id)a0;
- (BOOL)disposeCamera;
- (void)setCameraZoom:(double)a0;
- (void).cxx_destruct;
- (id)initWithCallback:(id)a0;
- (BOOL)pauseCamera;
- (BOOL)resumeCamera;

@end

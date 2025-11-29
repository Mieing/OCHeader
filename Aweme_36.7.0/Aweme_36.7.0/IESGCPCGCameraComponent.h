@class NSString, IESGCPXPlayCameraCaptureParams;
@protocol IESGCPXPlayCameraService;

@interface IESGCPCGCameraComponent : IESGCPCGInstanceBaseComponent <IESGCPCGInstanceActions, IESGCPXPlayCameraOutput, XPlayCameraDelegate, IESGCPCGRotationActions>

@property (retain, nonatomic) id<IESGCPXPlayCameraService> cameraService;
@property (retain, nonatomic) IESGCPXPlayCameraCaptureParams *captureParams;
@property (nonatomic) BOOL shouldResumeCameraCapture;
@property (nonatomic) unsigned long long netStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)camera:(id)a0 onCaptureRequest:(id)a1 completion:(id /* block */)a2;
- (void)camera:(id)a0 onStopCaptureRequest:(id /* block */)a1;
- (void)camera:(id)a0 onSwitchCameraRequest:(id /* block */)a1;
- (void)didSetGameCPDIContext;
- (void)cameraService:(id)a0 didOutputVideoFrame:(id)a1;
- (long long)xplayFrameRotationFromOrientation:(long long)a0;
- (void)playInstanceOnFirstFrameReceived:(id)a0 info:(id)a1;
- (void)playInstanceDidLostConnection:(id)a0;
- (void)playInstance:(id)a0 netStatusChangedFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (void)_onAppDidBecomeActive:(id)a0;
- (void)_onAppDidEnterBackground:(id)a0;
- (void)containerDidChangeToOrientation:(long long)a0 direction:(unsigned long long)a1;
- (void)_stopCameraCapture:(id /* block */)a0;
- (id)cameraCaptureConfig;
- (void)updateCameraVideoEncoderConfigWithOrientation:(long long)a0;
- (void)_startCameraCaptureWithParams:(id)a0 completion:(id /* block */)a1;
- (id)xplayCamera;
- (void)_requestCameraPermissionIfNeeded:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

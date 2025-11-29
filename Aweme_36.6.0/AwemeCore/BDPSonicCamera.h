@class SonicCameraConfig, NSString, BDPCameraInstanceConfig, NSObject, BDPUniqueID;
@protocol OS_dispatch_queue, SonicCameraCallback;

@interface BDPSonicCamera : NSObject <BDPCameraInstanceProtocol, BDPAppRouteChangeMessage, AVCaptureVideoDataOutputSampleBufferDelegate, SonicCamera>

@property (copy, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) int pageID;
@property (retain, nonatomic) id<SonicCameraCallback> callback;
@property (retain, nonatomic) SonicCameraConfig *sonicConfig;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *captureQueue;
@property (retain, nonatomic) BDPCameraInstanceConfig *cameraConfig;
@property BOOL initialized;
@property BOOL destoryed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)errMsgForErrCode:(long long)a0;
+ (BOOL)isAuthorizedCameraForUniqueID:(id)a0;
+ (id)sonicCameraErrorWithCode:(long long)a0;

- (id)getCameraConfig;
- (id)requestCameraWithConfig:(id)a0;
- (BOOL)disposeCamera;
- (void)setCameraZoom:(double)a0;
- (void)onAppRouteChangePageDidEnterWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (void)onAppRouteChangePageDidLeaveWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (void)onCameraEndInterruption;
- (void)onCameraBeginInterruption;
- (void)onCameraStopped;
- (void)onCameraInitDoneWithMaxZoom:(double)a0;
- (void)buildSonicCamera;
- (id)cameraInstanceConfigWithUniqueID:(id)a0 pageID:(long long)a1 cameraConfig:(id)a2;
- (id)initWithUniqueID:(id)a0 pageID:(int)a1 callback:(id)a2;
- (void).cxx_destruct;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)dealloc;
- (BOOL)pauseCamera;
- (BOOL)resumeCamera;

@end

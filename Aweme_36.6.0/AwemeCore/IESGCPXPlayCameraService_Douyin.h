@class NSString, AWEXPlayCameraCaptureService;
@protocol IESGCPXPlayCameraOutput;

@interface IESGCPXPlayCameraService_Douyin : NSObject <AWEXPlayCameraCaptureOutput, IESGCPXPlayCameraService>

@property (retain, nonatomic) AWEXPlayCameraCaptureService *cameraService;
@property (weak, nonatomic) id<IESGCPXPlayCameraOutput> output;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startCameraCaptureWithParams:(id)a0 output:(id)a1 completion:(id /* block */)a2;
- (void)cameraCaptureService:(id)a0 didOutputVideoFrame:(id)a1;
- (void)setupCert:(id)a0;
- (void)stopCameraCapture:(id /* block */)a0;
- (void)switchCameraPosition:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isCapturing;

@end

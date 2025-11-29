@interface AWECameraKitPreloadCameraHelper : NSObject

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cameraPreviewViewFrame;
+ (BOOL)p_isNeedCreateCameraWithPublishViewModel:(id)a0;
+ (BOOL)canStartOpenCaptureWithInputData:(id)a0 switchModeService:(id)a1;
+ (BOOL)shouldPreloadCameraWithInputData:(id)a0;
+ (void)preloadCameraWithInputData:(id)a0 preloadTrackService:(id)a1 configService:(id)a2 switchModeService:(id)a3 cameraSessionManager:(id)a4 cameraService:(id)a5 captureFeatureConfig:(id)a6;

@end

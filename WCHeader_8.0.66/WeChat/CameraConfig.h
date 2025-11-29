@interface CameraConfig : NSObject

+ (id)getBlackCameraPreset;
+ (struct CGSize { double x0; double x1; })getBlackCameraSizeByPreset:(id)a0;
+ (BOOL)isBlackCameraSize1080x1920;
+ (BOOL)isBlackCameraSize720x1280;
+ (BOOL)isBlackCameraSize480x640;
+ (BOOL)canAccessCamera;
+ (BOOL)tryShowAccessCameraAlert;
+ (void)checkAccessCameraAndShowAlertFor:(unsigned long long)a0 withCompletion:(id /* block */)a1;

@end

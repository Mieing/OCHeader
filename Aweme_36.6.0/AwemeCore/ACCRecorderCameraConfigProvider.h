@interface ACCRecorderCameraConfigProvider : NSObject

+ (unsigned long long)defaultCameraFlashMode;
+ (void)degradeCapturePresetWithConfig:(id)a0 inputData:(id)a1 initStream:(unsigned long long)a2;
+ (void)configCameraConfig:(id)a0 withInputData:(id)a1 initialRecordMode:(id)a2;
+ (void)configCameraConfig:(id)a0 withInputData:(id)a1 initStream:(unsigned long long)a2 initialRecordMode:(id)a3;
+ (void)postConfigCameraConfig:(id)a0 withCaptureFeatureConfig:(id)a1;
+ (BOOL)cansUpdateCameraSizeWithInputData:(id)a0;
+ (unsigned long long)calculateInitStreamWithInputData:(id)a0 initialRecordMode:(id)a1;
+ (void)configCameraDeviceTypesIfNeededFor:(id)a0;
+ (BOOL)p_shouldCameraAutoBack;
+ (void)p_setHasCameraAutoBack:(BOOL)a0;
+ (id)provideCameraWithInputData:(id)a0 initialRecordMode:(id)a1;
+ (id)preferredRearCameraDeviceTypes;
+ (long long)defaultPosition;

@end

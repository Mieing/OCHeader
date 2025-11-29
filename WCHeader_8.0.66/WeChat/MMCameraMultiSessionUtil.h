@interface MMCameraMultiSessionUtil : NSObject

+ (BOOL)supportMultiCameraSession;
+ (BOOL)supportBuiltInBackDualWideCamera;
+ (BOOL)supportBuiltInBackTripleCamera;
+ (id)getCameraSwitchableZoomFactors;
+ (id)getCameraZoomFactorInfo;
+ (id)getCameraGroup;
+ (id)cameraWithPosition:(long long)a0 deviceType:(id)a1;
+ (id)cameraWithPosition:(long long)a0 deviceType:(id)a1 needFallBackDevice:(BOOL)a2;
+ (void)_safeInsertUniqueFactorInfo:(id)a0 intoSortedList:(id)a1;
+ (id)_getBuiltInWideAngleCamera;
+ (id)_getBuiltInUltraWideCamera;
+ (id)_getBuiltInTelephotoCamera;
+ (id)_getBuiltInDualWideCamera;
+ (id)_getBuiltInTripleCamera;

@end

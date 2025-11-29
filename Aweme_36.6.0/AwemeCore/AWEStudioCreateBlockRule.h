@interface AWEStudioCreateBlockRule : AWEExternalRouterBlockBaseRule

+ (BOOL)needBlockURLString:(id)a0;
+ (void)handleBlockAction:(id)a0;
+ (BOOL)_isCameraWidget:(id)a0;
+ (BOOL)_isInQRCodePage;
+ (BOOL)_isCameraLockScreenWidget:(id)a0;
+ (BOOL)_isMomentsCameraLockScreenWidet:(id)a0;
+ (BOOL)_isScanCameraLockScreenWidet:(id)a0;
+ (BOOL)_isLockScreenWidget:(id)a0 widget:(id)a1;
+ (BOOL)_isCameraWidgetOpenAlbum:(id)a0;

- (BOOL)needBlockURLString:(id)a0 context:(id)a1 userActivity:(id)a2 linkSession:(id)a3;
- (void)handleURLString:(id)a0 context:(id)a1 scene:(id)a2 linkSession:(id)a3 completion:(id /* block */)a4;

@end

@class NSString, NSHashTable;

@interface IESLiveAnchorCameraPermissionManager : NSObject <IESLiveAnchorCameraPermissionProtocol>

@property (retain, nonatomic) NSHashTable *permissionHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)registerCameraPermissionHandler:(id)a0;
- (void)removeCameraPermissionHandler:(id)a0;
- (BOOL)canHandleVideoCapture;
- (BOOL)needIgnoreProcessGeneralAudioCaptureByResumeType:(long long)a0;
- (BOOL)needIgnoreProcessGeneralVideoCaptureByResumeType:(long long)a0;
- (void).cxx_destruct;

@end

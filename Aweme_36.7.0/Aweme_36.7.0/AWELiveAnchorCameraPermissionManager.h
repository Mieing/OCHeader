@class NSString, NSHashTable;

@interface AWELiveAnchorCameraPermissionManager : NSObject <IESLiveAnchorCameraPermissionHandler, IESLiveAnchorCameraPermissionProtocol>

@property (retain, nonatomic) NSHashTable *permissionHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)registerCameraPermissionHandler:(id)a0;
- (void)removeCameraPermissionHandler:(id)a0;
- (BOOL)canHandleVideoCapture;
- (void).cxx_destruct;
- (void)dealloc;

@end

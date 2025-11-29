@class OMJCamSession, OMJCamResourceManager;

@interface MJTemplateCameraSession : MJTemplateSession

@property (retain, nonatomic) OMJCamSession *maasCameraSession;
@property (readonly, nonatomic) OMJCamResourceManager *camResourceManager;

- (BOOL)canBeginUseTemplate;
- (BOOL)createMaasSession;
- (BOOL)_createMaasCameraSession;
- (void)cleanUpMaasSessionWithCompletionHandler:(id /* block */)a0;
- (void)_tearDownCameraSessionWithCompletionHandler:(id /* block */)a0;
- (void)_destroyCameraSessionWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end

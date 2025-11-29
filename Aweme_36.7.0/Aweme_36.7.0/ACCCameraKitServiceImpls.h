@class NSString, NSMutableDictionary, AWEVideoPublishViewModel;
@protocol ACCModeCameraSessionService, ACCCameraService, AWEStudioBusinessCameraFlowControlProtocol, ACCCameraFactory, IESServiceProvider;

@interface ACCCameraKitServiceImpls : NSObject <CameraKit.CameraSessionSwitchSubscription, ACCCameraKitService>

@property (retain, nonatomic) id<ACCCameraFactory> cameraFactory;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCModeCameraSessionService> modeSessionService;
@property (retain, nonatomic) id<AWEStudioBusinessCameraFlowControlProtocol> cameraServiceFlowContext;
@property (retain, nonatomic) NSMutableDictionary *sessionDict;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (nonatomic) BOOL hasSendVECameraCreateCompletionMessage;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cameraInstanceDidCreated:(id)a0 cameraSessionKey:(id)a1;
- (void)preloadCameraInstanceAvailable:(id)a0 forSessionKey:(id)a1;
- (void)cameraInstanceInitiateCompleted;
- (void)cameraInstanceWillCreatedFor:(id)a0;
- (void)bindServices:(id)a0;
- (void)switchToCameraSessionWithSessionType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)switchToCameraSessionWithSessionType:(unsigned long long)a0 updateContextBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)p_isNeedCreateCamera;
- (void)p_cameraInstanceDidCreated:(id)a0 cameraSessionKey:(id)a1;
- (void).cxx_destruct;

@end

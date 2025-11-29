@class NSString, ACCUserViewModel;
@protocol ACCNetworkReachabilityProtocol, ACCCameraService;

@interface ACCUserComponent : ACCFeatureComponent <ACCEffectEvent>

@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCNetworkReachabilityProtocol> reachabilityManager;
@property (retain, nonatomic) ACCUserViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)handleJson:(id)a0 taskId:(long long)a1;
- (void)handleArg2:(long long)a0 arg3:(id)a1;
- (void)sendMessageToEffect:(id)a0 taskId:(long long)a1;
- (void)onEffectMessageReceived:(id)a0;
- (void)handleCookieWithEffectBody:(id)a0 taskId:(long long)a1;
- (void)handleUserProfileWithTaskId:(long long)a0;
- (void)handlePrivacyWithTaskId:(long long)a0 jsonDic:(id)a1;
- (void)imageCachePathWithUrl:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end

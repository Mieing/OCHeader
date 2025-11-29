@class NSString, ACCRecordPOIViewModel;
@protocol ACCNetworkReachabilityProtocol, ACCCameraService;

@interface ACCRecordPOIComponent : ACCFeatureComponent <ACCEffectEvent>

@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCNetworkReachabilityProtocol> reachabilityManager;
@property (retain, nonatomic) ACCRecordPOIViewModel *viewModel;
@property (nonatomic) BOOL isAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)handleArg2:(long long)a0 arg3:(id)a1;
- (void)handleTaskId:(long long)a0 json:(id)a1;
- (void)handleLocation:(id)a0 permission:(unsigned long long)a1 taskId:(long long)a2;
- (void)handleLocationModel:(id)a0 permission:(unsigned long long)a1 taskId:(long long)a2 error:(id)a3;
- (void)handlePersistModel:(id)a0 taskId:(long long)a1 error:(id)a2;
- (void)handlePOIInfoModel:(id)a0 interface:(id)a1 taskId:(long long)a2;
- (id)_jsonFromLocationModel:(id)a0 error:(id)a1;
- (void)sendMessageToEffect:(id)a0 taskId:(long long)a1;
- (void)onEffectMessageReceived:(id)a0;
- (void).cxx_destruct;

@end

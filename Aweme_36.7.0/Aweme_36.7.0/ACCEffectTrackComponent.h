@class ACCEffectTrackViewModel, NSString;
@protocol ACCRecordFlowService, ACCCameraService;

@interface ACCEffectTrackComponent : ACCFeatureComponent <ACCCameraLifeCircleEvent, ACCEffectEvent, ACCRecordFlowServiceSubscriber>

@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) ACCEffectTrackViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flowServiceStateDidChanged:(unsigned long long)a0 preState:(unsigned long long)a1;
- (void)flowServiceDidAddFragment:(id)a0;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)handleJson:(id)a0 taskId:(long long)a1;
- (void)handleArg2:(long long)a0 arg3:(id)a1;
- (void)onEffectMessageReceived:(id)a0;
- (void)handleTrackBody:(id)a0 taskId:(long long)a1;
- (void).cxx_destruct;

@end

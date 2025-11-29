@class NSString, NSTimer, IESEffectModel;
@protocol ACCRecordPropService, ACCRecordSwitchModeService, ACCCameraService;

@interface ACCRecordPropCheckerComponent : ACCFeatureComponent <ACCRecordPropServiceSubscriber, ACCRecordSwitchModeServiceSubscriber, ACCRecordFlowServiceSubscriber, ACCCameraLifeCircleEvent>

@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (nonatomic) BOOL changeByUser;
@property (nonatomic) BOOL isOuter;
@property (retain, nonatomic) NSString *currentEffectIdentifier;
@property (retain, nonatomic) NSTimer *checkTimer;
@property (retain, nonatomic) IESEffectModel *willApplyEffect;
@property (retain, nonatomic) IESEffectModel *didApplyEffect;
@property (nonatomic) BOOL running;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)cameraService:(id)a0 startVideoCaptureWithError:(id)a1;
- (void)cameraService:(id)a0 stopVideoCaptureWithError:(id)a1;
- (void)propServiceWillApplyProp:(id)a0 propSource:(long long)a1 changeReason:(long long)a2;
- (void)propServiceDidApplyProp:(id)a0 success:(BOOL)a1;
- (void)bindServices:(id)a0;
- (id)reasonToString:(long long)a0;
- (void)p_trackErrorWithType:(long long)a0;
- (void)p_delayCheckWithAction:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)sourceToString:(long long)a0;

@end

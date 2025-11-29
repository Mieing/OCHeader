@class NSArray, NSString, IESEffectModel, NSDate;
@protocol ACCCameraService, ACCRecordFlowService, ACCRecordSwitchModeService, ACCFeatureComponent, ACCRecordPropService, ACCScanService;

@interface ACCPropComponentGrayAbilityPlugin : ACCFeatureComponent <ACCRecordPropServiceSubscriber, ACCRecordFlowServiceSubscriber, ACCRecordSwitchModeServiceSubscriber, ACCMessageFilterDelegate, ACCEffectEvent, ACCFeatureComponentPlugin>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (nonatomic) BOOL enableNewAbility;
@property (nonatomic) long long maxTrialTimes;
@property (retain, nonatomic) NSArray *blackList;
@property (retain, nonatomic) IESEffectModel *grayProp;
@property (retain, nonatomic) NSDate *grayPropStartTimePoint;
@property (retain, nonatomic) NSArray *grayPropBlockModeArray;
@property (nonatomic) BOOL isCameraUsingGrayProp;
@property (nonatomic) BOOL isMessageFilterEnabled;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<ACCRecordFlowService> flowService;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (weak, nonatomic) id<ACCScanService> scanService;
@property (nonatomic) BOOL hasShownAlertView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)flowServiceDidAddFragment:(id)a0;
- (void)flowServiceWillEnterNextPageWithMode:(id)a0;
- (void)propServiceWillApplyProp:(id)a0 propSource:(long long)a1;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)hostComponent;
- (void)bindServices:(id)a0;
- (void)enterBackgroundNotification;
- (void)enterForegroundNotification;
- (BOOL)shouldTransferMessage:(id)a0;
- (void)p_configGrayAbilityAB;
- (void)p_startGrayAbility;
- (void)p_trackGrayStickerRunInfoClient;
- (void)p_checkAndRemoveGrayProp;
- (BOOL)p_checkUsability;
- (void)p_checkAndApplyGrayProp:(id)a0;
- (void)p_fetchGrayPropWithCompletion:(id /* block */)a0;
- (BOOL)p_shouldApplyGrayProp:(id)a0;
- (void)p_applyGrayProp:(id)a0;
- (void)p_downloadGrayProp:(id)a0 completion:(id /* block */)a1;
- (void)p_increaseCachedTimesOfGrayProp:(id)a0;
- (long long)p_cachedTimesOfGrayProp:(id)a0;
- (BOOL)shouldTransferGrayAbilityMessage:(id)a0;
- (id)p_getJsonFromString:(id)a0;
- (BOOL)handleInterfaceMessage:(id)a0 withDataJson:(id)a1;
- (BOOL)handleRecognizeMessage:(id)a0 withDataJson:(id)a1;
- (BOOL)handleFaceCountMessage:(id)a0 withDataJson:(id)a1;
- (BOOL)handleGrayPropMessage:(id)a0 withDataJson:(id)a1;
- (BOOL)handleClientMonitorMessage:(id)a0 withDataJson:(id)a1;
- (BOOL)isAllowedInterface:(id)a0;
- (void).cxx_destruct;

@end

@class NSString, ACCRecordMode;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCRecordSubmodeService, ACCRecordFlowControlService, ACCRecordFlowService;

@interface AFDSocialTextModeComponent : ACCFeatureComponent <ACCRecordSwitchModeServiceSubscriber, AWECrossDissolveTransitionOuterContextProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordSubmodeService> submodeService;
@property (retain, nonatomic) id<ACCRecordFlowControlService> flowControlService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) ACCRecordMode *oldRecordMode;

- (void)componentWillAppear;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)exitSocialText;
- (void)prepareForInfiniIfNeededImage:(id)a0;
- (void)loadSocialTextDraft:(id)a0;
- (void)enterModernTextMode;
- (void)enterSocialTextWithColor:(id)a0;
- (void)enterSocialText;
- (void).cxx_destruct;

@end

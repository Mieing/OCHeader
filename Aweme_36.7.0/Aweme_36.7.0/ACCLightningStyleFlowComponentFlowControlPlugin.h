@class NSString, ACCRecordFlowComponent;
@protocol ACCRecordSwitchModeService, ACCRecordPropService, ACCRecordFlowControlService, ACCRecordAuthService, ACCRecordUIHiddenStrategyService, ACCFeatureComponent, ACCRecordFlowService, ACCRecordButtonService;

@interface ACCLightningStyleFlowComponentFlowControlPlugin : ACCFeatureComponent <ACCRecordFlowHandler, ACCRecordFlowControlServiceSubscriber, ACCFeatureComponentPlugin>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (retain, nonatomic) id<ACCRecordFlowControlService> flowControlService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (weak, nonatomic) id<ACCRecordAuthService> authService;
@property (retain, nonatomic) id<ACCRecordButtonService> buttonService;
@property (retain, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> recordSwitchModeService;
@property (readonly, weak, nonatomic) ACCRecordFlowComponent *hostComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

- (void)flowControlServiceWillStartRecordFlow:(unsigned long long)a0 source:(id)a1;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)startRecordFlowWithSource:(id)a0;
- (void)stopRecordFlowWithSource:(id)a0;
- (void)completeRecordFlowWithSource:(id)a0;
- (BOOL)canStartWithSource:(id)a0;
- (void).cxx_destruct;

@end

@class NSString, ACCRecordFlowComponent;
@protocol ACCRecordSwitchModeService, ACCFeatureComponent, ACCCreationToolRecordService;

@interface ACCRecordStoryBlockToVideoPlugin : ACCFeatureComponent <ACCRecordSwitchModeServiceSubscriber, ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCCreationToolRecordService> creationService;
@property (readonly, weak, nonatomic) ACCRecordFlowComponent *hostComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)componentDidMount;
- (void)bindServices:(id)a0;
- (void)updateMinAndMaxRecordDuration;
- (void).cxx_destruct;

@end

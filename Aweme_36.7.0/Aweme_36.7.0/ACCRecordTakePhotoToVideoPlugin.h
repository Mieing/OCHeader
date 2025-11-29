@class NSString, ACCRecordFlowComponent;
@protocol ACCRecordSwitchModeService, ACCFeatureComponent;

@interface ACCRecordTakePhotoToVideoPlugin : ACCFeatureComponent <ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (readonly, weak, nonatomic) ACCRecordFlowComponent *hostComponent;
@property (weak, nonatomic) id<ACCFeatureComponent> component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (void)bindServices:(id)a0;
- (void).cxx_destruct;

@end

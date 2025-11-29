@class NSString;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCFeatureComponent, AWERecordBeautyService;

@interface ACCRecorderBeautyComponentSwitchModePlugin : ACCFeatureComponent <ACCRecordSwitchModeServiceSubscriber, ACCServiceBindable, ACCFeatureComponentPlugin>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<AWERecordBeautyService> beautyService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)bindServices:(id)a0;
- (void).cxx_destruct;

@end

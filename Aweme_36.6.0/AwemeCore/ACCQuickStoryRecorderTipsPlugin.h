@class NSString, ACCQuickStoryRecordComponent;
@protocol ACCFeatureComponent;

@interface ACCQuickStoryRecorderTipsPlugin : ACCFeatureComponent <ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, weak, nonatomic) ACCQuickStoryRecordComponent *hostComponent;
@property (weak, nonatomic) id<ACCFeatureComponent> component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (void)bindServices:(id)a0;
- (void).cxx_destruct;

@end

@class NSString, ACCFilterComponent;
@protocol ACCFilterService, ACCFeatureComponent;

@interface ACCFilterComponentGesturePlugin : ACCFeatureComponent <ACCRecordGestureServiceSubscriber, ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, nonatomic) ACCFilterComponent *hostComponent;
@property (retain, nonatomic) id<ACCFilterService> filterService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

- (void)componentDidAppear;
- (void)componentDidMount;
- (void)bindServices:(id)a0;
- (void)gesturesWillDisabled;
- (void)gesturesWillEnable;
- (void).cxx_destruct;

@end

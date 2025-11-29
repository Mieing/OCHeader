@class NSString, ACCFilterComponent;
@protocol ACCFeatureComponent, ACCRecorderViewContainer, ACCFilterPrivateService;

@interface ACCFilterComponentTipsPlugin : ACCFeatureComponent <ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (retain, nonatomic) id<ACCFilterPrivateService> filterService;
@property (readonly, nonatomic) ACCFilterComponent *hostComponent;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (nonatomic, getter=isFirstAppear) BOOL firstAppear;
@property (weak, nonatomic) id<ACCFeatureComponent> component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)componentDidMount;
- (void)bindServices:(id)a0;
- (void)showFilterHintWithFilterName:(id)a0 categoryName:(id)a1;
- (void).cxx_destruct;

@end

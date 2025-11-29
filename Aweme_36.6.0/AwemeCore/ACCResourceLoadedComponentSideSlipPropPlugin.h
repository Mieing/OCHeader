@class NSString;
@protocol ACCSideslipPropService, ACCResourceLoadedService, ACCFeatureComponent;

@interface ACCResourceLoadedComponentSideSlipPropPlugin : ACCFeatureComponent <ACCFeatureComponentPlugin>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCResourceLoadedService> resourceLoadedService;
@property (weak, nonatomic) id<ACCFeatureComponent> component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (id)hostComponent;
- (void)bindServices:(id)a0;
- (BOOL)p_autoOpen;
- (void).cxx_destruct;

@end

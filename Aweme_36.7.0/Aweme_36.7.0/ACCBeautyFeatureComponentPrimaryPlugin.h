@class NSString, ACCBeautyFeatureComponent;
@protocol ACCBeautyService, ACCFeatureComponent;

@interface ACCBeautyFeatureComponentPrimaryPlugin : ACCFeatureComponent <ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, nonatomic) NSString *primaryToast;
@property (readonly, nonatomic) ACCBeautyFeatureComponent *hostComponent;
@property (weak, nonatomic) id<ACCBeautyService> beautyService;
@property (weak, nonatomic) id<ACCFeatureComponent> component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadComponentView;
- (void)componentDidMount;
- (void)bindServices:(id)a0;
- (BOOL)isPrimaryBeautyOn;
- (BOOL)isTipToastHasShown24Hours;
- (void)cacheTipsToastShownTimeNow;
- (void).cxx_destruct;

@end

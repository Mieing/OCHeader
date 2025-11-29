@class NSString;
@protocol ACCFeatureComponent, ACCFilterService, IESServiceProvider;

@interface AWEEcommerceRecorderFilterGesturePlugin : NSObject <ACCRecordGestureServiceSubscriber, ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (retain, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) id<ACCFilterService> filterService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

- (id)hostComponent;
- (void)bindServices:(id)a0;
- (void)gesturesWillDisabled;
- (void)gesturesWillEnable;
- (void).cxx_destruct;

@end

@class NSString;
@protocol ACCSideslipPropService, ACCFeatureComponent, ACCSideslipPropPanelService;

@interface ACCRecordSubmodeComponentSideslipPropPlugin : NSObject <ACCSideslipPropPanelServiceSubscriber, ACCSideslipPropServiceSubscriber, ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

- (void)sideslipPropPanelService:(id)a0 willShowTrayView:(id)a1;
- (void)sideslipPropPanelService:(id)a0 willDismissTrayView:(id)a1;
- (void)sideslipPropService:(id)a0 willChangeShowState:(unsigned long long)a1;
- (id)hostComponent;
- (void)bindServices:(id)a0;
- (void).cxx_destruct;

@end

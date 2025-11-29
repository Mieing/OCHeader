@class ACCRecordSwitchModeComponent, NSString;
@protocol ACCSideslipPropPanelService, ACCSideslipPropService, IESServiceProvider, ACCFeatureComponent, ACCRecordUIHiddenStrategyService;

@interface ACCRecordSwitchModeComponentSideslipPropPlugin : NSObject <ACCSideslipPropServiceSubscriber, ACCSideslipPropPanelServiceSubscriber, ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, nonatomic) ACCRecordSwitchModeComponent *hostComponent;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (nonatomic) BOOL shouldShowSwitchModeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

- (void)sideslipPropPanelService:(id)a0 willShowTrayView:(id)a1;
- (void)sideslipPropPanelService:(id)a0 willDismissTrayView:(id)a1;
- (void)sideslipPropService:(id)a0 willChangeShowState:(unsigned long long)a1;
- (void)bindServices:(id)a0;
- (void).cxx_destruct;

@end

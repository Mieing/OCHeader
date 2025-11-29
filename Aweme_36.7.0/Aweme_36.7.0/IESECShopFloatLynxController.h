@class IESECServiceProxy, NSString, IESECShopFloatLynxContainerController;
@protocol IESECShopDataService, IESECShopFrameworkService;

@interface IESECShopFloatLynxController : IESECRelationController <IESECShopFloatLynxContainerControllerDelegate, IESECShopFloatLynxControllerProtocol>

@property (retain, nonatomic) IESECShopFloatLynxContainerController *lynxController;
@property (retain, nonatomic) IESECServiceProxy<IESECShopDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopFrameworkService> *frameworkService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)extraBizParams;
- (void)setupBinding;
- (void)exitShop;
- (void)setupBindingV2;
- (void)controllerDidLoad;
- (void)iesecshop_didSelectBottomTabItem:(id)a0;
- (void)updateActivityDynamicModel:(id)a0;
- (void)didAddMarketSDKLynxContainer:(id)a0;
- (void)tracker:(id)a0 extraParams:(id)a1;
- (void)didFinishLoadFloatLynxContainer:(id)a0;
- (void)showLowPriorityFloatViewAnimated:(BOOL)a0;
- (void)updateMarketingComponent;
- (void)p_subscribeXBridgeEvent;
- (void)p_unSubscribeXBridgeEvent;
- (void)switchToTab:(unsigned long long)a0 shopID:(id)a1 params:(id)a2 passThroughAPI:(id)a3;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end

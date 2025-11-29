@class IESECServiceProxy, NSString;
@protocol IESECShopForwardCoService, IESECShopLayoutService, IESECShopFrameworkService, IESECTabKitDataService, IESECShopExtensionAreaProtocol, IESECShopStateService, IESECShopDataService, IESECShopEventService, IESECShopTopTabService;

@interface IESECShopExtensionAreaController : IESECShopControllerV2 <IESECShopEventSubscriber, IESECShopExtensionAreaController> {
    BOOL _isExtensionAreaAnimating;
    BOOL _isExtensionAreaAnimated;
    id<IESECShopExtensionAreaProtocol> _lastController;
    BOOL _shouldExpandVideoArea;
    BOOL _isExpandVideoAreaForIndexTabOnly;
}

@property (retain, nonatomic) IESECServiceProxy<IESECShopFrameworkService> *frameworkService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopStateService> *stateService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopEventService> *eventService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopLayoutService> *layoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopForwardCoService> *forwardCoService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopTopTabService> *topTabService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitDataService> *tabKitDataService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBinding;
- (void)didSetPageContextV2:(id)a0;
- (void)controllerDidLoad;
- (void)controllerWillAppear:(BOOL)a0;
- (void)iesecshop_pagerView:(id)a0 mainScrollViewDidScroll:(id)a1;
- (void)didSetControllerManagerV2:(id)a0;
- (void)iesecshop_didSelectTopTabItem:(id)a0;
- (void)iesecshop_didSelectBottomTabItem:(id)a0;
- (id)extensionAreaController;
- (double)extensionAreaHeight;
- (void)hideExtensionAreaTipViewIfNeeded;
- (void)switchHeaderType:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (void)decideShouldExpandVideoArea;
- (void)expandVideoAreaIfNeeded;
- (void)setupExtensionArea;
- (void)cleanupExtensionArea;
- (void)switchLiveHeader:(id /* block */)a0;
- (void)switchVideoHeader:(id /* block */)a0;
- (void)switchInfoHeader:(id /* block */)a0;
- (void)foldExtensionAreaIfNeeded:(id)a0;
- (id /* block */)generateBizScrollPercentBlock:(double)a0;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (id)init;

@end

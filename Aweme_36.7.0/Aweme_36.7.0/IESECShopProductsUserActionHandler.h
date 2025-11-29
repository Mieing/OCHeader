@class IESECServiceProxy, NSString, IESECShopProductsHybridContext;
@protocol IESECShopLayoutService, IESECShopStateService, IESECShopLiveTabService, IESECShopEventService;

@interface IESECShopProductsUserActionHandler : NSObject <IESECShopEventSubscriber, IESECShopMonitorActionProtocol, IESECShopProductsUserAction, IESECListKitListControllerLifeCycle> {
    IESECShopProductsHybridContext *_context;
    BOOL _isShow;
    BOOL _isFirstShow;
    BOOL _willDisappearIng;
    BOOL _hasClickHeaderArea;
    BOOL _hasClickProductCard;
    id /* block */ _foldHeaderAreaBlock;
}

@property (retain, nonatomic) IESECServiceProxy<IESECShopEventService> *eventService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopStateService> *stateService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopLayoutService> *layoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopLiveTabService> *liveTabService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewControllerDidAppear:(BOOL)a0;
- (void)viewControllerWillDisappear:(BOOL)a0 isBeingDismissed:(BOOL)a1 isMovingFromParentViewController:(BOOL)a2;
- (void)viewControllerDidDisappear:(BOOL)a0;
- (void)viewControllerWillAppear:(BOOL)a0 isBeingPresented:(BOOL)a1 isMovingToParentViewController:(BOOL)a2;
- (void)handleDisappear;
- (void)iesecshop_pagerView:(id)a0 mainScrollViewDidScroll:(id)a1;
- (void)iesecshop_didTapAtTopTabItem:(id)a0;
- (void)iesecshop_didTapAtBottomTabItem:(id)a0;
- (void)clickProductCard;
- (void)configureObservers;
- (id)initWithHybridContext:(id)a0;
- (BOOL)isCurrentProductTab;
- (void)foldHeaderIfNeeded;
- (void)refreshStateWhenChangeTab:(id)a0;
- (void)scrollToMaxAfter:(long long)a0 animated:(BOOL)a1;
- (void)configInfoAreaMonitor;
- (void)configExtensionAreaMonitor;
- (void)handleHit;
- (void).cxx_destruct;

@end

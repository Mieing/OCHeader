@class NSString, IESECTabKitBFFController, IESECServiceProxy, IESECTabKitTabModel;
@protocol IESECShopForwardCoService, IESECShopFrameworkService, IESECShopLayoutService, IESECShopStateService, IESECShopDataService, IESECShopClientAiService, IESECShopEventService;

@interface IESECShopTabKitController : IESECShopControllerV2 <IESECTabKitBFFControllerDelegate, IESECShopEventSubscriber, IESECShopTabKitController> {
    IESECTabKitTabModel *_currentTopTab;
    unsigned long long _finalCloseAction;
}

@property (retain, nonatomic) IESECTabKitBFFController *tabKitVC;
@property (retain, nonatomic) IESECServiceProxy<IESECShopFrameworkService> *frameworkService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopStateService> *stateService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopEventService> *eventService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopLayoutService> *layoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopClientAiService> *clientAiService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopForwardCoService> *forwardCoService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBindings;
- (void)configTabKitUI;
- (BOOL)tabKitController:(id)a0 splitSlideContainer:(id)a1 panGestureShouldBegin:(id)a2;
- (void)tabKitController:(id)a0 splitSlideContainerDidScroll:(id)a1;
- (double)tabKitController:(id)a0 splitSlideContainerFinalOffset:(id)a1;
- (BOOL)tabKitController:(id)a0 splitSlideContainerShouldPauseVideo:(id)a1;
- (BOOL)tabKitController:(id)a0 splitSlideContainer:(id)a1 tapGestureHitDismiss:(id)a2;
- (void)tabKitController:(id)a0 didInterceptCloseAction:(unsigned long long)a1 tabItem:(id)a2;
- (void)tabKitController:(id)a0 willDisplayTopTabItem:(id)a1;
- (void)tabKitController:(id)a0 willDisplayBottomTabItem:(id)a1;
- (void)tabKitController:(id)a0 didTapAtTopTabItem:(id)a1;
- (void)tabKitController:(id)a0 didSelectTopTabItem:(id)a1;
- (void)tabKitController:(id)a0 didTapAtBottomTabItem:(id)a1;
- (void)tabKitController:(id)a0 didSelectBottomTabItem:(id)a1;
- (BOOL)tabKitController:(id)a0 canAnchorToTargetTabItem:(id)a1;
- (void)didSetPageContextV2:(id)a0;
- (void)controllerDidLoad;
- (void)didSetLayoutManager:(id)a0;
- (void)didSetControllerManagerV2:(id)a0;
- (void)iesecshop_containerDidMoveToParentViewController:(id)a0;
- (void)loadMainLayoutContainer;
- (id)generateInterceptionStorageKey:(id)a0 type:(long long)a1;
- (void)adTrackClickReturn;
- (void)trackCloseStorePage:(unsigned long long)a0;
- (void)doInterceptAction:(unsigned long long)a0;
- (id)interceptJumpURLExtraParams:(unsigned long long)a0;
- (id)tabkitParameters;
- (void)controllerDidAppear:(BOOL)a0;
- (void)controllerDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)unsubscribe;
- (void)subscribe;
- (void)setupViews;

@end

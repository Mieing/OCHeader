@class IESECPagerView, IESECServiceProxy, IESECStoreTabElementBuilder, NSString, IESECTabKitDIContext;
@protocol IESECShopFrameworkService, IESECShopTopTabService, IESECTabKitLayoutService, IESECTabKitMonitorService, IESECShopTabContentService, IESECTabKitEventSubscriber, IESECShopPageContextV2, IESECShopThemeService, IESECShopEventService, IESECShopControllerManagerV2, IESECTabKitEventService, IESECShopForwardCoService, IESECShopDataService, IESECTabKitHybridService, IESECShopStateService, IESECShopLayoutManager, IESECShopLayoutService, IESECTabKitDataService;

@interface IESECShopTKTabContentComponent : NSObject <IESECShopTKComponent, IESECPagerViewDelegate, IESECPagerViewDataSource, IESECShopEventSubscriber, IESECShopTKTabContentComponent> {
    BOOL _switchingTabContents;
    BOOL _isFirstAppear;
}

@property (retain, nonatomic) IESECPagerView *pagerView;
@property (retain, nonatomic) IESECStoreTabElementBuilder *tabElementBuilder;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitLayoutService> *layoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitHybridService> *hybridService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitMonitorService> *monitorService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitEventService, IESECTabKitEventSubscriber> *eventService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopFrameworkService> *shopFrameworkService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopTabContentService> *shopTabContentsService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopDataService> *shopDataService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopStateService> *shopStateService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopEventService> *shopEventService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopThemeService> *shopThemeService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopLayoutService> *shopLayoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopTopTabService> *shopTopTabService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopForwardCoService> *shopForwardCoService;
@property (readonly, weak, nonatomic) id<IESECShopPageContextV2> pageContextV2;
@property (readonly, weak, nonatomic) id<IESECShopLayoutManager> layoutManager;
@property (readonly, weak, nonatomic) id<IESECShopControllerManagerV2> controllerManagerV2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESECTabKitDIContext *tabKitCtx;

+ (unsigned long long)componentType;

- (void)setupBindings;
- (void)componentDidLoad;
- (void)componentDidAppear:(BOOL)a0;
- (void)componentDidDisappear:(BOOL)a0;
- (void)pagerViewDidLayoutSubviews:(id)a0;
- (void)pagerViewDidReload:(id)a0;
- (double)heightForHeaderViewInPagerView:(id)a0;
- (double)heightForTabbarViewInPagerView:(id)a0;
- (double)heightForStickySectionInPagerView:(id)a0;
- (double)heightForMiddleStickySectionInPagerView:(id)a0;
- (id)viewForHeaderInPagerView:(id)a0;
- (id)viewForTabbarInPagerView:(id)a0;
- (id)tabbarForTabContainerInPagerView:(id)a0;
- (id)pagerView:(id)a0 tabViewElementForIndex:(long long)a1;
- (void)pagerView:(id)a0 tabScrollViewWillBeginDragging:(id)a1;
- (void)pagerView:(id)a0 tabScrollViewDidEndDecelerating:(id)a1;
- (void)pagerView:(id)a0 tabScrollViewDidEndDragging:(id)a1 willDecelerate:(BOOL)a2;
- (void)pagerView:(id)a0 willMoveToIndex:(long long)a1 withTabElement:(id)a2;
- (void)pagerView:(id)a0 cancelMoveToIndex:(long long)a1 withTabElement:(id)a2;
- (void)pagerView:(id)a0 didMoveToIndex:(long long)a1 withTabElement:(id)a2;
- (void)pagerView:(id)a0 mainScrollViewDidScroll:(id)a1;
- (void)pagerView:(id)a0 mainScrollViewWillBeginDragging:(id)a1;
- (void)pagerView:(id)a0 tabScrollViewDidScroll:(id)a1;
- (void)pagerView:(id)a0 mainScrollViewWillEndDragging:(id)a1 withVelocity:(struct CGPoint { double x0; double x1; })a2 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a3;
- (void)pagerView:(id)a0 mainScrollViewDidEndDragging:(id)a1 willDecelerate:(BOOL)a2;
- (void)pagerView:(id)a0 mainScrollViewDidEndDecelerating:(id)a1;
- (id)createTabElementWithModel:(id)a0;
- (void)iesecshop_pagerView:(id)a0 didMoveToTab:(id)a1;
- (void)iesecshop_screenStateDidChange:(unsigned long long)a0;
- (id)tabElementWithTabType:(unsigned long long)a0 tabClass:(Class)a1;
- (void)requestPreload;
- (void)standardPreload;
- (void)subscribeXbridgeEvents;
- (void)unsubscribeXbridgeEvents;
- (void)handleMultiProductsCoupon;
- (void).cxx_destruct;
- (id)componentView;
- (void)setupViews;

@end

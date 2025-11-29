@class NSString, IESECServiceProxy, IESECTabKitDIContext, IESECShopTopTabView;
@protocol IESECShopFrameworkService, IESECShopTopTabService, IESECTabKitLayoutService, IESECTabKitEventSubscriber, IESECShopPageContextV2, IESECShopControllerManagerV2, IESECTabKitEventService, IESECShopForwardCoService, IESECShopDataService, IESECShopStateService, IESECShopLayoutManager, IESECTabKitDataService, IESECShopLayoutService;

@interface IESECShopTKTopTabComponent : NSObject <IESECShopTKComponent, IESECShopEventSubscriber, IESECSlidingTabbarDelegate, IESECShopTKTopTabComponent>

@property (retain, nonatomic) IESECShopTopTabView *topTabView;
@property (nonatomic) double lastRealY;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitLayoutService> *layoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitEventService, IESECTabKitEventSubscriber> *eventService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopFrameworkService> *shopFrameworkService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopDataService> *shopDataService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopStateService> *shopStateService;
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
@property (copy, nonatomic) id /* block */ indexChanged;
@property (retain, nonatomic) IESECTabKitDIContext *tabKitCtx;

+ (unsigned long long)componentType;

- (void)setupBindings;
- (void)componentDidLoad;
- (void)tabbarTappedAtIndex:(unsigned long long)a0;
- (void)iesecshop_themeTypeDidChange:(unsigned long long)a0;
- (void)iesecshop_pagerView:(id)a0 mainScrollViewDidScroll:(id)a1;
- (void)iesecshop_splitSlideDidScroll:(double)a0;
- (void)iesecshop_didTapAtTopTabItem:(id)a0;
- (void)iesecshop_didSelectTopTabItem:(id)a0;
- (void)updateStyleConfigsIfNeeded;
- (void)switchStyleIfNeeded;
- (void)trackTopTabClick:(id)a0;
- (void).cxx_destruct;
- (double)leftMargin;
- (double)rightMargin;
- (id)componentView;
- (void)setupViews;
- (void)setSelectedIndex:(unsigned long long)a0 animated:(BOOL)a1;

@end

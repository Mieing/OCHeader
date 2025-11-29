@class NSString, IESECServiceProxy, IESECSlidingTabContainerView, IESECTabKitDIContext;
@protocol IESECTabKitAbilityService, IESECTabKitMonitorService, IESECTabKitEventSubscriber, IESECTabKitLayoutService, IESECTabKitHybridService, IESECTabKitDataService, IESECTabKitEventService;

@interface IESECTabKitTabContentComponent : NSObject <IESECTabContainerDataSource, IESECTabContainerDelegate, UIScrollViewDelegate, IESECTabKitTabContentComponent> {
    BOOL _switchingTabContents;
}

@property (retain, nonatomic) IESECServiceProxy<IESECTabKitDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitLayoutService> *layoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitHybridService> *hybridService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitMonitorService> *monitorService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitEventService, IESECTabKitEventSubscriber> *eventService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitAbilityService> *abilityService;
@property (retain, nonatomic) IESECSlidingTabContainerView *tabContentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESECTabKitDIContext *tabKitCtx;

+ (unsigned long long)componentType;

- (void)setupBindings;
- (void)componentDidLoad;
- (id)tabContainer:(id)a0 tabViewElementForIndex:(long long)a1;
- (long long)numberOfTabViewElementsInTabContainer:(id)a0;
- (void)tabContainer:(id)a0 willMoveToIndex:(long long)a1 withTabElement:(id)a2;
- (void)tabContainer:(id)a0 cancelMoveToIndex:(long long)a1 withTabElement:(id)a2;
- (void)tabContainer:(id)a0 didMoveToIndex:(long long)a1 withTabElement:(id)a2;
- (void)triggerLayoutAnimated:(BOOL)a0;
- (BOOL)enableReloadOpt;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (id)componentView;

@end

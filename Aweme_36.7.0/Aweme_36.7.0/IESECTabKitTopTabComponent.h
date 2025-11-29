@class IESECTabKitTopTabView, NSString, IESECServiceProxy, IESECTabKitDIContext, IESECTabKitBFFTabBarStyle, IESECTabKitTabBarStyleConfigModel, NSArray;
@protocol IESECTabKitEventSubscriber, IESECTabKitAbilityService, IESECTabKitLayoutService, IESECTabKitEventService, IESECTabKitDataService;

@interface IESECTabKitTopTabComponent : NSObject <IESECTabKitEventSubscriber, IESECSlidingTabbarDelegate, IESECTabKitTopTabComponent> {
    IESECTabKitBFFTabBarStyle *_tabBarBFFStyle;
    IESECTabKitTabBarStyleConfigModel *_tabBarStyleConfig;
    NSArray *_curTabStyleConfigs;
}

@property (retain, nonatomic) IESECServiceProxy<IESECTabKitDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitLayoutService> *layoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitEventService, IESECTabKitEventSubscriber> *eventService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitAbilityService> *abilityService;
@property (retain, nonatomic) IESECTabKitTopTabView *topTabBarView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ indexChanged;
@property (retain, nonatomic) IESECTabKitDIContext *tabKitCtx;

+ (BOOL)componentShouldLoadWithContext:(id)a0;
+ (unsigned long long)componentType;

- (void)setupBindings;
- (void)componentDidLoad;
- (void)tabbarTappedAtIndex:(unsigned long long)a0;
- (void)triggerLayoutAnimated:(BOOL)a0;
- (void)reloadTabBarStyleIfNeeded;
- (void)reloadTabBarStyleWithMultiStateConfig:(id)a0;
- (void)removeBadgeAtIndex:(unsigned long long)a0;
- (void)iesectabkit_didSelectBottomTabItem:(id)a0;
- (void)iesectabkit_willUpdateScreenState:(unsigned long long)a0;
- (void)iesectabkit_didUpdateScreenState:(unsigned long long)a0;
- (void)iesectabkit_didMoveToTabItem:(id)a0 moveType:(unsigned long long)a1;
- (void)didSetTabKitCtx:(id)a0;
- (void)componentVisibilityWillChange:(BOOL)a0 animated:(BOOL)a1;
- (void)reloadTabInfoIfNeeded;
- (void)reloadTabInfoIfNeeded:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)componentView;

@end

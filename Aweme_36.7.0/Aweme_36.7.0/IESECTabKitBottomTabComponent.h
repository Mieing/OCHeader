@class NSString, IESECServiceProxy, IESECTabKitDIContext, NSArray, IESECSlidingTabbarView, IESECTabKitTabBarStyleConfigModel;
@protocol IESECTabKitEventSubscriber, IESECTabKitLayoutService, IESECTabKitEventService, IESECTabKitDataService;

@interface IESECTabKitBottomTabComponent : NSObject <IESECTabKitEventSubscriber, IESECSlidingTabbarDelegate, IESECSlidingTabbarLayoutDelegate, IESECTabKitBottomTabComponent> {
    IESECTabKitTabBarStyleConfigModel *_tabBarStyleConfig;
    NSArray *_tabItemStyleConfigs;
}

@property (retain, nonatomic) IESECSlidingTabbarView *bottomTabBarView;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitDataService> *kDataService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitLayoutService> *kLayoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitEventService, IESECTabKitEventSubscriber> *kEventService;
@property (copy, nonatomic) id /* block */ configTabBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ indexChanged;
@property (retain, nonatomic) IESECTabKitDIContext *tabKitCtx;

+ (BOOL)componentShouldLoadWithContext:(id)a0;
+ (unsigned long long)componentType;

- (void)componentDidLoad;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })slidingTabbarView:(id)a0 frameForContentScroll:(id)a1 containerHeight:(double)a2 defaultFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)tabbarTappedAtIndex:(unsigned long long)a0;
- (void)triggerLayoutAnimated:(BOOL)a0;
- (void)pSetupBindings;
- (void)reloadTabBarStyleIfNeeded;
- (void)reloadTabItemStyleWithConfigs:(id)a0;
- (void)reloadTabBarStyleWithMultiStateConfig:(id)a0;
- (void)removeBadgeAtIndex:(unsigned long long)a0;
- (void)reloadTabBarStyleWithConfig:(id)a0;
- (void)reloadTabBarStyleWithConfig:(id)a0 animated:(BOOL)a1;
- (BOOL)createTabInfosCombineCallBack;
- (void)iesectabkit_didUpdateScreenState:(unsigned long long)a0;
- (void)iesectabkit_didMoveToTabItem:(id)a0 moveType:(unsigned long long)a1;
- (void)iesectabkit_didTapAtTopTabItem:(id)a0;
- (void).cxx_destruct;
- (id)componentView;
- (void)setSelectedIndex:(unsigned long long)a0 animated:(BOOL)a1;

@end

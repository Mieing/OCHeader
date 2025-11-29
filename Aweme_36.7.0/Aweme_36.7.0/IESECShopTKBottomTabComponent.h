@class NSString, IESECServiceProxy, CAShapeLayer, NSTimer, UIView;
@protocol IESECShopForwardCoService, IESECShopLayoutService, IESECTabKitDataService, IESECShopControllerManagerV2, IESECTabKitLayoutService, IESECShopStateService, IESECShopPageContextV2, IESECShopDataService, IESECShopLayoutManager;

@interface IESECShopTKBottomTabComponent : IESECTabKitBottomTabComponent <IESECShopTKComponent, IESECShopEventSubscriber, IESECShopPopupProtocol, IESECShopTKBottomTabComponent> {
    BOOL _isFirstAnchored;
    BOOL _hasShownBubble;
    NSTimer *_dismissTimer;
    UIView *_activeBubble;
    unsigned long long _tabStyleType;
}

@property (retain, nonatomic) IESECServiceProxy<IESECTabKitDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitLayoutService> *layoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopDataService> *shopDataService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopStateService> *shopStateService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopLayoutService> *shopLayoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopForwardCoService> *shopForwardCoService;
@property (copy, nonatomic) id /* block */ popupClose;
@property (retain, nonatomic) CAShapeLayer *topBorderLayer;
@property (readonly, weak, nonatomic) id<IESECShopPageContextV2> pageContextV2;
@property (readonly, weak, nonatomic) id<IESECShopLayoutManager> layoutManager;
@property (readonly, weak, nonatomic) id<IESECShopControllerManagerV2> controllerManagerV2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldLoadWithContext:(id)a0;
+ (id)scaleTabBarStyle:(id)a0;
+ (void)scaleTabItemStyle:(id)a0;

- (void)configView;
- (void)setupBindings;
- (void)componentDidLoad;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })slidingTabbarView:(id)a0 frameForBadgeInSegment:(id)a1 defaultFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)triggerLayoutAnimated:(BOOL)a0;
- (void)reloadTabItemStyleWithConfigs:(id)a0;
- (void)reloadTabBarStyleWithConfig:(id)a0;
- (BOOL)createTabInfosCombineCallBack;
- (void)iesecshop_screenStateDidChange:(unsigned long long)a0;
- (void)iesecshop_splitSlideDidScroll:(double)a0;
- (void)iesecshop_didTapAtBottomTabItem:(id)a0;
- (void)iesecshop_didSelectBottomTabItem:(id)a0;
- (void)showWithTask:(id)a0 closeCallback:(id /* block */)a1;
- (void)addTopBorderLayer;
- (void)showBottomTabBubbleIfNeeded;
- (void)trackEnterStorePage;
- (void)trackBottomTabsShow:(id)a0;
- (void)adTrackOtherClick:(id)a0;
- (void)trackBottomTabClick:(id)a0;
- (void)trackTopTabsShowAtBottomTab:(id)a0;
- (void)reloadTabItemStyleIfNeeded;
- (id)bubbleCacheKeyWithTabID:(id)a0 hintText:(id)a1;
- (void)dismissBottomTabBubble;
- (void)bottomTabBubbleTimeUp:(id)a0;
- (void)showBottomTabBubbleWithHintText:(id)a0 duration:(id)a1 atIndex:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)init;
- (void)setupViews;

@end

@class IESLiveToolbarTracker, NSString, IESLiveGCDTimer, IESLiveToolbar, IESLivePanelConfiguration;
@protocol IESLiveToolbarDataService, IESLiveToolBarCoordinaryAnimationAction;

@interface HTSLiveAudienceToolbarFragment : IESLiveRoomComponent <HTSLiveToolbarProvider, IESLiveFIFAPlayerScaleAction>

@property (retain, nonatomic) IESLiveToolbar *toolbar;
@property (retain, nonatomic) IESLivePanelConfiguration *toolbarConfig;
@property (retain, nonatomic) IESLiveToolbar *landscapeTopbar;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (weak, nonatomic) id<IESLiveToolBarCoordinaryAnimationAction> followGuideItem;
@property (weak, nonatomic) id<IESLiveToolBarCoordinaryAnimationAction> giftGuideItem;
@property (weak, nonatomic) id<IESLiveToolBarCoordinaryAnimationAction> ecShopCartItem;
@property (weak, nonatomic) id<IESLiveToolBarCoordinaryAnimationAction> localLifeItem;
@property (retain, nonatomic) IESLiveToolbarTracker *tracker;
@property (nonatomic) BOOL hasItemAnimated;
@property (nonatomic) BOOL higherPriorityItemExist;
@property (nonatomic) BOOL animationRequestFinished;
@property (nonatomic) BOOL hideItemAnimation;
@property (copy, nonatomic) id /* block */ allowListFilterBlock;
@property (nonatomic) BOOL couldDisableLandscapeTopbar;
@property (nonatomic) long long orientation;
@property (nonatomic) BOOL enterRoomOptEnable;
@property (nonatomic) long long topRightButtonStyle;
@property (nonatomic) BOOL animationOptimize;
@property (retain, nonatomic) id<IESLiveToolbarDataService> toolBarDataService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentDidAppear;
- (void)componentUnmount;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)componentOrientationTransitioning:(long long)a0;
- (void)hideComponent;
- (void)showComponent;
- (void)handleOrientationChanged:(long long)a0;
- (void)componentRefresh;
- (BOOL)containItem:(int)a0 inMorePanel:(BOOL)a1;
- (BOOL)containItemInSlot:(int)a0;
- (void)showToolbar;
- (void)requestToAnimateWithIdentifier:(id)a0;
- (void)resetToolbarAnimationTimer;
- (void)setupAllowFilterBlock:(id /* block */)a0;
- (void)triggerItemAnimationAtOnceIfNeeded;
- (void)showToolbar:(BOOL)a0 needAnim:(BOOL)a1;
- (void)onFIFAPannelSatusChange:(long long)a0;
- (BOOL)shouldUseSideStyle;
- (void)setupToolBarIconAnimationCoordinaryTimer;
- (void)updateToolbarInitStatusIfNeeded;
- (BOOL)enableLandscapeMinimumInteritemToolbarOpt;
- (void)triggerStopToolbarIconAnimation;
- (void)triggerToolbarIconAnimation;
- (id)itemsShouldAnimateAtOnce;
- (void)trackAnimationTriggerEvent:(id)a0;
- (id)animationItemList;
- (BOOL)needAdjustToolbarItemsCount;
- (BOOL)toolbarNewStyle;
- (id)p_filterToolBarItemUnderClean:(id)a0;
- (void).cxx_destruct;
- (void)resetToolbar;
- (void)hideToolbar;

@end

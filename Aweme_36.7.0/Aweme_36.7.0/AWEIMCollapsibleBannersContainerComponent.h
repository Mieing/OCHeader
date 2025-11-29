@class AWEIMComponentManager, AWEIMMessageBaseViewController, NSArray, AWEIMCollapsibleBannersContainerViewController, NSString, AWEIMCollapsibleBannerViewModel;
@protocol AWEIMMessageListTopFloatingInterface, IESIMCollapsibleBannerTrackerProtocol;

@interface AWEIMCollapsibleBannersContainerComponent : AWEIMComponentBase <AWEIMComponentContainer, AWEIMComponentManagerDependency, AWEIMCollapsibleBannersContainerInterfaceProtocol, AWEIMTopAnchorHeightOffsetProvider, AWEIMMessageBaseVCLayoutAction, IESIMMessageTopLoadingAction, AWEIMOverseaUserMutingAction>

@property (weak, nonatomic) AWEIMMessageBaseViewController *messageBaseViewController;
@property (copy, nonatomic) NSArray *banners;
@property (copy, nonatomic) NSArray *sortDescriptors;
@property (retain, nonatomic) AWEIMCollapsibleBannerViewModel *dispatchingBanner;
@property (retain, nonatomic) AWEIMCollapsibleBannersContainerViewController *bannerContainerVC;
@property (retain, nonatomic) id<IESIMCollapsibleBannerTrackerProtocol> tracker;
@property BOOL containerViewIsDisplaying;
@property (weak, nonatomic) id<AWEIMMessageListTopFloatingInterface> floatingService;
@property (nonatomic) BOOL isOverseaUserState;
@property (nonatomic) BOOL isEditMode;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithContext:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (BOOL)shouldContinueForPriorityObject:(id)a0;
- (BOOL)shouldRemoveForPriorityObject:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)viewWillAnimateAlongsideTransitionToSizeWith:(struct CGSize { double x0; double x1; })a0;
- (void)changeToOverseaUserState;
- (void)loadingComponentDidShowLoading;
- (void)loadingComponentDidDismissLoading;
- (void)addBanners:(id)a0 removeBanners:(id)a1;
- (void)addBannerByReplacingDuplicatePriority:(id)a0;
- (long long)numberOfDisplayingBanners;
- (id)collapsibleBannerTracker;
- (void)p_kvoConversationMultiSelectStateUpdate;
- (void)__modifyBanners:(id /* block */)a0;
- (void)__showBannerContainer;
- (void)__dismissBannerContainer;
- (void)p_updateBannerHiddenStatus;
- (void)__afterUpdateBanners;
- (double)anchorYAxisOffset;
- (void).cxx_destruct;
- (id)init;
- (void)collapse;
- (id)conversationContext;
- (void)expand;

@end

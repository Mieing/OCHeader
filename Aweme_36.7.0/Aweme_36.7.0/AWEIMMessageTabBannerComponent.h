@class AWEIMPriorityQueueSyncDispatcher, NSString, UIView, AWEIMComponentManager;
@protocol AWEIMChatListHeaderInterface;

@interface AWEIMMessageTabBannerComponent : AWEIMComponentBase <AWEIMComponentContainer, AWEIMComponentManagerDependency, AWEIMMessageTabBannerInterface, AWEIMChatListHeaderProvider, AWEIMMessageTabBannerInteractorDelegate>

@property (weak, nonatomic) id<AWEIMChatListHeaderInterface> headerService;
@property (retain, nonatomic) AWEIMPriorityQueueSyncDispatcher *bannerDispatcher;
@property (retain, nonatomic) UIView *bannerView;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (BOOL)isBannerViewShowing;
- (void)autoDispatchFloatingViewWithPriority:(long long)a0 priorityObject:(id)a1;
- (BOOL)canShowCurrentHeader;
- (id)headerViewForChatList;
- (void)setDelegateForBannerInteractor:(id)a0;
- (void)addBannerView:(id)a0 animated:(BOOL)a1;
- (void)dismissBannerView:(id)a0 animated:(BOOL)a1;
- (BOOL)ifBannerHasPreferTheme;
- (long long)bannerPreferThemeStyle;
- (void).cxx_destruct;
- (id)trackIdentifier;
- (id)parentViewController;

@end

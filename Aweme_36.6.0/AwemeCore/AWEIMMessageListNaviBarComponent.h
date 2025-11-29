@class NSMutableDictionary, NSString, UIView, AWEIMComponentManager;
@protocol IESIMNavigationBarProtocol, AWEIMMessageListNaviBarAction, AWEIMMessageListNaviBarTitleInterface;

@interface AWEIMMessageListNaviBarComponent : AWEIMComponentBase <AWEIMComponentContainer, AWEIMMessageListNaviBarInterface, AWEIMMessageListBackgroundAction>

@property (weak, nonatomic) UIView<IESIMNavigationBarProtocol> *naviBar;
@property (retain, nonatomic) NSMutableDictionary *providersMap;
@property (weak, nonatomic) id<AWEIMMessageListNaviBarAction> actionPublisher;
@property (nonatomic) BOOL isViewDidLoadUpdateExecuted;
@property (weak, nonatomic) id<AWEIMMessageListNaviBarTitleInterface> naviBarTitleService;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)viewDidLoadOnExit;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)setNeedsUpdateNaviBar;
- (void)setNeedsUpdateNaviBarWithProvider:(id)a0;
- (long long)displayedPositionForProvider:(id)a0;
- (void)updateNaviBarHeight:(double)a0;
- (void)messageListBackgroundImageDidUpdated:(id)a0;
- (void)p_setupNaviBar;
- (void)p_log:(id)a0;
- (void)p_setupBindings;
- (void)p_collectNaviBarProvidersWithTargetPositions:(id)a0;
- (void)p_collectAndLayoutNaviViewsWithTargetPositions:(id)a0;
- (void)p_publishProvidersActionsWithLastProviders:(id)a0 newProviders:(id)a1 position:(long long)a2;
- (id)p_sortNaviBarWithPosition:(long long)a0 providers:(id)a1;
- (void)p_collectAndLayoutNaviViewsWithPosition:(long long)a0;
- (id)p_naviViewsAndSpacingsFromProviders:(id)a0;
- (id)p_organizeNaviViewsAndSpacings:(id)a0 alignment:(long long)a1 semanticContentAttribute:(long long)a2;
- (id)p_getViewFromProvider:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end

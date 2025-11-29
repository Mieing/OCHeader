@class BFTask, AWEIMChatMenuView, NSArray, BFTaskCompletionSource, NSString, AWEIMServiceComponentConfig, AWEIMServiceMsgInputStyleInfo, AWEIMChatMenuTrackerModel;

@interface AWEIMChatMenuComponent : AWEIMComponentBase <AWEIMChatMenuInterface>

@property BOOL hideMenuWhenMenuReady;
@property (retain, nonatomic) AWEIMChatMenuView *menuView;
@property (retain) AWEIMServiceComponentConfig *serviceComponentConfig;
@property (retain) AWEIMServiceComponentConfig *serviceComponentConfigDiff;
@property BOOL hasTrackedMenuShowing;
@property (retain) BFTask *getMenuDataPreTask;
@property (retain) BFTaskCompletionSource *enterChatConfigReadyTask;
@property (copy) NSArray *menuModels;
@property (retain, nonatomic) AWEIMServiceMsgInputStyleInfo *preInputStyle;
@property (retain) AWEIMChatMenuTrackerModel *trackerModel;
@property (nonatomic) BOOL trackered;
@property (nonatomic) BOOL hasCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidDisappear;
- (void)componentDidMounted:(id)a0;
- (id)vcParent;
- (void)hideInputVCAndDoThenShowInputVCWithAnimationOption:(unsigned long long)a0 duration:(double)a1 animations:(id /* block */)a2 completion:(id /* block */)a3 animationCompletion:(id /* block */)a4;
- (void)createEnterChatTask;
- (void)didGetLocalUser:(id)a0;
- (void)didFetchServerUser:(id)a0;
- (void)didEndFetchEnterChatConfig;
- (void)p_createGettingMenuDataTask;
- (id)p_getMenuDataTask;
- (void)p_updateMenuViewWithStatus:(id)a0;
- (id)p_getMenuServiceComponentConfigWithConversation:(id)a0;
- (id)p_getMenuDiffServiceComponentConfigWithConversation:(id)a0;
- (BOOL)p_processMenuConfig:(id)a0 menuDiffConfig:(id)a1 withCachedJsonStr:(id)a2;
- (id)p_getMenuItemConfigs;
- (void)p_updateMenuConfigUsingMenuDiffConfig;
- (void)p_sortComponentItemConfigsUsingPriority;
- (void)p_filterNotShowComponentItemConfigs;
- (void)p_filterInvalidComponentItemConfigs;
- (void)p_supplementComponentInfoForComponentItemConfigs;
- (void)cacheMenuConfigWithConversation:(id)a0;
- (void)p_requestDynamicComponentItemConfigsWithConversation:(id)a0 completion:(id /* block */)a1;
- (BOOL)conformToMedicalIdentifyConv;
- (void)switchToInputBarSetMenuHiddenIfNeed:(BOOL)a0 animation:(BOOL)a1;
- (void)showMenuWithSyncHidingActionBarAndInputVC:(BOOL)a0 animationDuration:(double)a1;
- (void)p_trackMenuShow;
- (void)p_trackChatMenuFirstFrameTracker;
- (BOOL)canSwitchToInputBar;
- (void)__performActionWithModel:(id)a0;
- (void)p_trackMenuClickWithModel:(id)a0 fromSubMenu:(BOOL)a1 firstOrder:(long long)a2 secondOrder:(long long)a3;
- (void)p_trackItemMenuShowWithModel:(id)a0;
- (long long)p_countOfMenus;
- (long long)p_countOfSubMenus;
- (id)p_menuTypeStrOfModel:(id)a0;
- (void)configMenuSwithButtonEnbale;
- (void).cxx_destruct;
- (void)showMenu;

@end

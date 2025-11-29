@class NSString, AWEIMInteractListViewController;
@protocol AWEIMChatListHeaderInterface, AWEIMMessageTabModeInterface;

@interface AWEIMMessageTabInteractComponent : AWEIMComponentBase <AWEIMChatListHeaderProvider, AWEUserMessage, AWEIMMessageTabInteractInterface, AWEIMMessageTabViewControllerAction, AWEIMListTabWrapperAction>

@property (weak, nonatomic) id<AWEIMChatListHeaderInterface> headerService;
@property (weak, nonatomic) id<AWEIMMessageTabModeInterface> messageTabService;
@property (retain, nonatomic) AWEIMInteractListViewController *interactListVC;
@property (nonatomic) BOOL needTrackInteractListVCShowEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)didFinishLoginWithUid:(id)a0;
- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewWillDisappear;
- (BOOL)canShowCurrentHeader;
- (id)headerViewForChatList;
- (void)onTabBarDidChangeNotification:(id)a0;
- (void)hostViewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)listViewControllerWillDisappear:(long long)a0;
- (void)listViewControllerWillAppear:(long long)a0;
- (void)updateInteractWithOffset:(double)a0;
- (void)listViewControllerDidAppear:(long long)a0;
- (double)p_interactListVCWidth;
- (void)interactListVCDidAppear;
- (void).cxx_destruct;
- (id)trackIdentifier;
- (void)dealloc;

@end

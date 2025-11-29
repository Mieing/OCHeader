@class AWEIMTabIndicatorModel, AWEIMListTabWrapperViewController, NSString;
@protocol AWEIMChatListDataControllerInterface, AWEIMTabSkeletonInterface;

@interface AWEIMMessageTabCustomDataBaseListComponent : AWEIMMessageTabBaseListComponent <AWEIMTabSkeletonChildViewControllerProvider, AWEIMChatListDataControllerDelegate, AWEIMListTabWrapperAction, AWEIMBaseDataControllerChildDataControllerLifeMessage>

@property (retain, nonatomic) AWEIMTabIndicatorModel *indicatorModel;
@property (weak, nonatomic) id<AWEIMTabSkeletonInterface> tabSkeletonService;
@property (weak, nonatomic) id<AWEIMChatListDataControllerInterface> dataController;
@property (nonatomic) BOOL canShow;
@property (retain, nonatomic) AWEIMListTabWrapperViewController *wrapperVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_loadMoreData;
- (id)createDataController;
- (void)updateUnreadCount;
- (BOOL)canShowCampaignInCurrentViewController;
- (void)didReloadChatList;
- (void)listViewControllerWillDisappear:(long long)a0;
- (void)listViewControllerWillAppear:(long long)a0;
- (id)titleTextInEmptyPage;
- (id)infomativeTextInEmptyPage;
- (BOOL)hideUnreadDot;
- (BOOL)enableShowChildViewController;
- (id)viewControllerIdentify;
- (BOOL)canShowHeaderInCurrentViewController;
- (id)viewControllerforSkeleton;
- (void)setupIndicatorModel:(id)a0;
- (void)willDeleteChat:(id)a0 completion:(id /* block */)a1;
- (void)willNotDisPlayChat:(id)a0 completion:(id /* block */)a1;
- (void)reloadWhenFirstAppear;
- (void)baseDataControllerChildDataControllerDidCreate;
- (void)baseDataControllerChildDataControllerDidClear;
- (BOOL)canShowChildViewController;
- (void)observeTabUnreadCountChangeWithHandler:(id /* block */)a0;
- (id)tabIndicatorModel;
- (void)willRemoveCurrentViewControllerFromTabSkeletion;
- (void)chatListDataControllerDidFinishLoadPagedChatList:(id)a0;
- (void)chatListDataControllerDidReloadChatList:(id)a0;
- (void)chatListDataController:(id)a0 didReloadChatListAtIndex:(long long)a1;
- (void)chatListDataController:(id)a0 didInsertChatListAtIndex:(long long)a1;
- (void)chatListDataController:(id)a0 didMoveNewMessageToNewIndex:(long long)a1 fromOldIndex:(unsigned long long)a2;
- (void)chatListDataControllerDidAddNewMessage:(id)a0;
- (void)reloadTabMenuIfNeeded;
- (void).cxx_destruct;
- (long long)unreadCount;
- (id)title;
- (void)dealloc;
- (long long)indicatorType;
- (id)trackName;

@end

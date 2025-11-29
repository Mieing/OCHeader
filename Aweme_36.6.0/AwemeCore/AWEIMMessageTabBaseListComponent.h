@class NSString, AWEIMChatListViewController;
@protocol AWEIMMessageTabInteractInterface, AWEIMMessageTabChatPopOverInterface, AWEIMMessageTabIndexInterface, AWEIMMessageTabCampaignInterface, AWEIMMessageTabSearchInterface, AWEIMTabSkeletonInterface, AWEIMMessageTabNaviBarInterface;

@interface AWEIMMessageTabBaseListComponent : AWEIMComponentBase <AWEUserMessage, AWEIMMessageTabChatPopOverAction, AWEIMMessageTabPadSplitAction, AWEIMMessageTabListInterface, AWEIMChatListViewControllerDelegate>

@property (weak, nonatomic) id<AWEIMMessageTabInteractInterface> interactService;
@property (weak, nonatomic) id<AWEIMTabSkeletonInterface> tabSkeletonService;
@property (weak, nonatomic) id<AWEIMMessageTabCampaignInterface> campaignService;
@property (weak, nonatomic) id<AWEIMMessageTabNaviBarInterface> naviBarService;
@property (weak, nonatomic) id<AWEIMMessageTabChatPopOverInterface> popOverSheetService;
@property (weak, nonatomic) id<AWEIMMessageTabIndexInterface> tabIndexService;
@property (weak, nonatomic) id<AWEIMMessageTabSearchInterface> searchService;
@property (retain, nonatomic) AWEIMChatListViewController *chatListVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)scrollToOffset:(double)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)scrollViewDidEndScroll;
- (void)didTransferToChat:(id)a0 entryType:(long long)a1 isPushByFromVC:(BOOL)a2 extraParams:(id)a3 completion:(id /* block */)a4;
- (BOOL)isInCurrentVC;
- (BOOL)avoidShowCampaignInertially;
- (void)tableViewHeaderChanged;
- (long long)currentWrapperType;
- (void)didEnterToSecondaryVC:(id)a0 bizLine:(unsigned long long)a1 bizID:(id)a2;
- (void)didCloseSecondaryVC:(id)a0 bizLine:(unsigned long long)a1 bizID:(id)a2;
- (void)onUserPrivacySettingChange;
- (void)willDeleteChat:(id)a0 completion:(id /* block */)a1;
- (void)willNotDisPlayChat:(id)a0 completion:(id /* block */)a1;
- (void)reloadWhenFirstAppear;
- (void)cellLongPressPopupGestureDidTrigeredWithIndexPath:(id)a0 cell:(id)a1 point:(struct CGPoint { double x0; double x1; })a2 chat:(id)a3;
- (void)scrollViewWillBeginScroll;
- (void)scrollDidEndDraggingWithOffset:(double)a0;
- (void)chatPopOverSheetWillShow;
- (void)scrollToTop;
- (long long)entryType;
- (void).cxx_destruct;
- (id)tableView;
- (void)scrollToIndexPath:(id)a0;
- (id)chatList;
- (void)dealloc;
- (void)showLoadingView;

@end

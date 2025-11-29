@class NSString;
@protocol IESIMScrollViewContentOffsetService, AWEIMMessageListDataInterface, AWEIMMessageTableViewInterface;

@interface IESIMMessageListLoadMoreComponent : AWEIMComponentBase <AWEIMMessageListDataAction, IESIMMessageListLoadMoreService, AWEIMMessageTableViewAction, IESIMScrollViewContentOffsetAction>

@property (nonatomic) BOOL hasMore;
@property (nonatomic) double lastOffsetY;
@property (weak, nonatomic) id<AWEIMMessageTableViewInterface> messageListTableViewService;
@property (weak, nonatomic) id<IESIMScrollViewContentOffsetService> scrollViewContentOffsetService;
@property (weak, nonatomic) id<AWEIMMessageListDataInterface> messageListDataInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isLoadingMore;
@property (nonatomic) BOOL isLoadingMoreNew;
@property (nonatomic) BOOL needConfigMJFooterWhenInited;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)vm_updateMessageGroupListWithoutScroll;
- (void)vm_updateMessageGroupListAfterLoadingMore:(BOOL)a0;
- (void)vm_updateMessageGroupListAfterLoadingMoreNew:(BOOL)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)tableViewDidScroll:(id)a0;
- (void)tableViewDidEndScroll:(id)a0;
- (void)tableViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)tableViewDidEndDecelerating:(id)a0;
- (void)tableViewDidScrollToTop:(id)a0;
- (void)msgList_tableViewCreated:(id)a0;
- (void)p_loadMore;
- (void)p_endRefreshing:(BOOL)a0;
- (void)resetLoadMoreFooter;
- (void)markLoadMore;
- (void)refreshLoadMoreHeader;
- (void)p_endRefreshingNew:(BOOL)a0;
- (void)markLoadMoreNew;
- (void)p_loadMoreNew;
- (void)scrollAnimationDidEnd;
- (void)resetLoadMoreHeader;
- (void)loadMoreHistoryMessageIfNeeded;
- (void).cxx_destruct;

@end

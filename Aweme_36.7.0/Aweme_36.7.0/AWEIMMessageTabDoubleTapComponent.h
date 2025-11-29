@class NSString;
@protocol AWEIMMessageTabModeInterface, AWEIMMessageTabIndexInterface, AWEIMTabSkeletonInterface, AWEIMChatListInterface;

@interface AWEIMMessageTabDoubleTapComponent : AWEIMComponentBase <AWEIMMessageTabBarAction, AWEIMChatListScrollAction>

@property (weak, nonatomic) id<AWEIMChatListInterface> chatListService;
@property (weak, nonatomic) id<AWEIMTabSkeletonInterface> tabSkeletonService;
@property (weak, nonatomic) id<AWEIMMessageTabIndexInterface> tabIndexerService;
@property (weak, nonatomic) id<AWEIMMessageTabModeInterface> messageTabModeService;
@property (nonatomic) BOOL isLoadingMore;
@property (nonatomic) long long loadMoreVersion;
@property (nonatomic) long long scrollDistance;
@property (copy, nonatomic) NSString *scrollType;
@property (nonatomic) double beginScrollTime;
@property (nonatomic) long long loadPages;
@property (nonatomic) long long isInterrupted;
@property (nonatomic) long long initialChatCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)tabBarItemViewControllerDidUnselect;
- (void)tabBarItemViewControllerDidDoubleTap;
- (void)chatListWillBeginScroll;
- (void)tabBarItemViewControllerDidClick;
- (void)scrollToUnreadConversationNew:(BOOL)a0 canLoadMore:(BOOL)a1;
- (void)scrollToUnreadConversation:(BOOL)a0;
- (BOOL)p_isTopCellOffsetWithPinView;
- (BOOL)isUnreadCountChatWithModel:(id)a0;
- (BOOL)p_isIndexEnable:(long long)a0 top:(long long)a1;
- (void)p_scrollToIndexPath:(id)a0 isDoubleClick:(BOOL)a1;
- (id)p_topVisibleCellIndexPath;
- (void)p_beginTrackMessageTabJumpEvent;
- (long long)p_countAllUnreadCount;
- (BOOL)needScrollToTopUnreadNumber;
- (void)scrollToTopUnreadNumber:(BOOL)a0;
- (void)p_trackMessageTabDoubleTapJumpEvent;
- (void)scrollToNumberUnreadConversationStartingFromRow:(long long)a0 endingRow:(long long)a1 canLoadMore:(BOOL)a2 loadMoreLimit:(long long)a3 isDoubleClick:(BOOL)a4 completion:(id /* block */)a5 version:(long long)a6;
- (void)scrollToDotUnreadConversationWithTopCell:(id)a0 isDoubleClick:(BOOL)a1 completion:(id /* block */)a2;
- (void)p_unreadStrategyWithChat:(id)a0 completion:(id /* block */)a1;
- (long long)p_getUnReadTypeForChat:(id)a0;
- (void)p_scrollToIndexPathNew:(id)a0 isDoubleClick:(BOOL)a1 needTrack:(BOOL)a2;
- (void)p_trackHomePageMessageButtonWithIndex:(unsigned long long)a0 isDoubleClick:(BOOL)a1;
- (void).cxx_destruct;

@end

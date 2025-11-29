@class NSString, NSMutableArray;
@protocol AWEIMAirBorneTipInterface, AWEIMMessageTableViewInterface, AWEIMMessageVisibleCellInterface, AWEIMMessageListDataInterface, AWEIMTopUnReadTipsAction, AWEIMMessageReadIndexInterface, AWEIMTopAnchorInterface;

@interface AWEIMTopUnReadTipsComponent : AWEIMComponentBase <AWEIMTopUnReadTipsInterface, AWEIMMessageListDataAction>

@property (weak, nonatomic) id<AWEIMMessageTableViewInterface> tableViewService;
@property (weak, nonatomic) id<AWEIMMessageVisibleCellInterface> visibleCellService;
@property (weak, nonatomic) id<AWEIMTopAnchorInterface> topAnchorService;
@property (weak, nonatomic) id<AWEIMMessageListDataInterface> messageListData;
@property (weak, nonatomic) id<AWEIMTopUnReadTipsAction> unReadTipsAction;
@property (weak, nonatomic) id<AWEIMAirBorneTipInterface> airbornTips;
@property (weak, nonatomic) id<AWEIMMessageReadIndexInterface> readIndexService;
@property (nonatomic) long long enteredUnreadCount;
@property (retain, nonatomic) NSMutableArray *unReadMessages;
@property (nonatomic) double tapTimestamp;
@property (nonatomic) BOOL hasInsertedNotice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)didFetchMsgWithMessageGroupArray:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 shouldAutoLoadMore:(BOOL)a3 isFirstLoad:(BOOL)a4;
- (void)upTipsChangedWithDisplayCell:(id)a0 forRowAtIndexPath:(id)a1;
- (void)updateDisplayWithUnReadCount:(long long)a0;
- (long long)initialUnreadCount;
- (id)onTappedUnReadTips;
- (long long)reloadUnReadMessagesBefore:(long long)a0;
- (BOOL)shouldShowUnreadTips;
- (id)getUnReadCountWithReadIndex:(long long)a0 until:(long long)a1;
- (void)p_trackUnreadTipsShow;
- (void)p_clearUnReadIfNeededWithMessage:(id)a0 forRowAtIndexPath:(id)a1;
- (void)p_trackUnreadTipsClick;
- (void)scrollToLastReadMsgWithLastReadIndex:(long long)a0 messageGroupArray:(id)a1;
- (void)insertNewNotiMessageWithLastReadMessage:(id)a0;
- (void)scrollToMessageLocation:(id)a0 section:(long long)a1 row:(long long)a2;
- (void)p_trackUnreadTipsWithEvent:(id)a0;
- (void).cxx_destruct;

@end

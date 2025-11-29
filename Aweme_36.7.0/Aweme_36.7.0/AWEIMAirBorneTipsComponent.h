@class AWEIMMessageConversation, AWEIMMessage, NSArray, NSString;
@protocol IESIMMessageListUITaskService, AWEIMMessageTableViewInterface, AWEIMMessageVisibleCellInterface, AWEIMMessageListDataInterface, AWEIMMessageReadIndexInterface, AWEIMTopAnchorInterface;

@interface AWEIMAirBorneTipsComponent : AWEIMComponentBase <AWEIMAirBorneTipInterface, AWEIMMessageTableViewAction, AWEIMBottomAnchorAction, AWEIMAirBorneTipAction, AWEIMTopUnReadTipsAction>

@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (weak, nonatomic) id<AWEIMMessageVisibleCellInterface> visibleCellService;
@property (weak, nonatomic) id<AWEIMTopAnchorInterface> topAnchorService;
@property (weak, nonatomic) id<AWEIMMessageListDataInterface> messageListData;
@property (weak, nonatomic) id<AWEIMMessageTableViewInterface> tableViewService;
@property (weak, nonatomic) id<AWEIMMessageReadIndexInterface> readIndexService;
@property (weak, nonatomic) id<IESIMMessageListUITaskService> messageListUITaskService;
@property (nonatomic) BOOL endShowAirborne;
@property (nonatomic) BOOL showingAirborne;
@property (nonatomic) long long poolBottom;
@property (nonatomic) long long poolTop;
@property (nonatomic) long long poolUpSentinelOrderIndex;
@property (retain, nonatomic) AWEIMMessage *poolDownSentinel;
@property (copy, nonatomic) NSArray *allUnreadAirborneMessages;
@property (nonatomic) long long lastReadMessageGroup;
@property (nonatomic) long long lastReadMessageIndex;
@property (copy, nonatomic) NSArray *highlights;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isTargetGroupWith:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)tableViewDidEndScroll:(id)a0;
- (void)tableViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)tableViewDidEndDecelerating:(id)a0;
- (void)bottomAnchorDidTapped;
- (void)willScrollToLocoalMessage:(id)a0 withSection:(long long)a1 withRow:(long long)a2;
- (void)setupAirBorneTipsData;
- (void)showAirborneTip;
- (id)tapOnAirborne;
- (BOOL)shouldShowAirBornTips;
- (void)removeCurrentAllAfterLastestMessage;
- (void)highlightCurrentCells;
- (void)hideAirBorn;
- (id)currentScreenUnreadAirborneMessageCellsIgnoreHighlight:(BOOL)a0;
- (void)updateLastUnreadAirborneMessageIndex;
- (void)trackOnClickAirborneTip;
- (id)nextAirborneMessage;
- (void)getLastetReadAirborneMessageIndex:(long long *)a0 lastReadMessageIndex:(long long *)a1 beforeMessage:(id)a2;
- (void)removeAfterAllMessages:(long long *)a0 index:(long long *)a1;
- (void)updateDataWhenScrollEnd;
- (BOOL)isCurrentAirBorne;
- (void)highlightCellsAndUpdate;
- (void)removeAllMessageWhenTap;
- (void)hideAllTipsIfNeed;
- (void)loadAirborneAvatarImage;
- (void)showAirborneTipText;
- (void)trackAirborneShowTrack;
- (void)trackOnAirborneHide;
- (void)resetAirborneData;
- (BOOL)isArrivedLastestScreen;
- (void)removeAirborneMessagesBeforeMessage:(id)a0;
- (void)removeBeforeAllMessages:(long long *)a0;
- (BOOL)isAirborneMessage:(id)a0;
- (id)getAllUnreadAirborneMessagesWithSection:(long long)a0 row:(long long)a1 fromMsgOrderIndex:(long long)a2;
- (id)getAllUnreadAirborneViewModelsFromMsgOrderIndex:(long long)a0;
- (id)visibleCells;
- (void).cxx_destruct;
- (id)init;

@end

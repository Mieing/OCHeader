@class NSString, UIImage, NSArray, NSSet, AWEIMMessage, NSDictionary, AWEIMMessageConversation, NSNumber;
@protocol AWEIMMessageVisibleCellInterface, IESIMMessageProtocol, AWEIMMessageTableViewInterface, AWEIMTopUnReadTipsInterface, AWEIMTopAnchorInterface, AWEIMMessageListDataInterface, AWEIMImportantMsgTipsAction, AWEIMMessageReadIndexInterface;

@interface AWEIMImportantMsgTipsComponent : AWEIMComponentBase <AWEIMImportantMsgTipsInterface, IESIMConversationCleanAllMessageAction>

@property (nonatomic) long long subscribeUnreadCountOnMute;
@property (nonatomic) long long muteSettingsMask;
@property (copy, nonatomic) NSString *importantMessageTipsText;
@property (copy, nonatomic) NSArray *allUnreadImportantMessages;
@property (copy, nonatomic) NSSet *ignoreImportantMessages;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL hasOnceTappedTips;
@property (nonatomic) long long minImportantMessageGlobalIndex;
@property (retain, nonatomic) AWEIMMessage *minIndexImportantMessage;
@property (nonatomic) long long beforeMinImportantMessageUnreadMessagesCount;
@property (copy, nonatomic) NSDictionary *enteredsubscribeUnreadCountsOnMute;
@property (retain, nonatomic) NSNumber *remainUnreadMessageisDifferent;
@property (retain, nonatomic) AWEIMMessage *currentShowingMessage;
@property (retain, nonatomic) UIImage *arrowImage;
@property (nonatomic) BOOL hasInsertLocalNotie;
@property (nonatomic) BOOL enableImportantAirBornMessage;
@property (nonatomic) BOOL isDescendElevator;
@property (nonatomic) BOOL isFetchingEmptyMessage;
@property (retain, nonatomic) NSString *anchorType;
@property (retain, nonatomic) id<IESIMMessageProtocol> oldestImportantMessage;
@property (nonatomic) long long readIndex;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) long long unreadMessageMask;
@property (weak, nonatomic) id<AWEIMMessageListDataInterface> messageListData;
@property (weak, nonatomic) id<AWEIMTopAnchorInterface> topAnchorService;
@property (weak, nonatomic) id<AWEIMMessageTableViewInterface> tableViewService;
@property (weak, nonatomic) id<AWEIMMessageVisibleCellInterface> visibleCellService;
@property (weak, nonatomic) id<AWEIMImportantMsgTipsAction> importantTipsAction;
@property (weak, nonatomic) id<AWEIMTopUnReadTipsInterface> topUnReadTips;
@property (weak, nonatomic) id<AWEIMMessageReadIndexInterface> readIndexService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)calculateAllImportantUnreadFromCon:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)didCleanAllMessages;
- (void)setupImportantMsgData;
- (BOOL)shouldShowImportantMsg;
- (BOOL)shouldShowImportantMsgForFirstShow;
- (void)showImportantMsgTips;
- (void)showImportantMsgTipsAfterLandingAtOlddestMessage;
- (void)importantMessageUpTipsChangedWithDisplayCell:(id)a0 forRowAtIndexPath:(id)a1;
- (id)tapOnImportantMessageTips;
- (void)__fetchAndShowOldestUnreadImportantMessageFromIndex:(long long)a0;
- (id)visiableImportantMessageCells;
- (id)visiableImportantMessages;
- (void)removeImporatantMessages:(id)a0;
- (void)addIgonerImportMessages:(id)a0;
- (void)updateImportantMessageTips;
- (void)__tryAddOldestImportantMessageIcon;
- (void)importMessageTipsDidShowTracker;
- (void)updateHistoryImportantMessageIconTips;
- (BOOL)isImportantMessage:(id)a0;
- (void)importMessageTipsDidTappedTracker;
- (void)scrollToImportantMessageLocation:(id)a0 section:(long long)a1 row:(long long)a2;
- (void)__tryAddHistoryMessageRevisitNotice;
- (id)__importantMessageTipsDetailTextWithMessage:(id)a0;
- (void)__setDetailImageViewFromMessage:(id)a0;
- (void)importMessageTipsDidHidenTracker;
- (void)updateAllUnreadMessageTipsCountWithMessage:(id)a0;
- (void)__loopFetchOldestGroupOwnerMessageFromSender:(long long)a0 inConversation:(id)a1 withReadIndex:(long long)a2 Completion:(id /* block */)a3;
- (BOOL)__findAndCacheOldestImportantMessageFromMessagesArray:(id)a0;
- (void)__importantMessageTrackWithEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

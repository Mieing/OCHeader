@class NSString, NSMutableDictionary, IESIMMessageTabUnreadCountConsistencyCheckerPlugin, NSDictionary, NSSet, NSNumber, NSMutableArray;

@interface AWEIMMessageTabUnreadCountConsistencyCheckerComponent : AWEIMComponentBase <AWEIMMessageTabUnreadCountConsistencyCheckerInterface, AWEIMComponentLazyCreate, AWEUserMessage, AWEIMNewMessageProtocol>

@property (nonatomic) long long messageTabUIUnreadCount;
@property (nonatomic) unsigned long long messageTabUIBadgeType;
@property (retain, nonatomic) NSNumber *messageTabTotalUnreadCount;
@property (nonatomic) long long messageTabImSubUnreadCount;
@property (nonatomic) long long messageListLocalConvTotalUnreadCount;
@property (retain, nonatomic) NSMutableDictionary *chatCellCidToUnreadCountMutableDict;
@property (retain, nonatomic) NSMutableDictionary *chatCellCidToGroupMutableDict;
@property (retain, nonatomic) NSMutableDictionary *chatCellCidToHasBrowsedUnreadCountMutableDict;
@property (retain, nonatomic) NSMutableArray *chatCellUnreadCountChangeInfoArr;
@property (retain, nonatomic) NSMutableDictionary *imChatCellCidToUnreadCountMutableDict;
@property (nonatomic) BOOL hasReportedFirst;
@property (nonatomic) BOOL hasReportedInconsistent;
@property (nonatomic) BOOL hasLoadedTotalChats;
@property (nonatomic) BOOL hasEnteredMessageTab;
@property (nonatomic) BOOL hasFetchedOfficialChats;
@property (nonatomic) BOOL isMessageTabShowing;
@property (nonatomic) BOOL hasReportedInconsistentDuringMessageTab;
@property (retain, nonatomic) IESIMMessageTabUnreadCountConsistencyCheckerPlugin *plugin;
@property BOOL isAppInBackground;
@property (retain) NSDictionary *tabBarIMCidToUCDict;
@property (retain, nonatomic) NSSet *ignoredSessionIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lazyComponentWakeupInterface;
+ (BOOL)enableReportingFilterReason;
+ (BOOL)optimizeEarlyAbortCases;
+ (BOOL)enableCheckingOutsideMessageTab;
+ (long long)newTrackerDelayTime;
+ (BOOL)enableCheckingWithoutNetwork;
+ (BOOL)enableReportOnlyOneGroup;
+ (BOOL)enableShowInconsistentPopup;
+ (long long)reportFilterReasonConvLimit;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)checkerQueue;
- (void)onAppDidEnterBackground:(id)a0;
- (void)handleEnterMessageTabEvent;
- (void)didLoadNewMessages:(id)a0;
- (void)didLoadOfficialChats:(id)a0;
- (void)didEndLoadOfficialChatsWithError:(id)a0;
- (void)updateUIChatUnreadCountWithCid:(id)a0 unreadCount:(long long)a1 chatType:(id)a2;
- (void)updateDataChatWithOldChatModel:(id)a0 newChatModel:(id)a1;
- (void)removeDataChatWithCid:(id)a0 chatType:(id)a1;
- (void)onAppDidBecomeActive:(id)a0;
- (void)p_updateMessageEntryUIUnreadCountWithBadgeInfo:(id)a0;
- (void)updateMessageTabUnreadCountWithTotalUnreadCount:(long long)a0 imSubUnreadCount:(long long)a1;
- (void)handleTabDidChangeNotification:(id)a0;
- (void)updateChatBrowsedStatusWithCid:(id)a0 hasBrowsedUnreadCount:(BOOL)a1;
- (id)messageListLocalChatTypes;
- (void)addOneChatCellUnreadCountChangeInfoWithCid:(id)a0 oldUnreadCount:(id)a1 newUnreadCount:(id)a2;
- (void)tryToCheckConsistent;
- (void)tryToCheckConsistentNew;
- (void)checkConsistent;
- (void)stopToCheckConsistentNew;
- (void)stopToCheckConsistent;
- (void)checkConsistentNew;
- (void)checkConsistentWithChatListTotalUnreadCount:(long long)a0 messageTabTotalUnreadCount:(id)a1 messageListLocalConvTotalUnreadCount:(long long)a2 messageTabImSubUnreadCount:(long long)a3 messageTabUIUnreadCount:(long long)a4 messageTabUIBadgeType:(unsigned long long)a5 version:(id)a6;
- (id)genInconsistentTrackStringByGroupAndGetOne:(id *)a0;
- (id)getCidTrackingString;
- (void)handleHasReportedInconsistent;
- (id)messageListSubUCLoggerQueue;
- (void)tryToLogUIChatUnreadCountInfo;
- (void)stopToLogUIChatUnreadCountInfo;
- (void)messageTabViewDidLoad:(id)a0;
- (void).cxx_destruct;
- (void)clearAll;
- (void)dealloc;

@end

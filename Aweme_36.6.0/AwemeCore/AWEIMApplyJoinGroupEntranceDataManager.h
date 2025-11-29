@class AWEIMChatModel, AWEIMApplyJoinGroupModel, NSString;
@protocol AWEIMApplyJoinGroupEntranceDataManagerDelegate, IESIMThrottleDebounceAction;

@interface AWEIMApplyJoinGroupEntranceDataManager : NSObject <IESIMConversationAuditManagerDelegate, AWEUserMessage>

@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL hasInitialFetched;
@property (retain, nonatomic) id<IESIMThrottleDebounceAction> throttle;
@property (retain, nonatomic) AWEIMChatModel *applyChat;
@property (weak, nonatomic) id<AWEIMApplyJoinGroupEntranceDataManagerDelegate> delegate;
@property (retain, nonatomic) AWEIMApplyJoinGroupModel *latestApplyModel;
@property (nonatomic) long long applyUnreadCount;
@property (nonatomic) long long promptUnreadCount;
@property (nonatomic) long long dataStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)fetchAuditSwitchStatusWithShortID:(long long)a0 type:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)auditManager;
- (void)markConversationApplyReadWithConShortId:(long long)a0;
- (void)fetchLatestApply;
- (void)updateAuditSwitchStatusWithCon:(id)a0 type:(unsigned long long)a1 switchStatus:(BOOL)a2 completion:(id /* block */)a3;
- (void)tryFetchLatestApply;
- (void)iesim_briefDataSource:(id)a0 onNewConversationApply:(id)a1;
- (void)iesim_briefDataSource:(id)a0 onNewApplyAck:(id)a1;
- (void)fetchLatestApplyWithContext:(id)a0;
- (void)__fetchLatestApplyWithContext:(id)a0;
- (void)__resetDataForNextFetch;
- (void)__markReadAllPrompt;
- (void)updateLatestApplyChat:(id)a0;
- (void)__updateLatestApplyChat;
- (id)__generateApplyChatModelWithDisplayText:(id)a0 updateDate:(double)a1;
- (void)generateChatModelWithompletion:(id /* block */)a0;
- (void)__dealWithDataIfAllReady;
- (void)fetchLatestApplyAtCodeStart;
- (void)markReadAllApply;
- (void)removeEntrance;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

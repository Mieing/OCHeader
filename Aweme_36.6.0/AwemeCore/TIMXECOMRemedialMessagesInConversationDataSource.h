@class NSString, TIMXECOMMessageReadPollingHelper;

@interface TIMXECOMRemedialMessagesInConversationDataSource : TIMXOMessagesInConversationDataSource <TIMXMessageStoreChangesObserver>

@property (nonatomic) long long lastReadIndex;
@property (nonatomic) long long currentMinIndexV2;
@property BOOL hasReportFilterData;
@property (retain, nonatomic) TIMXECOMMessageReadPollingHelper *messsageReadPollingHelper;
@property (nonatomic) BOOL forcePullRemoteForFirstPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onMessagesCreated:(id)a0 belongingConversationMap:(id)a1 reason:(id)a2 context:(id)a3;
- (id)initPurelyWithConversationID:(id)a0 rootObject:(id)a1;
- (void)loadOlderMessagesRemedialyWithPriorityUseDB:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)loadMessagesRemedialyWithDirection:(unsigned long long)a0 priorityUseDB:(BOOL)a1 indexV2:(long long)a2 completionBlock:(id /* block */)a3;
- (void)loadOlderMessagesRemedialyWithPriorityUseDB:(BOOL)a0 targetMessageID:(id)a1 completionBlock:(id /* block */)a2;
- (void)preSetupExtOfMessageList:(id)a0;
- (BOOL)checkMessagesContinuous:(id)a0;
- (void)appendNewMessages:(id)a0 needFixOrder:(BOOL)a1 reason:(long long)a2 context:(id)a3;
- (void)appendNewMessages:(id)a0 needFixOrder:(BOOL)a1 context:(id)a2;
- (BOOL)checkMessageValid:(id)a0;
- (void)cycleLoadMessagesBetweenMinIndexV2:(long long)a0 maxIndexV2:(long long)a1 completionBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end

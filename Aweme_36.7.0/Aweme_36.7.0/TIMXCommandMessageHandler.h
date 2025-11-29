@class TIMXSDKInstance, TIMXGCDTimer, NSMutableArray, NSObject;
@protocol TIMXMessageStoreProtocol, OS_dispatch_queue, TIMXCurrentUserCredentialProtocol;

@interface TIMXCommandMessageHandler : NSObject

@property (weak, nonatomic) TIMXSDKInstance *r;
@property (retain, nonatomic) id<TIMXMessageStoreProtocol> db;
@property (retain, nonatomic) id<TIMXCurrentUserCredentialProtocol> user;
@property (retain, nonatomic) NSMutableArray *aggregatedCommandContexts;
@property (retain, nonatomic) TIMXGCDTimer *getInfoAggregateTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *getInfoAggregateQueue;

- (void)handleCommandMessageWithContext:(id)a0;
- (void)aggregateHandleConversationInfoUpdate:(id)a0 conversationIdentifier:(id)a1 conversationShortId:(long long)a2 inboxType:(int)a3 conversationType:(unsigned long long)a4 isNeedFetchCoreInfo:(BOOL)a5 isNeedFetchSettingInfo:(BOOL)a6 isNeedFetchPaticipants:(BOOL)a7;
- (void)handleUpdateConversationCallback:(id)a0 error:(id)a1;
- (BOOL)needPullConvInfoWithContentDict:(id)a0;
- (BOOL)extDataArrayIsValid:(id)a0 withConversationId:(id)a1 extTypeStr:(id)a2;
- (void)clearMessagesWithContext:(id)a0;
- (void)p_updateReadInfoWithConvID:(id)a0 readBadgeCount:(int)a1 threadReadBadgeCount:(int)a2 importantThreadReadBadgeCount:(int)a3;
- (void)clearMessageMarkReadWithContext:(id)a0;
- (void)p_handleSpecialUpdateInfoCommandWithIdentifier:(id)a0 convType:(long long)a1;
- (void)p_updateImportantPratOfCoreInfoIfNecessaryOfConversation:(id)a0 withCoreinfoUpdateCommandContent:(id)a1;
- (BOOL)canUpdateExtLocally:(id)a0;
- (id)extTypeStrWithContext:(id)a0;
- (void)handleConversationSettingsInfoUpdated:(id)a0;
- (void)handleResetConversationHasMoreWithContext:(id)a0;
- (void)handleDeleteConversationWithContext:(id)a0;
- (void)handleUpdateMinIndexWithContext:(id)a0;
- (void)handleConversationCoreInfoUpdatedWithContext:(id)a0;
- (void)handleConversationDestoryWithContext:(id)a0;
- (void)handleModeChangeWithContext:(id)a0;
- (BOOL)shouldAggregateCommand:(id)a0;
- (void)handleAggreagteCommands:(id)a0;
- (void)handleVisibleMessageForDouYinWithContext:(id)a0 completion:(id /* block */)a1;
- (void)handleDeleteMessageWithContext:(id)a0;
- (void)handleVisibleMessageWithContext:(id)a0;
- (void)handleBatchUnmarkWithContext:(id)a0;
- (void)handleMarkWithContext:(id)a0;
- (void)handleSendFailedRespWithContext:(id)a0;
- (void)p_handleNewCommandMessageParticipantsUpdatedDouYinImpl:(id)a0 contentDict:(id)a1 serverMemberVersion:(long long)a2 completion:(id /* block */)a3;
- (void)p_handleCommandMessageParticipantsUpdatedDouYinImpl:(id)a0 contentDict:(id)a1 completion:(id /* block */)a2;
- (void)p_handleCommandMessageParticipantsUpdatedDefaultImpl:(id)a0;
- (int)p_getInfoAggregatedTime:(long long)a0;
- (void)p_aggregateAddParticipantsCommandMessage:(id)a0 aggregationTime:(int)a1;
- (void)handleAggregatedGetInfoCommandMessagesIfNeed:(id)a0;
- (void)handleParticipantsUpdatedWithContext:(id)a0;
- (void)handleSubcommandMessageWithContext:(id)a0;
- (void)handleBlockWithContext:(id)a0;
- (void)handleNotifyVoipWithContext:(id)a0;
- (void)handleNotifySpringTaskWithContext:(id)a0;
- (void)handleNotifySpringPlayChangeWithContext:(id)a0;
- (void)handleNotifyThreadTotalBadgeCount:(id)a0;
- (void)handleIncentiveChatWithContext:(id)a0;
- (void)handleThreadSubscribeStatusUpdateWithContext:(id)a0;
- (void)handleConversationRestorationWithContext:(id)a0;
- (void)handleConversationApplyNotifyWithContext:(id)a0;
- (void)handleConversationAuditAckNotifyWithContext:(id)a0;
- (void)handleNotifyCommonBizMessageWithContext:(id)a0;
- (void)handleMarkReadWithContext:(id)a0;
- (void)handleMindexUpdateWithContext:(id)a0;
- (void)handleConversationBotsUpdateWithContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end

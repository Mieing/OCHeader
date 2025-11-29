@class NSString, TIMXSDKInstance, NSObject;
@protocol OS_dispatch_queue;

@interface TIMXMessageMarkAsReadOperator : NSObject <TIMXMessageMarkAsReadProtocol, TIMXInstanceScopeSingleton, TIMXOTotalUnreadCountObserver, TIMXThirdPartyEventProtocol> {
    TIMXSDKInstance *_r;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *p_reportUnreadQueue;
@property (nonatomic) BOOL enableMeasureMarkReadElapsedTime;
@property (nonatomic) long long markReadElapsedTimeExceptionDuration;
@property (nonatomic) long long lastUnreadCount;
@property (copy, nonatomic) id /* block */ unreadCountReportFilterBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)__shouldReportBoxTypes;
- (void)ecom_markConversationAsRead:(id)a0 tillPullIndex:(id)a1 tillBadgeCount:(id)a2 convUnreadUnion:(id)a3 sendToServer:(BOOL)a4;
- (void)markConversationAsRead:(id)a0 tillPullIndex:(id)a1 tillBadgeCount:(id)a2 tillMuteReadBadgeCountInfos:(id)a3 sendToServer:(BOOL)a4;
- (void)markConversationAsRead:(id)a0 tillPullIndex:(id)a1 tillBadgeCount:(id)a2 tillThreadbadgeCountInfo:(id)a3 tillMuteReadBadgeCountInfos:(id)a4 sendToServer:(BOOL)a5 completion:(id /* block */)a6;
- (long long)getConversationUnreadCountWithBadgeCount:(id)a0 readBadgeCount:(id)a1;
- (BOOL)bumpReadIndexTo:(long long)a0 forConversation:(id)a1;
- (long long)readIndexForConversation:(id)a0;
- (BOOL)bumpReadIndexV2To:(long long)a0 forConversation:(id)a1;
- (long long)readIndexV2ForConversation:(id)a0;
- (BOOL)bumpReadBadgeCountTo:(long long)a0 forConversation:(id)a1;
- (BOOL)bumpReadBadgeCountTo:(long long)a0 forConversation:(id)a1 forbidCheck:(BOOL)a2;
- (BOOL)bumpThreadReadBadgeCountTo:(long long)a0 forConversation:(id)a1 forbidCheck:(BOOL)a2;
- (BOOL)bumpImportantThreadReadBadgeCountTo:(long long)a0 forConversation:(id)a1 forbidCheck:(BOOL)a2;
- (id)threadReadBadgeCountForConversation:(id)a0;
- (id)importantThreadReadBadgeCountForConversation:(id)a0;
- (id)readBadgeCountForConversation:(id)a0;
- (void)unreadCountReport:(id)a0 inbox:(int)a1 needCheck:(BOOL)a2;
- (BOOL)bumpMuteBadgeCountsForConversation:(id)a0 infos:(id)a1;
- (BOOL)bumpMuteReadBadgeCountsForConversation:(id)a0 infos:(id)a1;
- (id)muteBadgeCountInfosForConversation:(id)a0;
- (id)muteReadBadgeCountInfosForConversation:(id)a0;
- (id)calculateSubscribeUnreadCountsOnMuteForConversation:(id)a0;
- (unsigned long long)calculateSubscribeUnreadCountOnMuteForConversation:(id)a0 muteConfigString:(id)a1;
- (id)muteReadBadgeCountInfosFromMuteBadgeCountInfosForConversation:(id)a0;
- (id)muteReadBadgeCountInfosFromArray:(id)a0;
- (long long)observingUserID;
- (id)addMonitorInToArray:(id)a0 event:(id)a1;
- (void)didUpdateThirdPartTotalUnreadCount;
- (BOOL)__shouldReportConvUnreadChange:(id)a0 readIndex:(long long)a1 readIndexV2:(long long)a2 conversationID:(id)a3;
- (BOOL)__shouldReportThreadUnreadChange:(id)a0 importantThreadBadgeCount:(id)a1 conversationID:(id)a2 convType:(int)a3;
- (void)logParamsWithBadgeCount:(id)a0 conversationID:(id)a1 monitorsArray:(id)a2 muteReadBadgeCountInfos:(id)a3 needSend:(BOOL)a4 pullIndex:(id)a5;
- (void)p_markConversationsAsReadWithReadIndexChangedConversations:(id)a0 readIndexChangedConversationModels:(id)a1 sendToServerFlag:(BOOL)a2;
- (void)uploadReadIndexLogWithConversations:(id)a0 markReadModels:(id)a1;
- (long long)__totalUnreadCountOfDBGeneralConvs;
- (id)__muteBadgeCountsForConversation:(id)a0;
- (id)__muteReadBadgeCountsForConversation:(id)a0;
- (id)__subscribeUnreadCountOnMuteTypes;
- (void)unreadCountChange;
- (BOOL)__shouldReportCount:(id)a0 convType:(int)a1;
- (void)markAllConversationsAsReadWithSendToServerFlag:(BOOL)a0;
- (void)markConversationAsRead:(id)a0 tillPullIndex:(id)a1 tillBadgeCount:(id)a2 tillMuteReadBadgeCountInfos:(id)a3 sendToServer:(BOOL)a4 completion:(id /* block */)a5;
- (void)markStrangerBoxConversationsAsReadWithSendToServerFlag:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRootObject:(id)a0;

@end

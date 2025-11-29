@class NSString, TIMXSDKInstance, TIMXNewMessageStore, NSObject;
@protocol OS_dispatch_queue, TIMXNewMessageStoreProtocol;

@interface TIMXECOMMessageNewStore : NSObject <TIMXECOMMessageStoreBridge, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) TIMXNewMessageStore *store;
@property (weak, nonatomic) id<TIMXNewMessageStoreProtocol> storeProtocol;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialNormalMsgQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sharedWritableQueue;
- (id)conversationDatabase;
- (void)syncUpdateConversationInfo:(id)a0 alterBlock:(id /* block */)a1;
- (void)syncMarkConversationAsRead:(id)a0 tillIndex:(id)a1 tillBadgeCount:(id)a2 tillThreadBadgeCountInfo:(id)a3 context:(id)a4;
- (void)syncSoftDeleteMessageWithIdentifier:(id)a0 serverMessageID:(long long)a1 inConversationWithIdentifier:(id)a2;
- (void)syncHardDeleteMessagesInConversation:(id)a0 beforeOrderIndex:(long long)a1;
- (void)syncUpdateMessage:(id)a0 inConversationWithIdentifier:(id)a1 alterBlock:(id /* block */)a2;
- (void)syncUpdateMessageExtWithMessage:(id)a0 reason:(id)a1;
- (void)syncUpdateMessagePropertyWithMessage:(id)a0 reason:(id)a1;
- (void)updateMessagePropertyWithMessage:(id)a0 reason:(id)a1;
- (void)updateMessageExtWithMessage:(id)a0 reason:(id)a1;
- (BOOL)insertMessagesAndUpdateConversation:(id)a0 conversationExtraMap:(id)a1 files:(id)a2 inbox:(int)a3 reason:(id)a4;
- (void)dealWithRecallWhenUpdateMessageExtWithMessage:(id)a0 savedMessage:(id)a1 update:(id)a2 reason:(id)a3;
- (void)updateMessageReferAndMention:(id)a0 update:(id)a1;
- (void)updateMessage:(id)a0 withRemoteMessage:(id)a1 update:(id)a2;
- (id)getConversationUpdatedAtFromCoreInfoOrSettingInfoWithMessage:(id)a0 conversation:(id)a1;
- (BOOL)insertMessages:(id)a0 files:(id)a1 inbox:(int)a2 reason:(id)a3;
- (BOOL)updateConversationWithMessage:(id)a0 conversationExtraMap:(id)a1 inbox:(int)a2 reason:(id)a3;
- (void)messageStoreInternalNotifyWithUpdate:(id)a0 context:(id)a1;
- (id)addMonitorInToArray:(id)a0 event:(id)a1;
- (void)logParamsWithBadgeCount:(id)a0 conversationID:(id)a1 monitorsArray:(id)a2 pullIndex:(id)a3;
- (void)syncUpdateMessage:(id)a0 inConversationWithIdentifier:(id)a1 alterBlockWithForbidNotifyChanged:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end

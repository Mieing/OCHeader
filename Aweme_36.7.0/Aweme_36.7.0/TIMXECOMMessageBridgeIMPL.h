@class TIMXECOMGetUserMessageTrigger, NSString, NSMutableDictionary, TIMXSDKInstance;

@interface TIMXECOMMessageBridgeIMPL : NSObject <TIMXStartUpTaskProtocol, TIMXECOMMessageBridge, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) TIMXECOMGetUserMessageTrigger *getUserMessageTrigger;
@property (retain, nonatomic) NSMutableDictionary *getUserMessageHandlerMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)a0;

- (id)sendMessageWithTemplate:(id)a0 error:(id *)a1;
- (id)sendMessageWithTemplateNoSaveDB:(id)a0 error:(id *)a1;
- (void)resendMessage:(id)a0 sessionID:(id)a1;
- (void)resendMessage:(id)a0 sessionID:(id)a1 additionalTrackInfo:(id)a2;
- (void)userDidLogout:(id)a0;
- (id)createUserMessageInitHandlerWithInbox:(int)a0 userID:(long long)a1;
- (id)createNotifyNewMessageHandlerWithInbox:(int)a0 userID:(long long)a1;
- (void)createUserMessageHandlerWithInbox:(int)a0 userID:(long long)a1;
- (id)getUserMessageHandlerWithInbox:(int)a0;
- (void)setNeedsPullWithReason:(long long)a0;
- (void)setNeedsPullWithInbox:(int)a0 reason:(long long)a1;
- (void)setNeedsPullWithInbox:(int)a0 reason:(long long)a1 tryCount:(long long)a2;
- (void)loadOlderMsgesRemedialyFromConversationId:(id)a0 anchorMsgId:(id)a1 msgesCount:(long long)a2 priorityUseDB:(BOOL)a3 forcePullRemote:(BOOL)a4 currentMinIndexV2:(long long)a5 currentMaxIndexV2:(long long)a6 inboxType:(int)a7 completionBlock:(id /* block */)a8;
- (void)loadMsgesRemedialyFromConversationId:(id)a0 direction:(unsigned long long)a1 anchorMsgId:(id)a2 msgesCount:(long long)a3 priorityUseDB:(BOOL)a4 forcePullRemote:(BOOL)a5 currentMinIndexV2:(long long)a6 currentMaxIndexV2:(long long)a7 inboxType:(int)a8 completionBlock:(id /* block */)a9;
- (void)loadMsgesRemedialyFromConversationId:(id)a0 indexV2:(long long)a1 direction:(unsigned long long)a2 msgesCount:(long long)a3 inboxType:(int)a4 completionBlock:(id /* block */)a5;
- (void)fetchAllMessagesFromConversationIdentifier:(id)a0 minIndexV2:(long long)a1 maxIndexV2:(long long)a2 inboxType:(int)a3 shouldCancelBlock:(id /* block */)a4 completion:(id /* block */)a5;
- (void)remoteLoadMessagesBetweenMinIndexV2:(long long)a0 maxIndexV2:(long long)a1 direction:(unsigned long long)a2 inConversation:(id)a3 inboxType:(int)a4 completionBlock:(id /* block */)a5;
- (BOOL)checkContinousInRangeWithMinIndexV2:(long long)a0 maxIndexV2:(long long)a1 inConversation:(id)a2 emptyRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3 includeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a4 inboxType:(int)a5;
- (long long)insertMessages:(id)a0 conversationExtraMap:(id)a1 inInbox:(int)a2 reason:(id)a3;
- (long long)insertMessages:(id)a0 conversationExtraMap:(id)a1 inInbox:(int)a2 reason:(id)a3 context:(id)a4;
- (BOOL)insertMessagesToDB:(id)a0 conversationExtraMap:(id)a1 files:(id)a2 inbox:(int)a3 reason:(id)a4;
- (id)sendMessage:(id)a0 isSaveDB:(BOOL)a1 conversationId:(id)a2 error:(id *)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRootObject:(id)a0;

@end

@class NSString, NSMutableDictionary, TIMXSDKInstance, NSObject;
@protocol OS_dispatch_semaphore;

@interface TIMXECOMSendMessageHandler : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSMutableDictionary *sendProcessDurationMonitorMap;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *durationMonitorMapLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sendMessageWithTemplate:(id)a0 error:(id *)a1;
- (id)sendMessageWithTemplateNoSaveDB:(id)a0 error:(id *)a1;
- (void)resendMessage:(id)a0 sessionID:(id)a1;
- (void)resendMessage:(id)a0 sessionID:(id)a1 additionalTrackInfo:(id)a2;
- (id)sendMessage:(id)a0 isSaveDB:(BOOL)a1 conversationId:(id)a2 error:(id *)a3;
- (id)dealOverrideMessage:(id)a0 conversationId:(id)a1 error:(id *)a2;
- (id)generateTemplateModelWithSendMessage:(id)a0 conversationId:(id)a1;
- (id)sendMessageWithTemplate:(id)a0 isSaveDB:(BOOL)a1 error:(id *)a2;
- (BOOL)checkIllegalWithMessageTemplate:(id)a0 isSaveDB:(BOOL)a1 error:(id *)a2;
- (id)generateDBMessageWithTemplateModel:(id)a0 isSaveDB:(BOOL)a1 error:(id *)a2;
- (void)addDurationMonitor:(id)a0 toMessage:(id)a1;
- (void)sendRealMessage:(id)a0;
- (void)sendMessageToServer:(id)a0 allowRefetchTicket:(BOOL)a1 isSaveDB:(BOOL)a2;
- (void)addTrackInfoData:(id)a0 toMsg:(id)a1;
- (long long)nextOldClientMsgId;
- (void)refreshMentionedUsersToDBExtDictionary:(id)a0 templateModel:(id)a1;
- (void)refreshReferMessageInfoToDBLocalDictionary:(id)a0 templateModel:(id)a1;
- (long long)nextOrderIDForConversation:(id)a0;
- (id)handleReferMessageKVObjWhenGenerateDBMessage:(id)a0 templateModel:(id)a1;
- (void)notifyWillSendMessage:(id)a0;
- (id)handleReferMessageBeforRealSend:(id)a0;
- (id)sendFileParts:(id)a0;
- (void)legacyNotifyUpdateMessage:(id)a0 inConversationWithIdentifier:(id)a1;
- (void)trackMsgSendStart:(id)a0;
- (id)latestMonitorOfMessge:(id)a0;
- (void)reNewTicketAndSendMessageToServer:(id)a0 isSaveDB:(BOOL)a1 needMonitor:(BOOL)a2;
- (void)onSendMessageSuccessWithMessage:(id)a0 allowRefetchTicket:(BOOL)a1 isSaveDB:(BOOL)a2 responseObject:(id)a3;
- (void)onSendMessageFailedWithMessage:(id)a0 allowRefetchTicket:(BOOL)a1 isSaveDB:(BOOL)a2 error:(id)a3;
- (BOOL)checkIllegalWithMessageTemplateFiles:(id)a0 error:(id *)a1;
- (void)updateMessage:(id)a0 withResponse:(id)a1;
- (id)clearMonitorOfMessage:(id)a0;
- (void)trackMsgSend:(id)a0 responseObj:(id)a1 error:(id)a2;
- (void)sendOneFile:(id)a0 forMessage:(id)a1;
- (id)insertFilePartsToDBWithTemplateModel:(id)a0 belongingCovIdentifier:(id)a1 belongingMsgIdentifier:(id)a2 error:(id *)a3;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end

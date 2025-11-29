@class NSString, TIMXSDKInstance, NSHashTable, NSLock;
@protocol IESIMSendMessageLoggerProtocol, IESIMMessageSenderSingleInteractionDelegate;

@interface IESIMMessageSender : NSObject <TIMXOMessageSenderDelegate, IESIMLoginManagerMessage, IESIMTIMXLifeMessage, TIMXMessageSenderDelegate, IESIMMessageSenderProtocol>

@property (weak) TIMXSDKInstance *sdkRoot;
@property (retain, nonatomic) NSHashTable *delegates;
@property (copy) NSString *token;
@property (retain, nonatomic) NSLock *delegateLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESIMSendMessageLoggerProtocol> logger;
@property (weak, nonatomic) id<IESIMMessageSenderSingleInteractionDelegate> interactionDelegate;

- (void)iesim_didFinishLogin;
- (void)iesim_didFinishLogout;
- (void)unLock;
- (void)message:(id)a0 inConversation:(id)a1 didReceiveResponse:(id)a2 error:(id)a3;
- (void)asyncSendMessage:(id)a0 completion:(id /* block */)a1;
- (void)preloadIdentityTokenForMessageSendingIfNeeded;
- (void)asyncResendMessage:(id)a0 inConversation:(id)a1;
- (void)iesim_timxInstanceMounted:(id)a0;
- (void)iesim_timxInstanceUnmounted:(id)a0;
- (void)p_fillPropertyFromCurrentSDKIfNecessary;
- (id)p_storedSDKRoot;
- (void)p_clearPropertyOfSDK;
- (id)p_storedSDKRoot_Nullable;
- (void)message:(id)a0 inConversation:(id)a1 didReceiveAsyncResponse:(id)a2 error:(id)a3;
- (void)onMessageSendRequestBlockedByInvalidIdentityToken:(id)a0 inConversation:(id)a1;
- (BOOL)is_shouldAutoRetrySendingMessageWithError:(id)a0 createDate:(id)a1;
- (long long)is_delayTimeWithMessageWithMessageId:(id)a0 convID:(id)a1;
- (void)is_delayResendingMessageWithMessageId:(id)a0 convID:(id)a1 delayTime:(long long)a2;
- (void)is_clearResendDurationContextWithMessageId:(id)a0 convID:(id)a1;
- (id)storedSDKRoot;
- (id)is_durationContextKeyWithMessageId:(id)a0 convID:(id)a1;
- (void)resendMessage:(id)a0 inConversation:(id)a1;
- (BOOL)is_autoResendMessageIfNeededWithMessageId:(id)a0 convID:(id)a1 createDate:(id)a2 error:(id)a3;
- (id)responseWithTIMResponse:(id)a0 message:(id)a1 inConversation:(id)a2 error:(id)a3;
- (id)aiContext:(id)a0 conv:(id)a1;
- (void)addDelegate:(id)a0;
- (id)sendMessage:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (void)lock;
- (id)init;
- (void)dealloc;

@end

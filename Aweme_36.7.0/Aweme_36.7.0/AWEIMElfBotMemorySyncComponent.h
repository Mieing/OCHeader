@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, IESLCMessageHandlerProtocol;

@interface AWEIMElfBotMemorySyncComponent : AWEIMComponentBase <IESIMLoginManagerMessage, IESLCMessageHandlerService, IESIMMessageSenderDelegate, IESIMChatDataManagerDelegate, AWEIMElfBotMemorySyncProtocol>

@property (copy, nonatomic) NSString *pageIdentifier;
@property (retain, nonatomic) NSMutableDictionary *onlineStatusDic;
@property (retain, nonatomic) NSString *changeObserverToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (retain, nonatomic) NSMutableDictionary *contextDic;
@property (nonatomic) double msgExtTimeInterval;
@property (nonatomic) double msgResponseTimeGap;
@property (retain, nonatomic) NSMutableDictionary *sendReponseInfoDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)iesim_didInsertNewMessagesWithMessageIdentifiers:(id)a0 belongingConversationMap:(id)a1 reason:(long long)a2 context:(id)a3;
- (void)iesim_didReceiveSendMessageResponse:(id)a0;
- (void)iesim_didReceiveAsyncSendMessageResponse:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)iesim_didFinishLogin;
- (void)iesim_didFinishLogout;
- (void)monitorUserOnlineWithConversation:(id)a0;
- (void)startAskIfNeededWithConversation:(id)a0 userOptions:(unsigned long long)a1 requestInterval:(double)a2;
- (void)p_startAskIfNeededWithContext:(id)a0 requestInterval:(double)a1;
- (void)monitorUserOnlineWithUser:(id)a0 conversation:(id)a1;
- (void)checkAtElfMsg:(id)a0 conversationID:(id)a1 currentUserID:(long long)a2 results:(id)a3;
- (void)trackElfRepliedWithSet:(id)a0 now:(double)a1;
- (void)p_handleReceivedPushServiceWithMsg:(id)a0;
- (void)p_handleChatAIFrontierPushMessage:(id)a0;
- (void)p_handlePetMemoryPushMessage:(id)a0;
- (void)p_handleMemorySyncMessage:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)dealloc;

@end

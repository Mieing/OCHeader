@class NSLock, NSMutableDictionary, NSString;

@interface IESGCPCGMessageChannelComponent : IESGCPCGInstanceBaseComponent <IESGCPDIContextSubscriber, IESGCPCGInstanceActions, IESGCPCGMessageChannelRouter>

@property (retain, nonatomic) NSMutableDictionary *sendingMessageDict;
@property (retain, nonatomic) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)didSetGameCPDIContext;
- (void)playInstance:(id)a0 onSendCustomMessageAckWithCode:(int)a1 uniqueSeq:(id)a2 message:(id)a3;
- (void)playInstance:(id)a0 didReceiveCustomMessage:(id)a1;
- (void)playInstance:(id)a0 didReceiveServerPushedCustomNotice:(id)a1;
- (void)playInstance:(id)a0 didReceivePodMiddleWareMessage:(id)a1;
- (void)sendStringMessageByOSDKChannel:(id)a0 completion:(id /* block */)a1;
- (void)sendMessageByOSDKChannel:(id)a0 completion:(id /* block */)a1;
- (void)sendMessageByPodMiddleWareChannel:(id)a0;
- (void)didReceiveGameCustomActionWithBody:(id)a0;
- (void)_retrySendMessage:(id)a0;
- (id)_sendOSDKMessageWithoutRetry:(id)a0;
- (void)_messagePackTimeout:(id)a0;
- (id)sendCustomMessage:(id)a0 completion:(id /* block */)a1;
- (id)sendCustomMessageWithModel:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end

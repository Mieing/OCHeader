@class NSString, NSMutableDictionary, NSObject;
@protocol XPlayCloudMessageDelegate, OS_dispatch_semaphore;

@interface CGMatchCustomMessageManager : CGMatchObject <CGCustomMessageCallback, XPlayCloudMessageProtocol>

@property (retain, nonatomic) NSMutableDictionary *midToCallbackDic;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *callbackDicLock;
@property (nonatomic) long long txCurQPS;
@property (nonatomic) long long rxCurQPS;
@property (nonatomic) double txRecordTime;
@property (nonatomic) double rxRecordTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<XPlayCloudMessageDelegate> delegate;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (void)sendRTCCustomMessageWithString:(id)a0 callback:(id /* block */)a1;
- (void)sendFrequentRTCCustomMessageWithString:(id)a0;
- (void)onReceiveMessage:(id)a0;
- (void)sendPodMiddlewareMessage:(id)a0;
- (id)initWithItem:(id)a0 cloudPlayer:(id)a1 room:(id)a2 dataChannel:(id)a3;
- (void)onReceiveBinaryMessage:(id)a0;
- (void)onReceiveMiddleWarePBMessage:(id)a0;
- (void)onReceiveMiddleWareJsonMessage:(id)a0;
- (id)sendRTCMessageWithString:(id)a0 callback:(id /* block */)a1;
- (id)sendFrequentMessageWithString:(id)a0;
- (void)trackMiddlewareMessageSend;
- (void)sendCustomMessageWithMessageModel:(id)a0;
- (void)trackSendFrequentMsgWith:(id)a0;
- (void)trackSendMsgWith:(id)a0;
- (void)sendAckMessage:(id)a0;
- (void)trackReceiveMsgWith:(id)a0;
- (void)trackSendMsgAckWith:(id)a0;
- (void)trackReceiveFrequentMsgWith:(id)a0;
- (void)doOnReceiveMiddleWareMessageString:(id)a0;
- (void)trackMiddlewareMessageReceived;
- (void)sendCustomMessageWithInfo:(id)a0;
- (void)didMessageSendTimeout:(id)a0;
- (void).cxx_destruct;

@end

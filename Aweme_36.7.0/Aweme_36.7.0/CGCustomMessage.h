@class NSString;
@protocol XPlayCloudMessageDelegate;

@interface CGCustomMessage : CGObject <XPlayCloudMessageProtocol>

@property (weak, nonatomic) id<XPlayCloudMessageDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (void)sendRTCCustomMessageWithString:(id)a0 callback:(id /* block */)a1;
- (void)sendFrequentRTCCustomMessageWithString:(id)a0;
- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)sendPodMiddlewareMessage:(id)a0;
- (void)onReceiveMessageSDKMessage:(id)a0;
- (void)onReceiveMiddleWarePBMessage:(id)a0;
- (void)onReceiveMiddleWareJsonMessage:(id)a0;
- (void)trackMiddlewareMessageSend;
- (void)doOnReceiveMiddleWareMessageString:(id)a0;
- (void)trackMiddlewareMessageReceived;
- (void).cxx_destruct;

@end

@class NSString;

@interface FlowLinkSDK.IFlowLinkSessionImpl : NSObject <FlowLinkSDK.IFlowLinkSession>

@property (nonatomic, readonly) NSString *sessionId;
@property (nonatomic, readonly) long long state;

- (void)sendStreamWithFrame:(id)a0;
- (void)addListenerWithListener:(id)a0;
- (void)removeListenerWithListener:(id)a0;
- (long long)sendMessageWithMessage:(id)a0;
- (void)fastSendMessageWithMessage:(id)a0;
- (void)publishVideoStream:(BOOL)a0;
- (void)publishScreenStream:(BOOL)a0;
- (void)subscribeAllStreamsAudio:(BOOL)a0;
- (void).cxx_destruct;
- (void)disconnect;
- (id)init;
- (void)connect;

@end

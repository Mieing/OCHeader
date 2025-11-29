@class NSString, BDECPigeonClientConfigV2;
@protocol BDECIMCloudWebSocketBridgeV2Delegate;

@interface BDECIMCloudTIMXWebSocketBridgeV2 : NSObject <TIMXLongConnectionClientUnderlayingWebSocket, BDECIMCloudWebSocketBridgeV2Interface>

@property (retain, nonatomic) BDECPigeonClientConfigV2 *config;
@property (copy, nonatomic) id /* block */ notifyNewMessageCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BDECIMCloudWebSocketBridgeV2Delegate> webSocket;

- (BOOL)webSocketBreak;
- (void)handleLongConnectionStateChange:(unsigned long long)a0;
- (void)handleMessageReceived:(id)a0 receivedTimestamp:(double)a1;
- (id)generateNextMessage;
- (BOOL)sendMessage:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end

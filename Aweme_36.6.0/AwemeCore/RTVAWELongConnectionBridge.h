@class NSString;
@protocol RxInjector;

@interface RTVAWELongConnectionBridge : NSObject <AWERTVLongConnectionMessage, RTVJetWebSocketBridgeInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (nonatomic) unsigned long long connectionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ onMessageReceived;

- (BOOL)sendPushMessage:(id)a0;
- (void)aweRTVLongConnectionStateChanged:(unsigned long long)a0 url:(id)a1;
- (void)aweRTVLongConnectionDidReceiveMsg:(id)a0;
- (void)p_handleDidReceiveLongconnectionWithMsg:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

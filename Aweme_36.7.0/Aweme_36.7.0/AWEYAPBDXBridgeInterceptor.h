@class NSString;

@interface AWEYAPBDXBridgeInterceptor : NSObject <IESBridgeEngineInterceptor, BDLynxBridgeListenerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)listenBridgeEventWithSettings:(id)a0;
+ (id)sharedInstance;

- (void)lynxBridge:(id)a0 willCallEvent:(id)a1;
- (void)lynxBridge:(id)a0 didCallEvent:(id)a1;
- (void)lynxBridge:(id)a0 willHandleMethod:(id)a1;
- (void)lynxBridge:(id)a0 didHandleMethod:(id)a1;
- (void)lynxBridge:(id)a0 willCallback:(id)a1;
- (void)lynxBridge:(id)a0 didCallback:(id)a1;
- (void)bridgeEngine:(id)a0 willHandleBridgeMessage:(id)a1;
- (void)bridgeEngine:(id)a0 didCallbackWithMessage:(id)a1;
- (void)bridgeEngine:(id)a0 didFireEventWithMessage:(id)a1;
- (id)init;

@end

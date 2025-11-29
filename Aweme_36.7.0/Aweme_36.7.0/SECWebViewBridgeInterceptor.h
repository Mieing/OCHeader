@class NSString;

@interface SECWebViewBridgeInterceptor : NSObject <IESBridgeEngineInterceptor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shardInstance;

- (void)bridgeEngine:(id)a0 willHandleBridgeMessage:(id)a1;
- (void)bridgeEngine:(id)a0 willCallbackWithMessage:(id)a1;
- (void)bridgeEngine:(id)a0 didCallbackWithMessage:(id)a1;

@end

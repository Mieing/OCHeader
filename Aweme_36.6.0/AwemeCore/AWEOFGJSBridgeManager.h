@interface AWEOFGJSBridgeManager : NSObject

+ (id)sharedManager;

- (BOOL)handleIESBridgeWithContextInfo:(id)a0;
- (BOOL)handleTTBridgeWithContextInfo:(id)a0;
- (BOOL)handleMessage:(id)a0 exector:(id)a1 resultHandler:(id /* block */)a2;
- (id /* block */)responseHandlerWithContextInfo:(id)a0;

@end

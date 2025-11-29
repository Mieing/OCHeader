@interface IESBridgeMonitor : NSObject

+ (void)monitorJSBInvokeEventWithBridgeMessage:(id)a0 bridgeMethod:(id)a1 url:(id)a2 isAuthorized:(BOOL)a3;
+ (id)authStringWithType:(unsigned long long)a0;
+ (void)hook_monitorJSBInvokeEventWithBridgeMessage:(id)a0 bridgeMethod:(id)a1 url:(id)a2 isAuthorized:(BOOL)a3;

@end

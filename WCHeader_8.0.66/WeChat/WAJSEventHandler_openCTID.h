@interface WAJSEventHandler_openCTID : WAJSEventHandler_BaseEvent <MMKernelExt>

+ (id)currentWaitingHandler;
+ (void)setCurrentWaitingHandler:(id)a0;
+ (void)endWaiting:(id)a0;

- (id)init;
- (void)handleJSEvent:(id)a0;
- (id)convertDic2AuthDic:(id)a0;
- (void)onHandleOpenURL:(id)a0 bundleID:(id)a1;
- (void)cancel;

@end

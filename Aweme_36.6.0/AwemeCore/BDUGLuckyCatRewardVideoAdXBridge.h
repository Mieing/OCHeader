@interface BDUGLuckyCatRewardVideoAdXBridge : BDUGLuckyXBridgeMethod

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)__trackWatchAdVideoEventWithSuccess:(BOOL)a0 errorCode:(id)a1;
- (id)methodName;

@end

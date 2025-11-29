@interface AWEXTabReloadBridgeMethod : DHBaseBridgeMethod

- (Class)paramModelClass;
- (void)onRunloopIdle:(id /* block */)a0;
- (void)callWithParamModel:(id)a0 completionHandlerWithTracker:(id /* block */)a1;
- (long long)authType;
- (id)methodName;

@end

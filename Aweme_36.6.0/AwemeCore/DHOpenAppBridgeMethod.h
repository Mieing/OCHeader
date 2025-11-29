@interface DHOpenAppBridgeMethod : DHBaseBridgeMethod

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandlerWithTracker:(id /* block */)a1;
- (long long)authType;
- (id)methodName;

@end

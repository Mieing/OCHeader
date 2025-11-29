@interface DHSetClipboardDataBridgeMethod : DHBaseBridgeMethod

- (Class)paramModelClass;
- (Class)resultModelClass;
- (void)callWithParamModel:(id)a0 completionHandlerWithTracker:(id /* block */)a1;
- (id)p_getBDXBridgeStatusWithParamModel:(id)a0;
- (void)p_setClipboardAndPersistenceToken:(id)a0 cert:(id)a1;
- (long long)authType;
- (id)methodName;

@end

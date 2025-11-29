@interface BCMSetBcmChainParamsBridgeMethod : BDXBridgeMethod

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)updateParamForKey:(id)a0 value:(id)a1 updateType:(unsigned long long)a2 paramType:(unsigned long long)a3 page:(id)a4;
- (id)methodName;

@end

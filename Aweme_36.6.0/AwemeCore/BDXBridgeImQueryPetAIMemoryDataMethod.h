@interface BDXBridgeImQueryPetAIMemoryDataMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)statusSuccess:(BOOL)a0;
- (id)resultSuccess:(BOOL)a0 cid:(id)a1 data:(id)a2;
- (long long)authType;
- (id)methodName;

@end

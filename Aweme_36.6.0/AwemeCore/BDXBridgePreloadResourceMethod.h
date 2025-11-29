@interface BDXBridgePreloadResourceMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)fetchPreloadJsonSubResWithForestKit:(id)a0 MainUrl:(id)a1 mainUrlWithoutQuery:(id)a2;
- (long long)authType;
- (id)methodName;

@end

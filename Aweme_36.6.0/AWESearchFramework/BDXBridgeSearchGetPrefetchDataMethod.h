@interface BDXBridgeSearchGetPrefetchDataMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)configJSBHeader;
- (long long)authType;
- (id)methodName;

@end

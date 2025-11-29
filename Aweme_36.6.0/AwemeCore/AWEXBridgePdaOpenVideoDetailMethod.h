@interface AWEXBridgePdaOpenVideoDetailMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)awe_checkParamValidity:(id)a0;
- (BOOL)openVideoList:(id)a0 domainInfo:(id)a1;
- (BOOL)openSingleVideo:(id)a0 domainInfo:(id)a1;
- (long long)authType;
- (id)methodName;

@end

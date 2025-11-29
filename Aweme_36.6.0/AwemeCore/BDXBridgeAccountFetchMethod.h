@interface BDXBridgeAccountFetchMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)configJSBHeader;
- (void)processFetchResultWithResponseModel:(id)a0 paramModel:(id)a1 responseError:(id)a2 TTHttpResponse:(id)a3 completionHandler:(id /* block */)a4;
- (long long)authType;
- (id)methodName;

@end

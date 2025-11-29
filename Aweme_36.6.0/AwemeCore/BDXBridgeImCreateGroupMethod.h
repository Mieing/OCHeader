@interface BDXBridgeImCreateGroupMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (BOOL)shouldUseDetailErrorWithParamsModel:(id)a0;
- (id)statusWithResultValue:(id)a0;
- (long long)authType;
- (id)methodName;

@end

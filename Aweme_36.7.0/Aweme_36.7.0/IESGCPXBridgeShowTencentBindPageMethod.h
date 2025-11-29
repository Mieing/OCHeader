@interface IESGCPXBridgeShowTencentBindPageMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (BOOL)checkParamsValidity:(id)a0;
- (id)getFlowAuthBizModelWithTrackParams:(id)a0 atomicContext:(id)a1;
- (long long)authType;
- (id)methodName;

@end

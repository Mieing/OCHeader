@interface IESGCPXBridgeBindWechatGameRoleMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (BOOL)checkParamsValidity:(id)a0;
- (long long)authType;
- (id)methodName;

@end

@interface BDXBridgeEcGetCurrentGCJLocationMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)gcjLocationResultWithLocationModel:(id)a0 withParamsModel:(id)a1;
- (long long)authType;
- (id)methodName;

@end

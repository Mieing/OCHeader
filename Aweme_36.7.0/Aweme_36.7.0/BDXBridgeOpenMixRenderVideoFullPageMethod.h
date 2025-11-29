@interface BDXBridgeOpenMixRenderVideoFullPageMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)findNativeViewWithWeb:(id)a0 index:(long long)a1;
- (long long)authType;
- (id)methodName;

@end

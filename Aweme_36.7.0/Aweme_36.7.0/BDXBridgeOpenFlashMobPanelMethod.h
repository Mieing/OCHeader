@interface BDXBridgeOpenFlashMobPanelMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)awe_checkParamsValid:(id)a0;
- (long long)authType;
- (id)methodName;

@end

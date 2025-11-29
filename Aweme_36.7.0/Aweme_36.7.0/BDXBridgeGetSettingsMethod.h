@interface BDXBridgeGetSettingsMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)settingForKeyPath:(id)a0 withService:(id)a1 inBiz:(id)a2 type:(unsigned long long)a3;
- (BOOL)implementationCheckWithService:(id)a0 inBiz:(id)a1;
- (Class)classForType:(unsigned long long)a0;
- (id)methodName;

@end

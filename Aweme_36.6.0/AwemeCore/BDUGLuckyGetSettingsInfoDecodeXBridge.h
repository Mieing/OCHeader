@interface BDUGLuckyGetSettingsInfoDecodeXBridge : BDUGLuckyXBridgeMethod

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)__constructSettingsDictWithSettingsType:(unsigned long long)a0 settingsKeys:(id)a1;
- (id)methodName;

@end

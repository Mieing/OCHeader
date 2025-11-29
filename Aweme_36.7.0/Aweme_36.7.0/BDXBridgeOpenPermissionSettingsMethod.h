@interface BDXBridgeOpenPermissionSettingsMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)bdxConvertOPSM2CPM:(id)a0;
- (void)openSettingsAndCheckPermission:(id)a0 completionHandler:(id /* block */)a1;
- (long long)authType;
- (id)methodName;

@end

@interface BDXBridgeCheckAppsInfoMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (BOOL)isInstalledAppSchema:(id)a0;
- (long long)authType;
- (id)methodName;

@end

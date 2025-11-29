@interface BDXBridgeUgDownloadAppMethod : BDXBridgeMethod

+ (id)detectManagers;
+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)queryAppInstallStatusWithModel:(id)a0;
- (long long)authType;
- (id)methodName;

@end

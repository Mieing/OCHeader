@interface BDXBridgeCreatePOIMediaMethod : BDXBridgeMethod

+ (id)base64EncodeWithImagePath:(id)a0;
+ (void)uploadVideoWithParamModel:(id)a0 fileURL:(id)a1 completion:(id /* block */)a2;
+ (id)getCertWithParamModel:(id)a0;
+ (void)exportAllItemsWithAssetsIDs:(id)a0 bpeaCert:(id)a1 OnCompletion:(id /* block */)a2;
+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (long long)authType;
- (id)methodName;

@end

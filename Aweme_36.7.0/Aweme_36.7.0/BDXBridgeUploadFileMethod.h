@interface BDXBridgeUploadFileMethod : BDXBridgeMethod

+ (void)uploadFileWithParamModel:(id)a0 methodName:(id)a1 completionHandler:(id /* block */)a2;
+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (long long)authType;
- (id)methodName;

@end

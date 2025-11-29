@interface BDXBridgeSaveMediaFileMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveImageWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)showAlertWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (long long)authType;
- (id)methodName;
- (void)image:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;

@end

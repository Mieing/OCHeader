@interface BDXBridgeGetDecryptedImageMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)imageKey:(id)a0;
- (id)p_decryptedImage_v2:(id)a0;
- (id)p_decryptedImage:(id)a0;
- (id)storeIage:(id)a0;
- (long long)imageFormatFromData:(id)a0;
- (long long)authType;
- (id)methodName;

@end

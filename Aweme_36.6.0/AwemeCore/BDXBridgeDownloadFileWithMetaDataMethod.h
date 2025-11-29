@interface BDXBridgeDownloadFileWithMetaDataMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)saveImageToAlbumWithURL:(id)a0 response:(id)a1 paramModel:(id)a2 completionHandler:(id /* block */)a3;
- (long long)authType;
- (id)methodName;

@end

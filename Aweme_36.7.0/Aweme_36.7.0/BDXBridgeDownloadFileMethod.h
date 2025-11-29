@interface BDXBridgeDownloadFileMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)saveImageToAlbumWithURL:(id)a0 response:(id)a1 completionHandler:(id /* block */)a2;
- (void)saveVideoToAlbumWithURL:(id)a0 response:(id)a1 completionHandler:(id /* block */)a2;
- (void)failedHandlerWithURL:(id)a0 response:(id)a1 completionHandler:(id /* block */)a2 message:(id)a3;
- (void)requestPHAuthorizationWithCert:(id)a0 handler:(id /* block */)a1;
- (void)saveMediaDidFinishSavingWithError:(id)a0 contextInfo:(void *)a1;
- (void)video:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;
- (id)methodName;
- (void)image:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;

@end

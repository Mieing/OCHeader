@interface IESLiveDownloadFileMethodImpl : IESLiveDownloadFileMethod

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveImageToAlbumWithURL:(id)a0 response:(id)a1 completionHandler:(id /* block */)a2;
- (void)saveVideoToAlbumWithURL:(id)a0 response:(id)a1 completionHandler:(id /* block */)a2;
- (void)saveMediaDidFinishSavingWithError:(id)a0 contextInfo:(void *)a1;
- (id)filePathByStrippingSandboxPath:(id)a0;
- (id)makeError:(id)a0 code:(long long)a1;
- (void)requestPHAuthorization:(id /* block */)a0;
- (void)video:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;
- (void)image:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;

@end

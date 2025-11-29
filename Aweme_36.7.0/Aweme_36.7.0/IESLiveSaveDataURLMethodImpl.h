@interface IESLiveSaveDataURLMethodImpl : IESLiveSaveDataURLMethod

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveMediaDidFinishSavingWithError:(id)a0 contextInfo:(void *)a1;
- (id)filePathByStrippingSandboxPath:(id)a0;
- (void)requestPHAuthorization:(id /* block */)a0;
- (void)saveBase64DataToAlbum:(id)a0 fileURL:(id)a1 saveToAlbum:(id)a2 completion:(id /* block */)a3;
- (void)saveMediaToAlbumWithURL:(id)a0 isImage:(BOOL)a1 completion:(id /* block */)a2;
- (void)video:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;
- (void)image:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;

@end

@class IESGCPApi;

@interface IESGCPUploadGameCPImageMethodImpl : IESGCPUploadGameCPImageMethod

@property (retain, nonatomic) IESGCPApi *api;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)uploadImagesWithSelectData:(id)a0 completion:(id /* block */)a1;
- (void)checkImageXAuthInfoWithRawImageData:(id)a0 singleImageCompletion:(id /* block */)a1 allImagesCompletion:(id /* block */)a2 completion:(id /* block */)a3;
- (id)imageUploadRequest2Dict:(id)a0;
- (void)requestImageXAuthInfoWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end

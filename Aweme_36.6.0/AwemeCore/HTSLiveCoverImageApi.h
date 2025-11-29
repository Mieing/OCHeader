@interface HTSLiveCoverImageApi : HTSLiveApi

@property (nonatomic) double lastUploadImageTime;
@property (nonatomic) double lastRequestImageQualityTime;

- (void)uploadCoverImage:(id)a0 image:(id)a1 completion:(id /* block */)a2;
- (void)uploadCoverImage:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;
- (void)fetchCoverImage:(id)a0 completion:(id /* block */)a1;
- (id)uploadImage:(id)a0 URLString:(id)a1 progress:(id *)a2 parameters:(id)a3 completionHandler:(id /* block */)a4;
- (void)requestCoverQualityResultWithImageUri:(id)a0 completeBlock:(id /* block */)a1;

@end

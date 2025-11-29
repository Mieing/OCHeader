@protocol IESLiveHTTPClient;

@interface IESLiveImageCropApi : HTSLiveApi

@property (retain, nonatomic) id<IESLiveHTTPClient> uploadClient;

- (id)sha1:(id)a0;
- (id)uploadPhotoWithImage:(id)a0 withRoom:(id)a1 withRequestPage:(id)a2 andWithRatio:(long long)a3 authorId:(id)a4 completionHandler:(id /* block */)a5;
- (void)monitor_emojiAddWithScale:(long long)a0 duration:(double)a1 error:(id)a2;
- (id)genSign:(id)a0 timestamp:(id)a1 appSecret:(id)a2;
- (void)imageCropWithAnchorAvatorImage:(id)a0 withRoom:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
